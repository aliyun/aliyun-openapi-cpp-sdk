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

using AlibabaCloud::Vpc::Model::DescribeVirtualBorderRoutersRequest;

DescribeVirtualBorderRoutersRequest::DescribeVirtualBorderRoutersRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVirtualBorderRouters")
{}

DescribeVirtualBorderRoutersRequest::~DescribeVirtualBorderRoutersRequest()
{}

long DescribeVirtualBorderRoutersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVirtualBorderRoutersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeVirtualBorderRoutersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVirtualBorderRoutersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVirtualBorderRoutersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVirtualBorderRoutersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeVirtualBorderRoutersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVirtualBorderRoutersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVirtualBorderRoutersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVirtualBorderRoutersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeVirtualBorderRoutersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVirtualBorderRoutersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

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
		for(int i = 0; i!= obj.value.size(); i++)				setCoreParameter(str + ".Value."+ std::to_string(i), obj.value.at(i));
		setCoreParameter(str + ".Key", obj.key);
	}
}

