/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_CONNECTABLES_H__
#define __MayaDM_CONNECTABLES_H__
namespace MayaDM
{
enum ConnectableType
{
	CT_DOUBLE,
	CT_MATRIX,
	CT_TARGET,
	CT_DOUBLE3,
	CT_UNSIGNEDINT,
	CT_BOOL,
	CT_DIRECTION,
	CT_NURBSCURVE,
	CT_FLOAT,
	CT_NURBSSURFACE,
	CT_CHAR,
	CT_FLOAT3,
	CT_AXISANGLE,
	CT_FUNCTION,
	CT_MESSAGE,
	CT_DOUBLEARRAY,
	CT_SHORT,
	CT_STRING,
	CT_MENTALRAYCONTROLS,
	CT_GENERICTYPEDDATA,
	CT_INT,
	CT_SMAPWINDOW,
	CT_VECTORARRAY,
	CT_RESULT,
	CT_ADDR,
	CT_MESH,
	CT_INPUTTARGET,
	CT_INPUTTARGETGROUP,
	CT_INPUTTARGETITEM,
	CT_GEOMETRY,
	CT_POINTARRAY,
	CT_COMPONENTLIST,
	CT_NURBSSHELL,
	CT_DYNBRUSH,
	CT_LEAFCURL,
	CT_PETALCURL,
	CT_WIDTHSCALE,
	CT_LEAFWIDTHSCALE,
	CT_PETALWIDTHSCALE,
	CT_TWIGLENGTHSCALE,
	CT_ENVIRONMENT,
	CT_REFLECTIONROLLOFF,
	CT_FLOAT2,
	CT_GENERIC,
	CT_INCACHE,
	CT_CACHEDATA,
	CT_DOUBLE2,
	CT_POSTPROJECTION,
	CT_FILMROLLCONTROL,
	CT_CLIPEVALUATE,
	CT_CLIPEVALUATE_INMAP,
	CT_CLIPEVALUATE_OUTMAP,
	CT_CHARACTERMAPPING,
	CT_CLIPEVALLIST,
	CT_CLIPEVAL,
	CT_CLIPEVAL_INMAP,
	CT_CLIPEVAL_OUTMAP,
	CT_CHARACTERDATA,
	CT_INTARRAY,
	CT_BLENDLIST,
	CT_BLENDLIST_INMAP,
	CT_BLENDLIST_OUTMAP,
	CT_CLIPFUNCTION,
	CT_CLIPFUNCTION_INMAP,
	CT_CLIPFUNCTION_OUTMAP,
	CT_FLTMATRIX,
	CT_CLUSTERXFORMS,
	CT_CLUSTERTRANSFORMS,
	CT_UVSET,
	CT_COLORSET,
	CT_COLORSETPOINTS,
	CT_SUBDIVISIONSURFACE,
	CT_BOUNDINGBOX,
	CT_INSTOBJGROUPS,
	CT_OBJECTGROUPS,
	CT_DRAWOVERRIDE,
	CT_UNSIGNEDCHAR,
	CT_RENDERINFO,
	CT_RENDERLAYERINFO,
	CT_GHOSTCUSTOMSTEPS,
	CT_LIGHTDATA,
	CT_DRAWINFO,
	CT_INPUT,
	CT_NID,
	CT_CONNECTIONDENSITYRANGE,
	CT_STRENGTHDROPOFF,
	CT_RADIUSMAP,
	CT_RADIUSMAPUSAMPLES,
	CT_RADIUSMAPVSAMPLES,
	CT_POWERMAP,
	CT_POWERMAPUSAMPLES,
	CT_POWERMAPVSAMPLES,
	CT_INFLUENCEMAP,
	CT_INFLUENCEMAPUSAMPLES,
	CT_INFLUENCEMAPVSAMPLES,
	CT_STARTLENGTHMAP,
	CT_STARTLENGTHMAPUSAMPLES,
	CT_STARTLENGTHMAPVSAMPLES,
	CT_ENDLENGTHMAP,
	CT_ENDLENGTHMAPUSAMPLES,
	CT_ENDLENGTHMAPVSAMPLES,
	CT_THRESHOLDLENGTHMAP,
	CT_THRESHOLDLENGTHMAPUSAMPLES,
	CT_THRESHOLDLENGTHMAPVSAMPLES,
	CT_CURVERADIUSMAP,
	CT_CURVERADIUSMAPUSAMPLES,
	CT_CURVERADIUSMAPVSAMPLES,
	CT_CURVEPOWERMAP,
	CT_CURVEPOWERMAPUSAMPLES,
	CT_CURVEPOWERMAPVSAMPLES,
	CT_CURVEINFLUENCEMAP,
	CT_CURVEINFLUENCEMAPUSAMPLES,
	CT_CURVEINFLUENCEMAPVSAMPLES,
	CT_CURVESTARTLENGTHMAP,
	CT_CURVESTARTLENGTHMAPUSAMPLES,
	CT_CURVESTARTLENGTHMAPVSAMPLES,
	CT_CURVEENDLENGTHMAP,
	CT_CURVEENDLENGTHMAPUSAMPLES,
	CT_CURVEENDLENGTHMAPVSAMPLES,
	CT_CURVETHRESHOLDLENGTHMAP,
	CT_CURVETHRESHOLDLENGTHMAPUSAMPLES,
	CT_CURVETHRESHOLDLENGTHMAPVSAMPLES,
	CT_BASECOLORMAP,
	CT_BASECOLORMAPUSAMPLES,
	CT_BASECOLORMAPVSAMPLES,
	CT_TIPCOLORMAP,
	CT_TIPCOLORMAPUSAMPLES,
	CT_TIPCOLORMAPVSAMPLES,
	CT_BASEAMBIENTCOLORMAP,
	CT_BASEAMBIENTCOLORMAPUSAMPLES,
	CT_BASEAMBIENTCOLORMAPVSAMPLES,
	CT_TIPAMBIENTCOLORMAP,
	CT_TIPAMBIENTCOLORMAPUSAMPLES,
	CT_TIPAMBIENTCOLORMAPVSAMPLES,
	CT_SPECULARCOLORMAP,
	CT_SPECULARCOLORMAPUSAMPLES,
	CT_SPECULARCOLORMAPVSAMPLES,
	CT_LENGTHMAP,
	CT_LENGTHMAPUSAMPLES,
	CT_LENGTHMAPVSAMPLES,
	CT_SPECULARSHARPNESSMAP,
	CT_SPECULARSHARPNESSMAPUSAMPLES,
	CT_SPECULARSHARPNESSMAPVSAMPLES,
	CT_BALDNESSMAP,
	CT_BALDNESSMAPUSAMPLES,
	CT_BALDNESSMAPVSAMPLES,
	CT_BASEOPACITYMAP,
	CT_BASEOPACITYMAPUSAMPLES,
	CT_BASEOPACITYMAPVSAMPLES,
	CT_TIPOPACITYMAP,
	CT_TIPOPACITYMAPUSAMPLES,
	CT_TIPOPACITYMAPVSAMPLES,
	CT_BASEWIDTHMAP,
	CT_BASEWIDTHMAPUSAMPLES,
	CT_BASEWIDTHMAPVSAMPLES,
	CT_TIPWIDTHMAP,
	CT_TIPWIDTHMAPUSAMPLES,
	CT_TIPWIDTHMAPVSAMPLES,
	CT_SEGMENTSMAP,
	CT_SEGMENTSMAPUSAMPLES,
	CT_SEGMENTSMAPVSAMPLES,
	CT_BASECURLMAP,
	CT_BASECURLMAPUSAMPLES,
	CT_BASECURLMAPVSAMPLES,
	CT_TIPCURLMAP,
	CT_TIPCURLMAPUSAMPLES,
	CT_TIPCURLMAPVSAMPLES,
	CT_SCRAGGLEMAP,
	CT_SCRAGGLEMAPUSAMPLES,
	CT_SCRAGGLEMAPVSAMPLES,
	CT_SCRAGGLEFREQUENCYMAP,
	CT_SCRAGGLEFREQUENCYMAPUSAMPLES,
	CT_SCRAGGLEFREQUENCYMAPVSAMPLES,
	CT_SCRAGGLECORRELATIONMAP,
	CT_SCRAGGLECORRELATIONMAPUSAMPLES,
	CT_SCRAGGLECORRELATIONMAPVSAMPLES,
	CT_INCLINATIONMAP,
	CT_INCLINATIONMAPUSAMPLES,
	CT_INCLINATIONMAPVSAMPLES,
	CT_ROLLMAP,
	CT_ROLLMAPUSAMPLES,
	CT_ROLLMAPVSAMPLES,
	CT_POLARMAP,
	CT_POLARMAPUSAMPLES,
	CT_POLARMAPVSAMPLES,
	CT_ATTRACTIONMAP,
	CT_ATTRACTIONMAPUSAMPLES,
	CT_ATTRACTIONMAPVSAMPLES,
	CT_OFFSETMAP,
	CT_OFFSETMAPUSAMPLES,
	CT_OFFSETMAPVSAMPLES,
	CT_CLUMPINGMAP,
	CT_CLUMPINGMAPUSAMPLES,
	CT_CLUMPINGMAPVSAMPLES,
	CT_CLUMPINGFREQUENCYMAP,
	CT_CLUMPINGFREQUENCYMAPUSAMPLES,
	CT_CLUMPINGFREQUENCYMAPVSAMPLES,
	CT_CLUMPSHAPEMAP,
	CT_CLUMPSHAPEMAPUSAMPLES,
	CT_CLUMPSHAPEMAPVSAMPLES,
	CT_ATTRACTORS,
	CT_DEFORMEDLATTICE,
	CT_LATTICE,
	CT_BASELATTICE,
	CT_STUCACHELIST,
	CT_INPUTDATA,
	CT_GENERICARRAY,
	CT_FALLOFFCURVE,
	CT_FLUID,
	CT_RESOLUTION,
	CT_DIMENSIONS,
	CT_FIELDDATA,
	CT_FIELDLIST,
	CT_FIELDFUNCTION,
	CT_FIELDFUNCTION_INMAP,
	CT_FIELDFUNCTION_OUTMAP,
	CT_EMISSIONLIST,
	CT_EMISSIONFUNCTION,
	CT_EMISSIONFUNCTION_INMAP,
	CT_EMISSIONFUNCTION_OUTMAP,
	CT_SUBVOLUMECENTER,
	CT_SUBVOLUMESIZE,
	CT_COLOR,
	CT_OPACITY,
	CT_INCANDESCENCE,
	CT_COLLISIONDATA,
	CT_SWEPTGEOMETRY,
	CT_STIFFNESSSCALE,
	CT_CLUMPWIDTHSCALE,
	CT_ATTRACTIONSCALE,
	CT_HAIRCURVE,
	CT_FACEINDEX,
	CT_FACEFIRST,
	CT_FACESECOND,
	CT_IDMAPPING,
	CT_LONG3,
	CT_LONGARRAY,
	CT_COMPINSTOBJGROUPS,
	CT_COMPOBJECTGROUPS,
	CT_HAIRPIN,
	CT_CLUMPCURL,
	CT_CLUMPFLATNESS,
	CT_HAIRWIDTHSCALE,
	CT_HAIRCOLORSCALE,
	CT_DISPLACEMENTSCALE,
	CT_HAIRRENDERINFO,
	CT_COLORSCALE,
	CT_FLOORCONTACTS,
	CT_HANDSFLOORCONTACTSETUP,
	CT_CONTACTSPOSITION,
	CT_FEETFLOORCONTACTSETUP,
	CT_FEETCONTACTPOSITION,
	CT_FINGERSFLOORCONTACTSETUP,
	CT_TOESFLOORCONTACTSETUP,
	CT_SOLVING,
	CT_FINGERTIPSSIZES,
	CT_TOETIPSSIZES,
	CT_HEAD,
	CT_LEFTARM,
	CT_RIGHTARM,
	CT_CHEST,
	CT_HIPS,
	CT_LEFTLEG,
	CT_RIGHTLEG,
	CT_EXTRA,
	CT_STIFFNESS,
	CT_KILLPITCH,
	CT_ROLLEXTRACTION,
	CT_STRINGARRAY,
	CT_HYPERPOSITION,
	CT_SHORT2,
	CT_BOX,
	CT_SPHERE,
	CT_CHILDJOINTCLUSTERXFORMS,
	CT_NEXTJOINTCLUSTERXFORMS,
	CT_DISTANCELIST,
	CT_INPUTS,
	CT_LINK,
	CT_IGNORE,
	CT_SHADOWLINK,
	CT_SHADOWIGNORE,
	CT_DROPOFF,
	CT_LINEMODIFIER,
	CT_MIFILESIZE,
	CT_COLORPERVERTEX,
	CT_VERTEXCOLOR,
	CT_VERTEXFACECOLOR,
	CT_NURBSPATCHUVIDS,
	CT_LONG2,
	CT_SELECTIONLIST,
	CT_WAVEHEIGHT,
	CT_WAVETURBULENCE,
	CT_WAVEPEAKING,
	CT_EMITTERDATA,
	CT_INSTANCEDATA,
	CT_INPUTSURFACE,
	CT_CURVATUREWIDTH,
	CT_TAPERCURVE,
	CT_REDSCALE,
	CT_GREENSCALE,
	CT_BLUESCALE,
	CT_ALPHASCALE,
	CT_INTENSITYSCALE,
	CT_PROFILECURVE,
	CT_CACHEDUVS,
	CT_NEWUV,
	CT_INQUAD,
	CT_DEFAULT,
	CT_OUTPUT,
	CT_COLORENTRYLIST,
	CT_TRANSPARENCY,
	CT_SPECULARROLLOFF,
	CT_SPECULARCOLOR,
	CT_REFLECTIVITY,
	CT_CONNECTIONLIST,
	CT_MULTIPARENTLIST,
	CT_REFERENCEEDITS,
	CT_RED,
	CT_GREEN,
	CT_BLUE,
	CT_HUE,
	CT_SATURATION,
	CT_VALUE,
	CT_RENDERPASSINFO,
	CT_ADJUSTMENTS,
	CT_OUTADJUSTMENTS,
	CT_GENERALFORCE,
	CT_FUNCTION_INMAP,
	CT_FUNCTION_OUTMAP,
	CT_WEIGHTLIST,
	CT_SOFTMODXFORMS,
	CT_SOFTMODTRANSFORMS,
	CT_PATHCURVE,
	CT_PRESSURESCALE,
	CT_VERTEX,
	CT_VERTEXTWEAK,
	CT_SUBDIVEDGECREASE,
	CT_SUBDIVTEXTCOORD,
	CT_SUBDIVFACEUVIDS,
	CT_COLLISIONOFFSETVELOCITYINCREMENT,
	CT_COLLISIONDEPTHVELOCITYINCREMENT,
	CT_COLLISIONOFFSETVELOCITYMULTIPLIER,
	CT_COLLISIONDEPTHVELOCITYMULTIPLIER,
	CT_OUTCOLORDATA,
	CT_DOUBLE4,
	CT_PLIST,
	CT_VLIST,
	CT_COLORRAMP,
	CT_COLORRANGE,
	CT_PENUMBRA,
	CT_AXIS,
	CT_WTMATRIX};
/** Macro to connect compatible attributes.*/
    #define connectAttr(file, src, dst) {   		\
    fprintf(file, "connectAttr ");      		\
    src;                                			\
    fprintf(file, " ");                 		\
    dst;                                			\
    fprintf(file, ";\n"); }

/** Macro to connect compatible attributes.*/
    #define connectNextAttr(file, src, dst) {   \
    fprintf(file, "connectAttr ");      		\
    src;                                		\
    fprintf(file, " ");                 		\
    dst;                                		\
    fprintf(file, " -na"); 		\
    fprintf(file, ";\n"); }

}//namespace MayaDM
#endif//__MayaDM_CONNECTABLES_H__
