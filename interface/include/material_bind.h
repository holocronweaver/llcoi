/******************************************************************************
 * material_bind.h - bindings for Ogre::Material
 ******************************************************************************
 * This file is part of
 *     __ __              _ 
 *    / // /_____ ____   (_)
 *   / // // ___// __ \ / / 
 *  / // // /__ / /_/ // /  
 * /_//_/ \___/ \____//_/   
 *                          
 * Low Level C Ogre Interface (llcoi)
 *
 * See http://code.google.com/p/llcoi/ for more information.
 *
 * Copyright (c) 2011, Llcoi Team
 * 
 * License: MIT
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/
#pragma once
#ifndef MATERIAL_BIND_H
#define MATERIAL_BIND_H
#include "ogre_interface.h"

#define MaterialHandle void*
#define MaterialPtrHandle void*
#define TechniqueHandle void*
#define RenderableHandle void*

//Material(ResourceManager* creator, const String& name, ResourceHandle handle, const String& group, bool isManual = false, ManualResourceLoader* loader = 0)
//~Material()
DLL void destroy_material(MaterialHandle handle);
//Material& operator=( const Material& rhs )
//bool isTransparent() const
DLL int material_is_transparent(const MaterialHandle handle);
//void setReceiveShadows(bool enabled) 
DLL void material_set_receive_shadows(MaterialHandle handle);
//bool getReceiveShadows() const 
DLL int material_get_receive_shadows(const MaterialHandle handle);
//void setTransparencyCastsShadows(bool enabled)
DLL void material_set_transparency_casts_shadows(MaterialHandle handle, int enabled);
//bool getTransparencyCastsShadows() const
DLL int material_get_transparency_casts_shadows(const MaterialHandle handle);
//Technique* createTechnique()
DLL TechniqueHandle material_create_technique(MaterialHandle handle);
//Technique* getTechnique(unsigned short index)
DLL TechniqueHandle material_get_technique_by_index(MaterialHandle handle, unsigned short index);
//Technique* getTechnique(const String& name)
DLL TechniqueHandle material_get_technique_by_name(MaterialHandle handle, const char* name);
//unsigned short getNumTechniques() const
DLL unsigned short material_get_num_techniques(const MaterialHandle handle);
//void removeTechnique(unsigned short index);		
DLL void material_remove_technique(MaterialHandle handle, unsigned short index);
//void removeAllTechniques()
DLL void material_remove_all_techniques(MaterialHandle handle);
//typedef VectorIterator<Techniques> TechniqueIterator
//TechniqueIterator getTechniqueIterator()
//TechniqueIterator getSupportedTechniqueIterator()
//Technique* getSupportedTechnique(unsigned short index)
DLL void material_get_supported_technique(MaterialHandle handle, unsigned short index);
//unsigned short getNumSupportedTechniques() const
DLL unsigned short material_get_num_supported_techniques(const MaterialHandle handle);
//const String& getUnsupportedTechniquesExplanation() const
DLL const char* material_get_unsupported_techniques_explanation(const MaterialHandle handle);
//unsigned short getNumLodLevels(unsigned short schemeIndex) const
DLL unsigned short material_get_num_lod_levels_by_index(const MaterialHandle handle, unsigned short scheme_index);
//unsigned short getNumLodLevels(const String& schemeName) const
DLL unsigned short material_get_num_lod_levels_by_name(const MaterialHandle handle, const char* scheme_name);
//Technique* getBestTechnique(unsigned short lodIndex = 0, const Renderable* rend = 0)
DLL TechniqueHandle material_get_best_technique(MaterialHandle handle,  unsigned short lod_index, const RenderableHandle rend);
//MaterialPtr clone(const String& newName, bool changeGroup = false,  const String& newGroup = StringUtil::BLANK) const
DLL MaterialPtrHandle material_clone(const MaterialHandle handle, const char* new_name, int change_group, const char* new_group);
//void copyDetailsTo(MaterialPtr& mat) const
DLL void material_copy_details_to(const MaterialHandle handle, MaterialPtrHandle mat);
//void compile(bool autoManageTextureUnits = true)
DLL void material_compile(MaterialHandle handle, int auto_manage_texture_units);
//void setPointSize(Real ps)
DLL void material_set_point_size(MaterialHandle handle, coiReal ps);
//void setAmbient(Real red, Real green, Real blue)
DLL void material_set_ambient_rgb(MaterialHandle handle, coiReal red, coiReal green, coiReal blue);
//void setAmbient(const ColourValue& ambient)
DLL void material_set_ambient(MaterialHandle handle, const coiColourValue* ambient);
//void setDiffuse(Real red, Real green, Real blue, Real alpha)
DLL void material_set_diffuse_rgba(MaterialHandle handle, coiReal red, coiReal green, coiReal blue, coiReal alpha);
//void setDiffuse(const ColourValue& diffuse)
DLL void material_set_diffuse(MaterialHandle handle, const coiColourValue* diffuse);
//void setSpecular(Real red, Real green, Real blue, Real alpha)
DLL void material_set_specular_rgba(MaterialHandle handle, coiReal red, coiReal green, coiReal blue, coiReal alpha);
//void setSpecular(const ColourValue& specular)
DLL void material_set_specular(MaterialHandle handle, const coiColourValue* specular);
//void setShininess(Real val)
DLL void material_set_shininess(MaterialHandle handle, coiReal val);
//void setSelfIllumination(Real red, Real green, Real blue)
DLL void material_set_self_illumination_rgb(MaterialHandle handle, coiReal red, coiReal green, coiReal blue);
//void setSelfIllumination(const ColourValue& selfIllum)
DLL void material_set_self_illumination(MaterialHandle handle, const coiColourValue* self_illum);
//void setDepthCheckEnabled(bool enabled)
DLL void material_set_depth_check_enabled(MaterialHandle handle, int enabled);
//void setDepthWriteEnabled(bool enabled)
DLL void material_set_depth_write_enabled(MaterialHandle handle, int enabled);
//void setDepthFunction( CompareFunction func )
DLL void material_set_depth_function(MaterialHandle handle, compare_function func);
//void setColourWriteEnabled(bool enabled)
DLL void material_set_colour_write_enabled(MaterialHandle handle, int enabled);
//void setCullingMode( CullingMode mode )
//void setManualCullingMode( ManualCullingMode mode )
//void setLightingEnabled(bool enabled)
//void setShadingMode( ShadeOptions mode )
//void setFog(bool overrideScene,  FogMode mode = FOG_NONE, const ColourValue& colour = ColourValue::White, Real expDensity = 0.001, Real linearStart = 0.0, Real linearEnd = 1.0 )
//void setDepthBias(float constantBias, float slopeScaleBias)
//void setTextureFiltering(TextureFilterOptions filterType)
//void setTextureAnisotropy(int maxAniso)
//void setSceneBlending( const SceneBlendType sbt )
//void setSeparateSceneBlending( const SceneBlendType sbt, const SceneBlendType sbta )
//void setSceneBlending( const SceneBlendFactor sourceFactor, const SceneBlendFactor destFactor)
//void setSeparateSceneBlending( const SceneBlendFactor sourceFactor, const SceneBlendFactor destFactor, const SceneBlendFactor sourceFactorAlpha, const SceneBlendFactor destFactorAlpha)
//void _notifyNeedsRecompile()
//void setLodLevels(const LodValueList& lodValues)
//LodValueIterator getLodValueIterator() const
//LodValueIterator getUserLodValueIterator() const
//ushort getLodIndex(Real value) const
//const LodStrategy *getLodStrategy() const
//void setLodStrategy(LodStrategy *lodStrategy)
//void touch() 
//bool applyTextureAliases(const AliasTextureNamePairList& aliasList, const bool apply = true) const
//bool getCompilationRequired() const

#endif
