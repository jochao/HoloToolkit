// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#ifndef OGRE3D_DX9_BACKBUFFER_GRABBER_H
#define OGRE3D_DX9_BACKBUFFER_GRABBER_H

#include "DX9_BackbufferGrabber.h"
#include "OgreRenderWindow.h"

class Ogre3D_DX9_BackbufferGrabber : public DX9_BackbufferGrabber
{
public:
	void InitBackbufferGrabber(Ogre::RenderWindow* renderWindow, int _width, int _height);
};

#endif
