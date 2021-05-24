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

#include <alibabacloud/dts/model/DescribeSynchronizationJobStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeSynchronizationJobStatusRequest;

DescribeSynchronizationJobStatusRequest::DescribeSynchronizationJobStatusRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeSynchronizationJobStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSynchronizationJobStatusRequest::~DescribeSynchronizationJobStatusRequest()
{}

std::string DescribeSynchronizationJobStatusRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeSynchronizationJobStatusRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeSynchronizationJobStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSynchronizationJobStatusRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeSynchronizationJobStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSynchronizationJobStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSynchronizationJobStatusRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void DescribeSynchronizationJobStatusRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string DescribeSynchronizationJobStatusRequest::getAccountId()const
{
	return accountId_;
}

void DescribeSynchronizationJobStatusRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string DescribeSynchronizationJobStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSynchronizationJobStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSynchronizationJobStatusRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void DescribeSynchronizationJobStatusRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

