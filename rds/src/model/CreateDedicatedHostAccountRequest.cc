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

#include <alibabacloud/rds/model/CreateDedicatedHostAccountRequest.h>

using AlibabaCloud::Rds::Model::CreateDedicatedHostAccountRequest;

CreateDedicatedHostAccountRequest::CreateDedicatedHostAccountRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDedicatedHostAccount")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDedicatedHostAccountRequest::~CreateDedicatedHostAccountRequest()
{}

long CreateDedicatedHostAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedHostAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDedicatedHostAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDedicatedHostAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDedicatedHostAccountRequest::getAccountName()const
{
	return accountName_;
}

void CreateDedicatedHostAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string CreateDedicatedHostAccountRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedHostAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDedicatedHostAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedHostAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDedicatedHostAccountRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void CreateDedicatedHostAccountRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

long CreateDedicatedHostAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedHostAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDedicatedHostAccountRequest::getAccountPassword()const
{
	return accountPassword_;
}

void CreateDedicatedHostAccountRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

