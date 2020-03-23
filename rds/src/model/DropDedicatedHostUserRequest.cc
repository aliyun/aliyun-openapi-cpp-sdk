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

#include <alibabacloud/rds/model/DropDedicatedHostUserRequest.h>

using AlibabaCloud::Rds::Model::DropDedicatedHostUserRequest;

DropDedicatedHostUserRequest::DropDedicatedHostUserRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DropDedicatedHostUser")
{
	setMethod(HttpRequest::Method::Post);
}

DropDedicatedHostUserRequest::~DropDedicatedHostUserRequest()
{}

long DropDedicatedHostUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DropDedicatedHostUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DropDedicatedHostUserRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void DropDedicatedHostUserRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setParameter("DedicatedHostName", dedicatedHostName);
}

std::string DropDedicatedHostUserRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DropDedicatedHostUserRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DropDedicatedHostUserRequest::getOwnerId()const
{
	return ownerId_;
}

void DropDedicatedHostUserRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DropDedicatedHostUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DropDedicatedHostUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DropDedicatedHostUserRequest::getRegionId()const
{
	return regionId_;
}

void DropDedicatedHostUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DropDedicatedHostUserRequest::getUserName()const
{
	return userName_;
}

void DropDedicatedHostUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

