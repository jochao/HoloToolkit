// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//////////////////////////////////////////////////////////////////////////
// ArrayTransforms.h
//////////////////////////////////////////////////////////////////////////

#pragma once

XTOOLS_NAMESPACE_BEGIN
NAMESPACE_BEGIN(Sync)

struct UpdateUpdateTransform : public OpTransform
{
	virtual TransformedPair Apply(const OperationConstPtr& localOp, const OperationConstPtr& remoteOp) const XTOVERRIDE;
};

struct UpdateInsertTransform : public OpTransform
{
	virtual TransformedPair Apply(const OperationConstPtr& localOp, const OperationConstPtr& remoteOp) const XTOVERRIDE;
};

struct UpdateRemoveTransform : public OpTransform
{
	virtual TransformedPair Apply(const OperationConstPtr& localOp, const OperationConstPtr& remoteOp) const XTOVERRIDE;
};

struct InsertInsertTransform : public OpTransform
{
	virtual TransformedPair Apply(const OperationConstPtr& localOp, const OperationConstPtr& remoteOp) const XTOVERRIDE;
};

struct InsertRemoveTransform : public OpTransform
{
	virtual TransformedPair Apply(const OperationConstPtr& localOp, const OperationConstPtr& remoteOp) const XTOVERRIDE;
};

struct RemoveRemoveTransform : public OpTransform
{
	virtual TransformedPair Apply(const OperationConstPtr& localOp, const OperationConstPtr& remoteOp) const XTOVERRIDE;
};

NAMESPACE_END(Sync)
XTOOLS_NAMESPACE_END
