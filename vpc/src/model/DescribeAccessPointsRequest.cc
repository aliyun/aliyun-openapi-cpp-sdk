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

#include <alibabacloud/vpc/model/DescribeAccessPointsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeAccessPointsRequest;

DescribeAccessPointsRequest::DescribeAccessPointsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeAccessPoints")
{}

DescribeAccessPointsRequest::~DescribeAccessPointsRequest()
{}

std::vector<DescribeAccessPointsRequest::Filter> DescribeAccessPointsRequest::getFilter()const
{
	return filter_;
}

void DescribeAccessPointsRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	int i = 0;
	for(int i = 0; i!= filter.size(); i++)	{
		auto obj = filter.at(i);
		std::string str ="Filter."+ std::to_string(i);
		for(int i = 0; i!= obj.value.size(); i++)				setCoreParameter(str + ".Value."+ std::to_string(i), std::to_string(obj.value.at(i)));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

long DescribeAccessPointsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAccessPointsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeAccessPointsRequest::getHostOperator()const
{
	return hostOperator_;
}

void DescribeAccessPointsRequest::setHostOperator(const std::string& hostOperator)
{
	hostOperator_ = hostOperator;
	setCoreParameter("HostOperator", std::to_string(hostOperator));
}

std::string DescribeAccessPointsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAccessPointsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeAccessPointsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAccessPointsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeAccessPointsRequest::getName()const
{
	return name_;
}

void DescribeAccessPointsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

int DescribeAccessPointsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAccessPointsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeAccessPointsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAccessPointsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeAccessPointsRequest::getType()const
{
	return type_;
}

void DescribeAccessPointsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

int DescribeAccessPointsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAccessPointsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

