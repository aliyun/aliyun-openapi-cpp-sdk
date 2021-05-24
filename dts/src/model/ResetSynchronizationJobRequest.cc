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

#include <alibabacloud/dts/model/ResetSynchronizationJobRequest.h>

using AlibabaCloud::Dts::Model::ResetSynchronizationJobRequest;

ResetSynchronizationJobRequest::ResetSynchronizationJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ResetSynchronizationJob")
{
	setMethod(HttpRequest::Method::Post);
}

ResetSynchronizationJobRequest::~ResetSynchronizationJobRequest()
{}

std::string ResetSynchronizationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ResetSynchronizationJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ResetSynchronizationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetSynchronizationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ResetSynchronizationJobRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void ResetSynchronizationJobRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string ResetSynchronizationJobRequest::getAccountId()const
{
	return accountId_;
}

void ResetSynchronizationJobRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ResetSynchronizationJobRequest::getRegionId()const
{
	return regionId_;
}

void ResetSynchronizationJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ResetSynchronizationJobRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void ResetSynchronizationJobRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

