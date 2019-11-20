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

#include <alibabacloud/ecs/model/DescribeSpotPriceHistoryRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSpotPriceHistoryRequest;

DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSpotPriceHistory")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSpotPriceHistoryRequest::~DescribeSpotPriceHistoryRequest()
{}

long DescribeSpotPriceHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSpotPriceHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSpotPriceHistoryRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeSpotPriceHistoryRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string DescribeSpotPriceHistoryRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeSpotPriceHistoryRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

std::string DescribeSpotPriceHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSpotPriceHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeSpotPriceHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSpotPriceHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSpotPriceHistoryRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeSpotPriceHistoryRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

int DescribeSpotPriceHistoryRequest::getOffset()const
{
	return offset_;
}

void DescribeSpotPriceHistoryRequest::setOffset(int offset)
{
	offset_ = offset;
	setCoreParameter("Offset", std::to_string(offset));
}

std::string DescribeSpotPriceHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSpotPriceHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSpotPriceHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSpotPriceHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSpotPriceHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSpotPriceHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeSpotPriceHistoryRequest::getOSType()const
{
	return oSType_;
}

void DescribeSpotPriceHistoryRequest::setOSType(const std::string& oSType)
{
	oSType_ = oSType;
	setCoreParameter("OSType", oSType);
}

long DescribeSpotPriceHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSpotPriceHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeSpotPriceHistoryRequest::getSpotDuration()const
{
	return spotDuration_;
}

void DescribeSpotPriceHistoryRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setCoreParameter("SpotDuration", std::to_string(spotDuration));
}

std::string DescribeSpotPriceHistoryRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeSpotPriceHistoryRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

