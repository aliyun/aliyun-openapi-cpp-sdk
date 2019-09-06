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

#include <alibabacloud/ecs/model/DescribeFleetHistoryRequest.h>

using AlibabaCloud::Ecs::Model::DescribeFleetHistoryRequest;

DescribeFleetHistoryRequest::DescribeFleetHistoryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeFleetHistory")
{}

DescribeFleetHistoryRequest::~DescribeFleetHistoryRequest()
{}

long DescribeFleetHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeFleetHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeFleetHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFleetHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeFleetHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFleetHistoryRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetHistoryRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

