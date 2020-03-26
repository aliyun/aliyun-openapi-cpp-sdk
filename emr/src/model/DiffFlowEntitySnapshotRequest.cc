/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/emr/model/DiffFlowEntitySnapshotRequest.h>

using AlibabaCloud::Emr::Model::DiffFlowEntitySnapshotRequest;

DiffFlowEntitySnapshotRequest::DiffFlowEntitySnapshotRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DiffFlowEntitySnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

DiffFlowEntitySnapshotRequest::~DiffFlowEntitySnapshotRequest()
{}

long DiffFlowEntitySnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DiffFlowEntitySnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DiffFlowEntitySnapshotRequest::getSrcRevision()const
{
	return srcRevision_;
}

void DiffFlowEntitySnapshotRequest::setSrcRevision(const std::string& srcRevision)
{
	srcRevision_ = srcRevision;
	setParameter("SrcRevision", srcRevision);
}

std::string DiffFlowEntitySnapshotRequest::getEntityId()const
{
	return entityId_;
}

void DiffFlowEntitySnapshotRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

std::string DiffFlowEntitySnapshotRequest::getDstRevision()const
{
	return dstRevision_;
}

void DiffFlowEntitySnapshotRequest::setDstRevision(const std::string& dstRevision)
{
	dstRevision_ = dstRevision;
	setParameter("DstRevision", dstRevision);
}

std::string DiffFlowEntitySnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DiffFlowEntitySnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DiffFlowEntitySnapshotRequest::getEntityType()const
{
	return entityType_;
}

void DiffFlowEntitySnapshotRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

std::string DiffFlowEntitySnapshotRequest::getRegionId()const
{
	return regionId_;
}

void DiffFlowEntitySnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

