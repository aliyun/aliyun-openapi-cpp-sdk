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

#include <alibabacloud/rds/model/DeleteDedicatedHostRequest.h>

using AlibabaCloud::Rds::Model::DeleteDedicatedHostRequest;

DeleteDedicatedHostRequest::DeleteDedicatedHostRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DeleteDedicatedHost")
{}

DeleteDedicatedHostRequest::~DeleteDedicatedHostRequest()
{}

long DeleteDedicatedHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDedicatedHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDedicatedHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDedicatedHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDedicatedHostRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void DeleteDedicatedHostRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long DeleteDedicatedHostRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDedicatedHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDedicatedHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDedicatedHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDedicatedHostRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDedicatedHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

