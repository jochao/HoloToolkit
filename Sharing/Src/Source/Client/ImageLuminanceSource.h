// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//////////////////////////////////////////////////////////////////////////
// ImageLuminanceSource.h
// Implements ZXing's LuminanceSource interface to allow and ImageData
// object to be used in QR Code detection and decoding
//////////////////////////////////////////////////////////////////////////

#pragma once

#include "ImageData.h"

XTOOLS_NAMESPACE_BEGIN

class ImageLuminanceSource : public zxing::LuminanceSource
{
public:
	ImageLuminanceSource(const ImageDataPtr& image);

	// LuminanceSource Functions:
	virtual zxing::ArrayRef<char> getRow(int y, zxing::ArrayRef<char> row) const XTOVERRIDE;
	virtual zxing::ArrayRef<char> getMatrix() const XTOVERRIDE;

private:
	ImageLuminanceSource* operator=(const ImageLuminanceSource& rhs);

	char convertPixel(const char* pixel) const;

	ImageDataPtr	m_image;
};

XTOOLS_NAMESPACE_END
