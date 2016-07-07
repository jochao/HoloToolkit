// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//////////////////////////////////////////////////////////////////////////
// SessionHandshakeLogic.h
// The logic and packet formats for the handshake between the desktop 
// app and a Session
//////////////////////////////////////////////////////////////////////////

#pragma once


XTOOLS_NAMESPACE_BEGIN

class SessionHandshakeLogic : public HandshakeLogic
{
public:
	// Pass true to use the logic for the server side of the handshake,
	// false for the desktop side of the handshake
	explicit SessionHandshakeLogic(bool isServer);

	/// HandshakeLogic Functions:
	// Fill the given message object with a handshake message based on the criteria of this handshake logic
	virtual void CreateOutgoingMessage(const NetworkOutMessagePtr& msg) const XTOVERRIDE;

	// Parse the message received from a remote peer and return true if the message is an acceptable handshake.  
	virtual bool ValidateIncomingMessage(NetworkInMessage& msg) const XTOVERRIDE;

private:
	void CreateMessageFromServer(const NetworkOutMessagePtr& msg) const;
	bool ValidateMessageFromServer(NetworkInMessage& msg) const;

	void CreateMessageFromDesktop(const NetworkOutMessagePtr& msg) const;
	bool ValidateMessageFromDesktop(NetworkInMessage& msg) const;

	bool	m_isServer;
};

XTOOLS_NAMESPACE_END
