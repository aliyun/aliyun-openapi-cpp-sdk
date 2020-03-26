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

#include <alibabacloud/emr/model/RestoreFlowEntitySnapshotRequest.h>

using AlibabaCloud::Emr::Model::RestoreFlowEntitySnapshotRequest;

RestoreFlowEntitySnapshotRequest::RestoreFlowEntitySnapshotRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RestoreFlowEntitySnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

RestoreFlowEntitySnapshotRequest::~RestoreFlowEntitySnapshotRequest()
{}

long RestoreFlowEntitySnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreFlowEntitySnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestoreFlowEntitySnapshotRequest::getEntityId()const
{
	return entityId_;
}

void RestoreFlowEntitySnapshotRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

std::string RestoreFlowEntitySnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreFlowEntitySnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RestoreFlowEntitySnapshotRequest::getRevision()const
{
	return revision_;
}

void RestoreFlowEntitySnapshotRequest::setRevision(const std::string& revision)
{
	revision_ = revision;
	setParameter("Revision", revision);
}

std::string RestoreFlowEntitySnapshotRequest::getEntityType()const
{
	return entityType_;
}

void RestoreFlowEntitySnapshotRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

std::string RestoreFlowEntitySnapshotRequest::getRegionId()const
{
	return regionId_;
}

void RestoreFlowEntitySnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RestoreFlowEntitySnapshotRequest::getOperatorId()const
{
	return operatorId_;
}

void RestoreFlowEntitySnapshotRequest::setOperatorId(const std::string& operatorId)
{
	operatorId_ = operatorId;
	setParameter("OperatorId", operatorId);
}

