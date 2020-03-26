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

#include <alibabacloud/vpc/model/DescribeRouteEntryListRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouteEntryListRequest;

DescribeRouteEntryListRequest::DescribeRouteEntryListRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeRouteEntryList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRouteEntryListRequest::~DescribeRouteEntryListRequest()
{}

long DescribeRouteEntryListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouteEntryListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRouteEntryListRequest::getRouteEntryName()const
{
	return routeEntryName_;
}

void DescribeRouteEntryListRequest::setRouteEntryName(const std::string& routeEntryName)
{
	routeEntryName_ = routeEntryName;
	setParameter("RouteEntryName", routeEntryName);
}

std::string DescribeRouteEntryListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRouteEntryListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeRouteEntryListRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeRouteEntryListRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string DescribeRouteEntryListRequest::getRouteEntryType()const
{
	return routeEntryType_;
}

void DescribeRouteEntryListRequest::setRouteEntryType(const std::string& routeEntryType)
{
	routeEntryType_ = routeEntryType;
	setParameter("RouteEntryType", routeEntryType);
}

std::string DescribeRouteEntryListRequest::getIpVersion()const
{
	return ipVersion_;
}

void DescribeRouteEntryListRequest::setIpVersion(const std::string& ipVersion)
{
	ipVersion_ = ipVersion;
	setParameter("IpVersion", ipVersion);
}

std::string DescribeRouteEntryListRequest::getNextHopId()const
{
	return nextHopId_;
}

void DescribeRouteEntryListRequest::setNextHopId(const std::string& nextHopId)
{
	nextHopId_ = nextHopId;
	setParameter("NextHopId", nextHopId);
}

std::string DescribeRouteEntryListRequest::getNextHopType()const
{
	return nextHopType_;
}

void DescribeRouteEntryListRequest::setNextHopType(const std::string& nextHopType)
{
	nextHopType_ = nextHopType;
	setParameter("NextHopType", nextHopType);
}

std::string DescribeRouteEntryListRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DescribeRouteEntryListRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setParameter("RouteTableId", routeTableId);
}

std::string DescribeRouteEntryListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouteEntryListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRouteEntryListRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void DescribeRouteEntryListRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setParameter("DestinationCidrBlock", destinationCidrBlock);
}

std::string DescribeRouteEntryListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRouteEntryListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeRouteEntryListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouteEntryListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeRouteEntryListRequest::getMaxResult()const
{
	return maxResult_;
}

void DescribeRouteEntryListRequest::setMaxResult(int maxResult)
{
	maxResult_ = maxResult;
	setParameter("MaxResult", std::to_string(maxResult));
}

std::string DescribeRouteEntryListRequest::getRouteEntryId()const
{
	return routeEntryId_;
}

void DescribeRouteEntryListRequest::setRouteEntryId(const std::string& routeEntryId)
{
	routeEntryId_ = routeEntryId;
	setParameter("RouteEntryId", routeEntryId);
}

