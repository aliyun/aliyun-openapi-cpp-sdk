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

#include <alibabacloud/dts/model/CreateSynchronizationJobRequest.h>

using AlibabaCloud::Dts::Model::CreateSynchronizationJobRequest;

CreateSynchronizationJobRequest::CreateSynchronizationJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "CreateSynchronizationJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSynchronizationJobRequest::~CreateSynchronizationJobRequest()
{}

std::string CreateSynchronizationJobRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSynchronizationJobRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSynchronizationJobRequest::getNetworkType()const
{
	return networkType_;
}

void CreateSynchronizationJobRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string CreateSynchronizationJobRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void CreateSynchronizationJobRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string CreateSynchronizationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSynchronizationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateSynchronizationJobRequest::getAccountId()const
{
	return accountId_;
}

void CreateSynchronizationJobRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string CreateSynchronizationJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateSynchronizationJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSynchronizationJobRequest::getSynchronizationJobClass()const
{
	return synchronizationJobClass_;
}

void CreateSynchronizationJobRequest::setSynchronizationJobClass(const std::string& synchronizationJobClass)
{
	synchronizationJobClass_ = synchronizationJobClass;
	setParameter("SynchronizationJobClass", synchronizationJobClass);
}

std::string CreateSynchronizationJobRequest::getPeriod()const
{
	return period_;
}

void CreateSynchronizationJobRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CreateSynchronizationJobRequest::getDestRegion()const
{
	return destRegion_;
}

void CreateSynchronizationJobRequest::setDestRegion(const std::string& destRegion)
{
	destRegion_ = destRegion;
	setParameter("DestRegion", destRegion);
}

std::string CreateSynchronizationJobRequest::getTopology()const
{
	return topology_;
}

void CreateSynchronizationJobRequest::setTopology(const std::string& topology)
{
	topology_ = topology;
	setParameter("Topology", topology);
}

std::string CreateSynchronizationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSynchronizationJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

int CreateSynchronizationJobRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateSynchronizationJobRequest::setUsedTime(int usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", std::to_string(usedTime));
}

int CreateSynchronizationJobRequest::getDBInstanceCount()const
{
	return dBInstanceCount_;
}

void CreateSynchronizationJobRequest::setDBInstanceCount(int dBInstanceCount)
{
	dBInstanceCount_ = dBInstanceCount;
	setParameter("DBInstanceCount", std::to_string(dBInstanceCount));
}

std::string CreateSynchronizationJobRequest::getSourceRegion()const
{
	return sourceRegion_;
}

void CreateSynchronizationJobRequest::setSourceRegion(const std::string& sourceRegion)
{
	sourceRegion_ = sourceRegion;
	setParameter("SourceRegion", sourceRegion);
}

std::string CreateSynchronizationJobRequest::getPayType()const
{
	return payType_;
}

void CreateSynchronizationJobRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreateSynchronizationJobRequest::getDestinationEndpointInstanceType()const
{
	return destinationEndpointInstanceType_;
}

void CreateSynchronizationJobRequest::setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType)
{
	destinationEndpointInstanceType_ = destinationEndpointInstanceType;
	setParameter("DestinationEndpointInstanceType", destinationEndpointInstanceType);
}

