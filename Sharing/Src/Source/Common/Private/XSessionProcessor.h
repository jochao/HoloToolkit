// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//////////////////////////////////////////////////////////////////////////
// XSessionProcessor.h
// The XTools server's representation of a session processor that
// is managed by the XSession and receives connection change notifications
//////////////////////////////////////////////////////////////////////////

#pragma once

XTOOLS_NAMESPACE_BEGIN


class XSessionProcessor : public RefCounted
{
public:
	virtual void AddConnection(const NetworkConnectionPtr& connection) = 0;
	virtual void RemoveConnection(const NetworkConnectionPtr& connection) = 0;
};

DECLARE_PTR(XSessionProcessor)

XTOOLS_NAMESPACE_END
