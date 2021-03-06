// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//////////////////////////////////////////////////////////////////////////
// SendToForwarder.h
//////////////////////////////////////////////////////////////////////////

#pragma once

XTOOLS_NAMESPACE_BEGIN

/// Listens for incoming SendTo messages and forwards them on to the appropriate user
class SendToForwarder : public RefCounted, public NetworkConnectionListener
{
public:
	SendToForwarder();

	void AddConnection(UserID userID, const NetworkConnectionPtr& primaryConnection, const NetworkConnectionPtr& secondaryConnection);
	void RemoveConnection(UserID userID);

private:
	// NetworkConnectionListener Functions:
	virtual void OnMessageReceived(const NetworkConnectionPtr& connection, NetworkInMessage& message) XTOVERRIDE;

	struct ConnectionInfo
	{
		NetworkConnectionPtr	m_primaryConnection;
		NetworkConnectionPtr	m_secondaryConnection;
	};

	std::map<UserID, ConnectionInfo>	m_connections;

};

DECLARE_PTR(SendToForwarder)

XTOOLS_NAMESPACE_END
