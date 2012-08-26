/******************************************************************************
 * skeleton_bind.h - bindings for Ogre::Skeleton
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
#ifndef SKELETON_BIND_H 
#define SKELETON_BIND_H

#include "ogre_interface.h"
#define SkeletonHandle void*
#define BoneHandle void*

//Skeleton(ResourceManager* creator, const String& name, ResourceHandle handle, const String& group, bool isManual = false, ManualResourceLoader* loader = 0);
//~Skeleton();
DLL void destroy_skeleton(SkeletonHandle handle);
//Bone* createBone(void);
DLL BoneHandle skeleton_create_bone(SkeletonHandle handle);
//Bone* createBone(unsigned short handle);
DLL BoneHandle skeleton_create_bone_with_handle(SkeletonHandle handle, unsigned short bone_handle);
//Bone* createBone(const String& name);
DLL BoneHandle skeleton_create_bone_with_name(SkeletonHandle handle, const char* name);
//Bone* createBone(const String& name, unsigned short handle);
DLL BoneHandle skeleton_create_bone_with_name_and_handle(SkeletonHandle handle, const char* name, unsigned short bone_handle);
//unsigned short getNumBones(void) const;
DLL unsigned short skeleton_get_num_bones(const SkeletonHandle handle);
//Bone* getRootBone(void) const;
DLL BoneHandle skeleton_get_root_bone(const SkeletonHandle handle);
//typedef vector<Bone*>::type BoneList;
//typedef VectorIterator<BoneList> BoneIterator;
//TODO: BoneIterator getRootBoneIterator(void);
//TODO: BoneIterator getBoneIterator(void);
//Bone* getBone(unsigned short handle) const;
DLL BoneHandle skeleton_get_bone_by_handle(const SkeletonHandle handle, unsigned short bone_handle);
//Bone* getBone(const String& name) const;
DLL BoneHandle skeleton_get_bone_by_name(const SkeletonHandle handle, const char* name);
//bool hasBone(const String& name) const;
DLL int skeleton_has_bone(const SkeletonHandle handle, const char* name);
//void setBindingPose(void);
DLL void skeleton_set_binding_pose(SkeletonHandle handle);
//void reset(bool resetManualBones = false);
DLL void skeleton_reset(SkeletonHandle handle, int reset_manual_bones);
//TODO: Animation* createAnimation(const String& name, Real length);
//TODO: Animation* getAnimation(const String& name, const LinkedSkeletonAnimationSource** linker) const;
//TODO: Animation* getAnimation(const String& name) const;
//TODO: Animation* _getAnimationImpl(const String& name, const LinkedSkeletonAnimationSource** linker = 0) const;
//bool hasAnimation(const String& name) const;
DLL int skeleton_has_animation(const SkeletonHandle handle, const char* name);
//void removeAnimation(const String& name);
DLL void skeleton_remove_animation(SkeletonHandle handle, const char* name);
//TODO: void setAnimationState(const AnimationStateSet& animSet);
//TODO: void _initAnimationState(AnimationStateSet* animSet);
//TODO: void _refreshAnimationState(AnimationStateSet* animSet);
//void _getBoneMatrices(Matrix4* pMatrices);
DLL void skeleton__get_bone_matrices(SkeletonHandle handle, coiMatrix4* matrices);
//unsigned short getNumAnimations(void) const;
DLL unsigned short skeleton_get_num_animations(const SkeletonHandle handle);
//TODO: Animation* getAnimation(unsigned short index) const;
//SkeletonAnimationBlendMode getBlendMode() const;
DLL skeleton_animation_blend_mode skeleton_get_blend_mode(const SkeletonHandle handle);
//void setBlendMode(SkeletonAnimationBlendMode state);
DLL void skeleton_set_blend_mode(SkeletonHandle handle, skeleton_animation_blend_mode state);
//void _updateTransforms(void);
DLL void skeleton__update_transforms(SkeletonHandle handle);
//void optimiseAllAnimations(bool preservingIdentityNodeTracks = false);
DLL void skeleton_optimise_all_animations(SkeletonHandle handle, int preserving_identity_node_tracks);
//void addLinkedSkeletonAnimationSource(const String& skelName, Real scale = 1.0f);
DLL void skeleton_add_linked_skeleton_animation_source(SkeletonHandle handle, const char* skel_name, coiReal scale);
//void removeAllLinkedSkeletonAnimationSources(void);
DLL void skeleton_remove_all_linked_skeleton_animation_sources(SkeletonHandle handle);
//typedef vector<LinkedSkeletonAnimationSource>::type LinkedSkeletonAnimSourceList;
//typedef ConstVectorIterator<LinkedSkeletonAnimSourceList> LinkedSkeletonAnimSourceIterator;
//TODO: LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator(void) const;
//void _notifyManualBonesDirty(void);
DLL void skeleton__notify_manual_bones_dirty(SkeletonHandle handle);
//void _notifyManualBoneStateChange(Bone* bone);
DLL void skeleton__notify_manual_bone_state_change(SkeletonHandle handle, BoneHandle bone);
//bool getManualBonesDirty(void) const;
DLL int skeleton_get_manual_bones_dirty(const SkeletonHandle handle);
//bool hasManualBones(void) const;
DLL int skeleton_has_manual_bones(const SkeletonHandle handle);
//typedef vector<ushort>::type BoneHandleMap;
//TODO: void _mergeSkeletonAnimations(const Skeleton* source, const BoneHandleMap& boneHandleMap, const StringVector& animations = StringVector());
//TODO: void _buildMapBoneByHandle(const Skeleton* source, BoneHandleMap& boneHandleMap) const;
//TODO: void _buildMapBoneByName(const Skeleton* source,BoneHandleMap& boneHandleMap) const;

#endif
