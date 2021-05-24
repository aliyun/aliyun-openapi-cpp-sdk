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

#include <alibabacloud/dts/model/ModifySynchronizationObjectRequest.h>

using AlibabaCloud::Dts::Model::ModifySynchronizationObjectRequest;

ModifySynchronizationObjectRequest::ModifySynchronizationObjectRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ModifySynchronizationObject")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySynchronizationObjectRequest::~ModifySynchronizationObjectRequest()
{}

std::string ModifySynchronizationObjectRequest::getSynchronizationObjects()const
{
	return synchronizationObjects_;
}

void ModifySynchronizationObjectRequest::setSynchronizationObjects(const std::string& synchronizationObjects)
{
	synchronizationObjects_ = synchronizationObjects;
	setParameter("SynchronizationObjects", synchronizationObjects);
}

std::string ModifySynchronizationObjectRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySynchronizationObjectRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ModifySynchronizationObjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySynchronizationObjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifySynchronizationObjectRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void ModifySynchronizationObjectRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string ModifySynchronizationObjectRequest::getAccountId()const
{
	return accountId_;
}

void ModifySynchronizationObjectRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ModifySynchronizationObjectRequest::getRegionId()const
{
	return regionId_;
}

void ModifySynchronizationObjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifySynchronizationObjectRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void ModifySynchronizationObjectRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

