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

#include <alibabacloud/emr/model/CreateFlowEditLockRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowEditLockRequest;

CreateFlowEditLockRequest::CreateFlowEditLockRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlowEditLock")
{
	setMethod(HttpRequest::Method::Post);
}

CreateFlowEditLockRequest::~CreateFlowEditLockRequest()
{}

long CreateFlowEditLockRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateFlowEditLockRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateFlowEditLockRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateFlowEditLockRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateFlowEditLockRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowEditLockRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateFlowEditLockRequest::getEntityId()const
{
	return entityId_;
}

void CreateFlowEditLockRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", entityId);
}

bool CreateFlowEditLockRequest::getForce()const
{
	return force_;
}

void CreateFlowEditLockRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", force ? "true" : "false");
}

