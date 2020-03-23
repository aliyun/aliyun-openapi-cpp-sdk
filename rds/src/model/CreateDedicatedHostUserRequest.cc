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

#include <alibabacloud/rds/model/CreateDedicatedHostUserRequest.h>

using AlibabaCloud::Rds::Model::CreateDedicatedHostUserRequest;

CreateDedicatedHostUserRequest::CreateDedicatedHostUserRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDedicatedHostUser")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDedicatedHostUserRequest::~CreateDedicatedHostUserRequest()
{}

long CreateDedicatedHostUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedHostUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDedicatedHostUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDedicatedHostUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDedicatedHostUserRequest::getUserPassword()const
{
	return userPassword_;
}

void CreateDedicatedHostUserRequest::setUserPassword(const std::string& userPassword)
{
	userPassword_ = userPassword;
	setParameter("UserPassword", userPassword);
}

std::string CreateDedicatedHostUserRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedHostUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDedicatedHostUserRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void CreateDedicatedHostUserRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setParameter("DedicatedHostName", dedicatedHostName);
}

std::string CreateDedicatedHostUserRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedHostUserRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateDedicatedHostUserRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedHostUserRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDedicatedHostUserRequest::getUserName()const
{
	return userName_;
}

void CreateDedicatedHostUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

