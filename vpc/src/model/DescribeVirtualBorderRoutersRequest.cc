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

#include <alibabacloud/vpc/model/DescribeVirtualBorderRoutersRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVirtualBorderRoutersRequest::DescribeVirtualBorderRoutersRequest() :
	VpcRequest("DescribeVirtualBorderRouters")
{}

DescribeVirtualBorderRoutersRequest::~DescribeVirtualBorderRoutersRequest()
{}

std::vector<DescribeVirtualBorderRoutersRequest::Filter> DescribeVirtualBorderRoutersRequest::getFilter()const
{
	return filter_;
}

void DescribeVirtualBorderRoutersRequest::setFilter(const std::vector<Filter>& filter)
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

long DescribeVirtualBorderRoutersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVirtualBorderRoutersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVirtualBorderRoutersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVirtualBorderRoutersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVirtualBorderRoutersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVirtualBorderRoutersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeVirtualBorderRoutersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVirtualBorderRoutersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeVirtualBorderRoutersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVirtualBorderRoutersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeVirtualBorderRoutersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVirtualBorderRoutersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

