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

#include <alibabacloud/vpc/model/DescribeVpnConnectionsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnConnectionsRequest;

DescribeVpnConnectionsRequest::DescribeVpnConnectionsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnConnections")
{}

DescribeVpnConnectionsRequest::~DescribeVpnConnectionsRequest()
{}

long DescribeVpnConnectionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVpnConnectionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeVpnConnectionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVpnConnectionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVpnConnectionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVpnConnectionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVpnConnectionsRequest::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

void DescribeVpnConnectionsRequest::setVpnConnectionId(const std::string& vpnConnectionId)
{
	vpnConnectionId_ = vpnConnectionId;
	setCoreParameter("VpnConnectionId", vpnConnectionId);
}

std::string DescribeVpnConnectionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVpnConnectionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeVpnConnectionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVpnConnectionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeVpnConnectionsRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void DescribeVpnConnectionsRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", vpnGatewayId);
}

long DescribeVpnConnectionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVpnConnectionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeVpnConnectionsRequest::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

void DescribeVpnConnectionsRequest::setCustomerGatewayId(const std::string& customerGatewayId)
{
	customerGatewayId_ = customerGatewayId;
	setCoreParameter("CustomerGatewayId", customerGatewayId);
}

int DescribeVpnConnectionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpnConnectionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

