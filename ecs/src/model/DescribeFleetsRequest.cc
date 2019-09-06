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

#include <alibabacloud/ecs/model/DescribeFleetsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeFleetsRequest;

DescribeFleetsRequest::DescribeFleetsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeFleets")
{}

DescribeFleetsRequest::~DescribeFleetsRequest()
{}

long DescribeFleetsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeFleetsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFleetsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFleetsRequest::getFleetName()const
{
	return fleetName_;
}

void DescribeFleetsRequest::setFleetName(const std::string& fleetName)
{
	fleetName_ = fleetName;
	setCoreParameter("FleetName", fleetName);
}

std::vector<std::string> DescribeFleetsRequest::getFleetStatus()const
{
	return fleetStatus_;
}

void DescribeFleetsRequest::setFleetStatus(const std::vector<std::string>& fleetStatus)
{
	fleetStatus_ = fleetStatus;
	for(int i = 0; i!= fleetStatus.size(); i++)
		setCoreParameter("FleetStatus."+ std::to_string(i), fleetStatus.at(i));
}

std::string DescribeFleetsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeFleetsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFleetsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFleetsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFleetsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeFleetsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DescribeFleetsRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetsRequest::setFleetId(const std::vector<std::string>& fleetId)
{
	fleetId_ = fleetId;
	for(int i = 0; i!= fleetId.size(); i++)
		setCoreParameter("FleetId."+ std::to_string(i), fleetId.at(i));
}

