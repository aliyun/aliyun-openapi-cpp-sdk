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

#include <alibabacloud/rds/model/DeleteDedicatedHostAccountRequest.h>

using AlibabaCloud::Rds::Model::DeleteDedicatedHostAccountRequest;

DeleteDedicatedHostAccountRequest::DeleteDedicatedHostAccountRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DeleteDedicatedHostAccount")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDedicatedHostAccountRequest::~DeleteDedicatedHostAccountRequest()
{}

long DeleteDedicatedHostAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDedicatedHostAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDedicatedHostAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDedicatedHostAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDedicatedHostAccountRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void DeleteDedicatedHostAccountRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

long DeleteDedicatedHostAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDedicatedHostAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDedicatedHostAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDedicatedHostAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDedicatedHostAccountRequest::getAccountName()const
{
	return accountName_;
}

void DeleteDedicatedHostAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string DeleteDedicatedHostAccountRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDedicatedHostAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

