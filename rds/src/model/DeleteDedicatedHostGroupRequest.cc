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

#include <alibabacloud/rds/model/DeleteDedicatedHostGroupRequest.h>

using AlibabaCloud::Rds::Model::DeleteDedicatedHostGroupRequest;

DeleteDedicatedHostGroupRequest::DeleteDedicatedHostGroupRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DeleteDedicatedHostGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDedicatedHostGroupRequest::~DeleteDedicatedHostGroupRequest()
{}

long DeleteDedicatedHostGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDedicatedHostGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDedicatedHostGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDedicatedHostGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteDedicatedHostGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDedicatedHostGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDedicatedHostGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDedicatedHostGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDedicatedHostGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDedicatedHostGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteDedicatedHostGroupRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void DeleteDedicatedHostGroupRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setCoreParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

