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

#include <alibabacloud/vpc/model/DescribeGlobalAccelerationInstancesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeGlobalAccelerationInstancesRequest;

DescribeGlobalAccelerationInstancesRequest::DescribeGlobalAccelerationInstancesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeGlobalAccelerationInstances")
{}

DescribeGlobalAccelerationInstancesRequest::~DescribeGlobalAccelerationInstancesRequest()
{}

std::string DescribeGlobalAccelerationInstancesRequest::getIpAddress()const
{
	return ipAddress_;
}

void DescribeGlobalAccelerationInstancesRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setCoreParameter("IpAddress", ipAddress);
}

long DescribeGlobalAccelerationInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeGlobalAccelerationInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeGlobalAccelerationInstancesRequest::getBandwidthType()const
{
	return bandwidthType_;
}

void DescribeGlobalAccelerationInstancesRequest::setBandwidthType(const std::string& bandwidthType)
{
	bandwidthType_ = bandwidthType;
	setCoreParameter("BandwidthType", bandwidthType);
}

std::string DescribeGlobalAccelerationInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeGlobalAccelerationInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeGlobalAccelerationInstancesRequest::getServiceLocation()const
{
	return serviceLocation_;
}

void DescribeGlobalAccelerationInstancesRequest::setServiceLocation(const std::string& serviceLocation)
{
	serviceLocation_ = serviceLocation;
	setCoreParameter("ServiceLocation", serviceLocation);
}

std::string DescribeGlobalAccelerationInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeGlobalAccelerationInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeGlobalAccelerationInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeGlobalAccelerationInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeGlobalAccelerationInstancesRequest::getIncludeReservationData()const
{
	return includeReservationData_;
}

void DescribeGlobalAccelerationInstancesRequest::setIncludeReservationData(bool includeReservationData)
{
	includeReservationData_ = includeReservationData;
	setCoreParameter("IncludeReservationData", includeReservationData ? "true" : "false");
}

std::string DescribeGlobalAccelerationInstancesRequest::getGlobalAccelerationInstanceId()const
{
	return globalAccelerationInstanceId_;
}

void DescribeGlobalAccelerationInstancesRequest::setGlobalAccelerationInstanceId(const std::string& globalAccelerationInstanceId)
{
	globalAccelerationInstanceId_ = globalAccelerationInstanceId;
	setCoreParameter("GlobalAccelerationInstanceId", globalAccelerationInstanceId);
}

std::string DescribeGlobalAccelerationInstancesRequest::getServerId()const
{
	return serverId_;
}

void DescribeGlobalAccelerationInstancesRequest::setServerId(const std::string& serverId)
{
	serverId_ = serverId;
	setCoreParameter("ServerId", serverId);
}

int DescribeGlobalAccelerationInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeGlobalAccelerationInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeGlobalAccelerationInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeGlobalAccelerationInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeGlobalAccelerationInstancesRequest::getName()const
{
	return name_;
}

void DescribeGlobalAccelerationInstancesRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int DescribeGlobalAccelerationInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGlobalAccelerationInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeGlobalAccelerationInstancesRequest::getStatus()const
{
	return status_;
}

void DescribeGlobalAccelerationInstancesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

