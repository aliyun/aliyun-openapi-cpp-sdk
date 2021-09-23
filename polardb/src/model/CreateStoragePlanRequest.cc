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

#include <alibabacloud/polardb/model/CreateStoragePlanRequest.h>

using AlibabaCloud::Polardb::Model::CreateStoragePlanRequest;

CreateStoragePlanRequest::CreateStoragePlanRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateStoragePlan")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStoragePlanRequest::~CreateStoragePlanRequest()
{}

long CreateStoragePlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateStoragePlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateStoragePlanRequest::getClientToken()const
{
	return clientToken_;
}

void CreateStoragePlanRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateStoragePlanRequest::getStorageType()const
{
	return storageType_;
}

void CreateStoragePlanRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setParameter("StorageType", storageType);
}

std::string CreateStoragePlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateStoragePlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateStoragePlanRequest::getPeriod()const
{
	return period_;
}

void CreateStoragePlanRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CreateStoragePlanRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateStoragePlanRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateStoragePlanRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateStoragePlanRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateStoragePlanRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateStoragePlanRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateStoragePlanRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateStoragePlanRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", usedTime);
}

std::string CreateStoragePlanRequest::getStorageClass()const
{
	return storageClass_;
}

void CreateStoragePlanRequest::setStorageClass(const std::string& storageClass)
{
	storageClass_ = storageClass;
	setParameter("StorageClass", storageClass);
}

