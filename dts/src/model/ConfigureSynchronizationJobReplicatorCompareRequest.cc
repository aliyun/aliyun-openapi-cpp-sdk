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

#include <alibabacloud/dts/model/ConfigureSynchronizationJobReplicatorCompareRequest.h>

using AlibabaCloud::Dts::Model::ConfigureSynchronizationJobReplicatorCompareRequest;

ConfigureSynchronizationJobReplicatorCompareRequest::ConfigureSynchronizationJobReplicatorCompareRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ConfigureSynchronizationJobReplicatorCompare")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigureSynchronizationJobReplicatorCompareRequest::~ConfigureSynchronizationJobReplicatorCompareRequest()
{}

std::string ConfigureSynchronizationJobReplicatorCompareRequest::getClientToken()const
{
	return clientToken_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ConfigureSynchronizationJobReplicatorCompareRequest::getOwnerId()const
{
	return ownerId_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ConfigureSynchronizationJobReplicatorCompareRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ConfigureSynchronizationJobReplicatorCompareRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string ConfigureSynchronizationJobReplicatorCompareRequest::getAccountId()const
{
	return accountId_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ConfigureSynchronizationJobReplicatorCompareRequest::getRegionId()const
{
	return regionId_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ConfigureSynchronizationJobReplicatorCompareRequest::getSynchronizationReplicatorCompareEnable()const
{
	return synchronizationReplicatorCompareEnable_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setSynchronizationReplicatorCompareEnable(bool synchronizationReplicatorCompareEnable)
{
	synchronizationReplicatorCompareEnable_ = synchronizationReplicatorCompareEnable;
	setParameter("SynchronizationReplicatorCompareEnable", synchronizationReplicatorCompareEnable ? "true" : "false");
}

std::string ConfigureSynchronizationJobReplicatorCompareRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void ConfigureSynchronizationJobReplicatorCompareRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

