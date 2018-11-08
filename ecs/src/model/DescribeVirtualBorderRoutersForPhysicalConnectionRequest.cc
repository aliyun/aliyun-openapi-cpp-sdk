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

#include <alibabacloud/ecs/model/DescribeVirtualBorderRoutersForPhysicalConnectionRequest.h>

using AlibabaCloud::Ecs::Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest;

DescribeVirtualBorderRoutersForPhysicalConnectionRequest::DescribeVirtualBorderRoutersForPhysicalConnectionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeVirtualBorderRoutersForPhysicalConnection")
{}

DescribeVirtualBorderRoutersForPhysicalConnectionRequest::~DescribeVirtualBorderRoutersForPhysicalConnectionRequest()
{}

std::vector<DescribeVirtualBorderRoutersForPhysicalConnectionRequest::Filter> DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getFilter()const
{
	return filter_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	int i = 0;
	for(int i = 0; i!= filter.size(); i++)	{
		auto obj = filter.at(i);
		std::string str ="Filter."+ std::to_string(i);
		for(int i = 0; i!= obj.value.size(); i++)				setParameter(str + ".Value."+ std::to_string(i), obj.value.at(i));
		setParameter(str + ".Key", obj.key);
	}
}

long DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setParameter("PhysicalConnectionId", physicalConnectionId);
}

int DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

