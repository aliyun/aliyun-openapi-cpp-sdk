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

#include <alibabacloud/rds/model/ModifyDedicatedHostUserRequest.h>

using AlibabaCloud::Rds::Model::ModifyDedicatedHostUserRequest;

ModifyDedicatedHostUserRequest::ModifyDedicatedHostUserRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDedicatedHostUser")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedHostUserRequest::~ModifyDedicatedHostUserRequest()
{}

long ModifyDedicatedHostUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedHostUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedHostUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedHostUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDedicatedHostUserRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyDedicatedHostUserRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void ModifyDedicatedHostUserRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setParameter("DedicatedHostName", dedicatedHostName);
}

std::string ModifyDedicatedHostUserRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostUserRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedHostUserRequest::getOldPassword()const
{
	return oldPassword_;
}

void ModifyDedicatedHostUserRequest::setOldPassword(const std::string& oldPassword)
{
	oldPassword_ = oldPassword;
	setParameter("OldPassword", oldPassword);
}

long ModifyDedicatedHostUserRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostUserRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDedicatedHostUserRequest::getNewPassword()const
{
	return newPassword_;
}

void ModifyDedicatedHostUserRequest::setNewPassword(const std::string& newPassword)
{
	newPassword_ = newPassword;
	setParameter("NewPassword", newPassword);
}

std::string ModifyDedicatedHostUserRequest::getUserName()const
{
	return userName_;
}

void ModifyDedicatedHostUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

