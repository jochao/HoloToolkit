// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

/*
 *  Copyright (c) 2014, Oculus VR, Inc.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant 
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#ifndef __SIGNALED_EVENT_H
#define __SIGNALED_EVENT_H



#if defined(_WIN32) || defined(WINDOWS_STORE_RT)
#include "WindowsIncludes.h"



#else
	#include <pthread.h>
	#include <sys/types.h>
	#include "SimpleMutex.h"




#endif

#include "Export.h"

namespace RakNet
{

class RAK_DLL_EXPORT SignaledEvent
{
public:
	SignaledEvent();
	~SignaledEvent();

	void InitEvent(void);
	void CloseEvent(void);
	void SetEvent(void);
	void WaitOnEvent(int timeoutMs);

protected:
	/// MICROSOFT PROJECT B CHANGES BEGIN
#if defined(_WIN32) || defined(WINDOWS_STORE_RT)
	/// MICROSOFT PROJECT B CHANGES END
	HANDLE eventList;





#else
	SimpleMutex isSignaledMutex;
	bool isSignaled;
#if !defined(ANDROID)
	pthread_condattr_t condAttr;
#endif
	pthread_cond_t eventList;
	pthread_mutex_t hMutex;
	pthread_mutexattr_t mutexAttr;
#endif
};

} // namespace RakNet

#endif
