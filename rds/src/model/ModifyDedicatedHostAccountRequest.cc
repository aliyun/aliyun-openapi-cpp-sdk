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

#include <alibabacloud/rds/model/ModifyDedicatedHostAccountRequest.h>

using AlibabaCloud::Rds::Model::ModifyDedicatedHostAccountRequest;

ModifyDedicatedHostAccountRequest::ModifyDedicatedHostAccountRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDedicatedHostAccount")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedHostAccountRequest::~ModifyDedicatedHostAccountRequest()
{}

long ModifyDedicatedHostAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedHostAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedHostAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedHostAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDedicatedHostAccountRequest::getAccountName()const
{
	return accountName_;
}

void ModifyDedicatedHostAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string ModifyDedicatedHostAccountRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyDedicatedHostAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedHostAccountRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyDedicatedHostAccountRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

long ModifyDedicatedHostAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDedicatedHostAccountRequest::getAccountPassword()const
{
	return accountPassword_;
}

void ModifyDedicatedHostAccountRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

