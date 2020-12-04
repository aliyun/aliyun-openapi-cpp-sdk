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

#include <alibabacloud/ecs/model/DescribeSpotAdviceRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSpotAdviceRequest;

DescribeSpotAdviceRequest::DescribeSpotAdviceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSpotAdvice")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSpotAdviceRequest::~DescribeSpotAdviceRequest()
{}

long DescribeSpotAdviceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSpotAdviceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

float DescribeSpotAdviceRequest::getMemory()const
{
	return memory_;
}

void DescribeSpotAdviceRequest::setMemory(float memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

std::string DescribeSpotAdviceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeSpotAdviceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

int DescribeSpotAdviceRequest::getMinCores()const
{
	return minCores_;
}

void DescribeSpotAdviceRequest::setMinCores(int minCores)
{
	minCores_ = minCores;
	setParameter("MinCores", std::to_string(minCores));
}

std::string DescribeSpotAdviceRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeSpotAdviceRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

int DescribeSpotAdviceRequest::getCores()const
{
	return cores_;
}

void DescribeSpotAdviceRequest::setCores(int cores)
{
	cores_ = cores;
	setParameter("Cores", std::to_string(cores));
}

std::string DescribeSpotAdviceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSpotAdviceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSpotAdviceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSpotAdviceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSpotAdviceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSpotAdviceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSpotAdviceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSpotAdviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSpotAdviceRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeSpotAdviceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

float DescribeSpotAdviceRequest::getMinMemory()const
{
	return minMemory_;
}

void DescribeSpotAdviceRequest::setMinMemory(float minMemory)
{
	minMemory_ = minMemory;
	setParameter("MinMemory", std::to_string(minMemory));
}

