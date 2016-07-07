// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//////////////////////////////////////////////////////////////////////////
// UserPresenceManagerListener.h
// Base class for receiving updates on a UserPresenceManager.
//////////////////////////////////////////////////////////////////////////

#pragma once

XTOOLS_NAMESPACE_BEGIN

// Disable unused parameter warnings.  Pure virtual functions don't play nice with SWIG, but we still want 
// to see the names of the parameters to make reading the code clearer
#pragma warning( push )
#pragma warning( disable : 4100 ) 

XT_LISTENER_DECLARE(UserPresenceManagerListener)

class UserPresenceManagerListener XTABSTRACT : public Listener
{
public:
	virtual ~UserPresenceManagerListener() {}

    // Called when a session creation request succeeded
    virtual void OnUserPresenceChanged(const UserPtr& user) {}
};

#pragma warning( pop )

XTOOLS_NAMESPACE_END
