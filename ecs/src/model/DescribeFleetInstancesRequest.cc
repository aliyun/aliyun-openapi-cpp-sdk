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

#include <alibabacloud/ecs/model/DescribeFleetInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeFleetInstancesRequest;

DescribeFleetInstancesRequest::DescribeFleetInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeFleetInstances")
{}

DescribeFleetInstancesRequest::~DescribeFleetInstancesRequest()
{}

long DescribeFleetInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeFleetInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFleetInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFleetInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeFleetInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFleetInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFleetInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFleetInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeFleetInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFleetInstancesRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetInstancesRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

