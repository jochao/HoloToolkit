// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// Copyright (C) 2002-2009 Nikolaus Gebhardt
// This file is part of the "irrKlang" library.
// For conditions of distribution and use, see copyright notice in irrKlang.h

#ifndef __IRRKLANG_TYPES_H_INCLUDED__
#define __IRRKLANG_TYPES_H_INCLUDED__


namespace irrklang
{

	//! 8 bit unsigned variable.
	/** This is a typedef for unsigned char, it ensures portability of the engine. */
	typedef unsigned char ik_u8;

	//! 8 bit signed variable.
	/** This is a typedef for signed char, it ensures portability of the engine. */
	typedef signed char	ik_s8;

	//! 8 bit character variable.
	/** This is a typedef for char, it ensures portability of the engine. */
	typedef char ik_c8;



	//! 16 bit unsigned variable.
	/** This is a typedef for unsigned short, it ensures portability of the engine. */
	typedef unsigned short ik_u16;

	//! 16 bit signed variable.
	/** This is a typedef for signed short, it ensures portability of the engine. */
	typedef signed short ik_s16;



	//! 32 bit unsigned variable.
	/** This is a typedef for unsigned int, it ensures portability of the engine. */
	typedef unsigned int ik_u32;

	//! 32 bit signed variable.
	/** This is a typedef for signed int, it ensures portability of the engine. */
	typedef signed int ik_s32;



	//! 32 bit floating point variable.
	/** This is a typedef for float, it ensures portability of the engine. */
	typedef float ik_f32;

	//! 64 bit floating point variable.
	/** This is a typedef for double, it ensures portability of the engine. */
	typedef double ik_f64;



    // some constants

	const ik_f32 IK_ROUNDING_ERROR_32	= 0.000001f;
	const ik_f64 IK_PI64			    = 3.1415926535897932384626433832795028841971693993751;
	const ik_f32 IK_PI32			    = 3.14159265359f;
	const ik_f32 IK_RADTODEG            = 180.0f / IK_PI32;
	const ik_f32 IK_DEGTORAD            = IK_PI32 / 180.0f;
	const ik_f64 IK_RADTODEG64          = 180.0 / IK_PI64;
	const ik_f64 IK_DEGTORAD64          = IK_PI64 / 180.0;

	//! returns if a float equals the other one, taking floating
	//! point rounding errors into account
	inline bool equalsfloat(const ik_f32 a, const ik_f32 b, const ik_f32 tolerance = IK_ROUNDING_ERROR_32)
	{
		return (a + tolerance > b) && (a - tolerance < b);
	}


} // end namespace


#endif // __IRR_TYPES_H_INCLUDED__

