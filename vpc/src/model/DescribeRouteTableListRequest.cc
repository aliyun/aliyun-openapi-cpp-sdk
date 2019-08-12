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

#include <alibabacloud/vpc/model/DescribeRouteTableListRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouteTableListRequest;

DescribeRouteTableListRequest::DescribeRouteTableListRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeRouteTableList")
{}

DescribeRouteTableListRequest::~DescribeRouteTableListRequest()
{}

long DescribeRouteTableListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouteTableListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeRouteTableListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouteTableListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRouteTableListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRouteTableListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeRouteTableListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouteTableListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeRouteTableListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouteTableListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeRouteTableListRequest::getRouterType()const
{
	return routerType_;
}

void DescribeRouteTableListRequest::setRouterType(const std::string& routerType)
{
	routerType_ = routerType;
	setCoreParameter("RouterType", routerType);
}

std::string DescribeRouteTableListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeRouteTableListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeRouteTableListRequest::getRouteTableName()const
{
	return routeTableName_;
}

void DescribeRouteTableListRequest::setRouteTableName(const std::string& routeTableName)
{
	routeTableName_ = routeTableName;
	setCoreParameter("RouteTableName", routeTableName);
}

std::string DescribeRouteTableListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRouteTableListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRouteTableListRequest::getRouterId()const
{
	return routerId_;
}

void DescribeRouteTableListRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setCoreParameter("RouterId", routerId);
}

std::string DescribeRouteTableListRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeRouteTableListRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

int DescribeRouteTableListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRouteTableListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::vector<DescribeRouteTableListRequest::Tag> DescribeRouteTableListRequest::getTag()const
{
	return tag_;
}

void DescribeRouteTableListRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DescribeRouteTableListRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DescribeRouteTableListRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setCoreParameter("RouteTableId", routeTableId);
}

