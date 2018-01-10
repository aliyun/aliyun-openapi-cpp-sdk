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

#include <alibabacloud/ecs/model/DescribePhysicalConnectionsRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePhysicalConnectionsRequest::DescribePhysicalConnectionsRequest() :
	EcsRequest("DescribePhysicalConnections")
{}

DescribePhysicalConnectionsRequest::~DescribePhysicalConnectionsRequest()
{}

std::vector<DescribePhysicalConnectionsRequest::Filter> DescribePhysicalConnectionsRequest::getFilter()const
{
	return filter_;
}

void DescribePhysicalConnectionsRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	int i = 0;
	for(int i = 0; i!= filter.size(); i++)	{
		auto obj = filter.at(i);
		std::string str ="Filter."+ std::to_string(i);
		setParameter(str + ".Key", obj.key);
		for(int i = 0; i!= obj.value.size(); i++)				setParameter(str + ".Value."+ std::to_string(i), obj.value.at(i));
	}
}

long DescribePhysicalConnectionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePhysicalConnectionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribePhysicalConnectionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribePhysicalConnectionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribePhysicalConnectionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePhysicalConnectionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePhysicalConnectionsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribePhysicalConnectionsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribePhysicalConnectionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePhysicalConnectionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribePhysicalConnectionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePhysicalConnectionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePhysicalConnectionsRequest::getUserCidr()const
{
	return userCidr_;
}

void DescribePhysicalConnectionsRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setParameter("UserCidr", userCidr);
}

long DescribePhysicalConnectionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePhysicalConnectionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribePhysicalConnectionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribePhysicalConnectionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

