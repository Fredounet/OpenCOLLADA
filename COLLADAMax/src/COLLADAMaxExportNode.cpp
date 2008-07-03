/*
    Copyright (c) 2008 Intel Corporation
    Copyright (c) 2005-2008 Sony Computer Entertainment America
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of COLLADAMaya.

    COLLADAMaya is free software; you can redistribute it and/or modify
    it under the terms of the MIT License as published by the
    Massachusetts Institute of Technology.

    COLLADAMaya is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    MIT License for more details.

    You should have received a copy of the MIT License along with
    COLLADAMaya; see the file COPYING. If not have a look here:
    http://www.opensource.org/licenses/mit-license.php
*/

#include "ColladaMaxStableHeaders.h"

#include "COLLADAMaxExportNode.h"

#include <max.h>
#include <modstack.h>
#include <cs/bipexp.h>

namespace COLLADAMax
{


    //---------------------------------------------------------------
    ExportNode::ExportNode ( INode * iNode )
            : mINode ( iNode ),
            /*  mTranslationController(0),
              mRotationController(0),
              mScaleController(0),*/
            mType ( UNDETERMINED )
    {}

    //---------------------------------------------------------------
    ExportNode::ExportNode ( INode * iNode, Type type )
            : mINode ( iNode ),
            /*  mTranslationController(0),
              mRotationController(0),
              mScaleController(0),*/
            mType ( type )
    {}


    //---------------------------------------------------------------
    ExportNode::Type ExportNode::getType() const
    {
        if ( mType == UNDETERMINED )
            mType = determineType();

        return mType;
    }



    //---------------------------------------------------------------
    void ExportNode::clean()
    {
        while ( !mChildren.empty() )
        {
            delete mChildren.back();
            mChildren.pop_back();
        }
    }


    //---------------------------------------------------------------
    ExportNode::Type ExportNode::determineType ( INode * iNode )
    {
        Animatable * animatable = iNode->GetObjectRef();

        if ( animatable == 0 )
            return ExportNode::UNKNOWN;

        Animatable* base = animatable;

        // Modifiers are applied to the object, acquire the base object
        while ( base->SuperClassID() == GEN_DERIVOB_CLASS_ID )
        {
            IDerivedObject * derivedObject = ( IDerivedObject* ) base;
            base = derivedObject->GetObjRef();
        }

        SClass_ID superClassId = base->SuperClassID();

        Class_ID classId = base->ClassID();

        switch ( superClassId )
        {

        case GEOMOBJECT_CLASS_ID:
        {
#if 1
            //we need this, as soon as we support bones
            // Check for a Max bone mesh

            if ( classId == BONE_OBJ_CLASSID )
                return ExportNode::BONE;

            // Check for biped
            Control* control = iNode->GetTMController();

            if ( control != NULL )
            {
                Class_ID ccid = control->ClassID();

                if ( ccid == BIPSLAVE_CONTROL_CLASS_ID || ccid == BIPBODY_CONTROL_CLASS_ID || ccid == FOOTPRINT_CLASS_ID || ccid == BIPED_CLASS_ID )
                    return ExportNode::BONE;
            }

#endif
            return ExportNode::MESH;
        }
        }

        return ExportNode::UNKNOWN;
    }


    //---------------------------------------------------------------
    ExportNode::Type ExportNode::determineType() const
    {
        return determineType ( mINode );
    }


    void ExportNode::addSymbol ( Mtl * material, const String & symbol )
    {
        Symbol newSymbol;
        newSymbol.used = false;
        newSymbol.name = mIdList.addId ( symbol );
        mMeshSymbolMap[ material ] = newSymbol;
    }



    //---------------------------------------------------------------
    const String& ExportNode::getSymbolByMaterialAndSetAsUsed ( Mtl* material )
    {
        MeshSymbolMap::iterator it = mMeshSymbolMap.find ( material );

        assert ( it != mMeshSymbolMap.end() );

        it->second.used = true;

        return it->second.name;
    }
}