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

#include <alibabacloud/emr/model/ListETLJobTriggerEntityRequest.h>

using AlibabaCloud::Emr::Model::ListETLJobTriggerEntityRequest;

ListETLJobTriggerEntityRequest::ListETLJobTriggerEntityRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListETLJobTriggerEntity")
{}

ListETLJobTriggerEntityRequest::~ListETLJobTriggerEntityRequest()
{}

long ListETLJobTriggerEntityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListETLJobTriggerEntityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListETLJobTriggerEntityRequest::getEntityType()const
{
	return entityType_;
}

void ListETLJobTriggerEntityRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setCoreParameter("EntityType", entityType);
}

std::string ListETLJobTriggerEntityRequest::getRegionId()const
{
	return regionId_;
}

void ListETLJobTriggerEntityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListETLJobTriggerEntityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListETLJobTriggerEntityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

