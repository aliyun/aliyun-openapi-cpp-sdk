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

#include <alibabacloud/emr/model/CommitFlowEntitySnapshotRequest.h>

using AlibabaCloud::Emr::Model::CommitFlowEntitySnapshotRequest;

CommitFlowEntitySnapshotRequest::CommitFlowEntitySnapshotRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CommitFlowEntitySnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

CommitFlowEntitySnapshotRequest::~CommitFlowEntitySnapshotRequest()
{}

long CommitFlowEntitySnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CommitFlowEntitySnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CommitFlowEntitySnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CommitFlowEntitySnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CommitFlowEntitySnapshotRequest::getRegionId()const
{
	return regionId_;
}

void CommitFlowEntitySnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CommitFlowEntitySnapshotRequest::getEntityType()const
{
	return entityType_;
}

void CommitFlowEntitySnapshotRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

std::string CommitFlowEntitySnapshotRequest::getEntityId()const
{
	return entityId_;
}

void CommitFlowEntitySnapshotRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

std::string CommitFlowEntitySnapshotRequest::getMessage()const
{
	return message_;
}

void CommitFlowEntitySnapshotRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

