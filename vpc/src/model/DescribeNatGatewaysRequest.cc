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

#include <alibabacloud/vpc/model/DescribeNatGatewaysRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeNatGatewaysRequest::DescribeNatGatewaysRequest() :
	VpcRequest("DescribeNatGateways")
{}

DescribeNatGatewaysRequest::~DescribeNatGatewaysRequest()
{}

long DescribeNatGatewaysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNatGatewaysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeNatGatewaysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNatGatewaysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNatGatewaysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNatGatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeNatGatewaysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNatGatewaysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeNatGatewaysRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeNatGatewaysRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeNatGatewaysRequest::getName()const
{
	return name_;
}

void DescribeNatGatewaysRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeNatGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNatGatewaysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeNatGatewaysRequest::getNatGatewayId()const
{
	return natGatewayId_;
}

void DescribeNatGatewaysRequest::setNatGatewayId(const std::string& natGatewayId)
{
	natGatewayId_ = natGatewayId;
	setParameter("NatGatewayId", natGatewayId);
}

long DescribeNatGatewaysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNatGatewaysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeNatGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNatGatewaysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

