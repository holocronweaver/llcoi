/******************************************************************************
 * viewport_bind.h - bindings for Ogre::Viewport
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
#ifndef VIEWPORT_BIND_H
#define VIEWPORT_BIND_H


#include "ogre_interface.h"

#define ViewportHandle void*
#define CameraHandle void*


// Viewports
DLL ViewportHandle add_viewport(CameraHandle camera_handle);
DLL void viewport_set_background_colour(ViewportHandle viewport_handle, float r, float g, float b, float a);

DLL void viewport_set_background_colour_cv(ViewportHandle viewport_handle, ColourValue* cv);

DLL void viewport_set_auto_updated(ViewportHandle handle, int autoupdate);

DLL int viewport_is_auto_updated(ViewportHandle handle);

DLL float viewport_get_top(ViewportHandle handle);

DLL float viewport_get_left(ViewportHandle handle);

DLL float viewport_get_width(ViewportHandle viewport_handle);

DLL float viewport_get_height(ViewportHandle viewport_handle);

DLL int viewport_get_actual_top(ViewportHandle handle);
DLL int viewport_get_actual_left(ViewportHandle handle);

DLL int viewport_get_actual_width(ViewportHandle handle);

DLL int viewport_get_actual_height(ViewportHandle handle);

#endif
