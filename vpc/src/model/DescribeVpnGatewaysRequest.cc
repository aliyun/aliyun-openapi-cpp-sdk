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

#include <alibabacloud/vpc/model/DescribeVpnGatewaysRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnGatewaysRequest;

DescribeVpnGatewaysRequest::DescribeVpnGatewaysRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnGateways")
{}

DescribeVpnGatewaysRequest::~DescribeVpnGatewaysRequest()
{}

std::string DescribeVpnGatewaysRequest::getBusinessStatus()const
{
	return businessStatus_;
}

void DescribeVpnGatewaysRequest::setBusinessStatus(const std::string& businessStatus)
{
	businessStatus_ = businessStatus;
	setCoreParameter("BusinessStatus", businessStatus);
}

long DescribeVpnGatewaysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVpnGatewaysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeVpnGatewaysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVpnGatewaysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVpnGatewaysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVpnGatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVpnGatewaysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVpnGatewaysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeVpnGatewaysRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeVpnGatewaysRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

int DescribeVpnGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVpnGatewaysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeVpnGatewaysRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void DescribeVpnGatewaysRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", vpnGatewayId);
}

long DescribeVpnGatewaysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVpnGatewaysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeVpnGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpnGatewaysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeVpnGatewaysRequest::getStatus()const
{
	return status_;
}

void DescribeVpnGatewaysRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

