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

#include <alibabacloud/vpc/model/DescribeVpnRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnRouteEntriesRequest;

DescribeVpnRouteEntriesRequest::DescribeVpnRouteEntriesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnRouteEntries")
{}

DescribeVpnRouteEntriesRequest::~DescribeVpnRouteEntriesRequest()
{}

long DescribeVpnRouteEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVpnRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeVpnRouteEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVpnRouteEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVpnRouteEntriesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVpnRouteEntriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVpnRouteEntriesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVpnRouteEntriesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeVpnRouteEntriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVpnRouteEntriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeVpnRouteEntriesRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void DescribeVpnRouteEntriesRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", vpnGatewayId);
}

long DescribeVpnRouteEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVpnRouteEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeVpnRouteEntriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpnRouteEntriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

