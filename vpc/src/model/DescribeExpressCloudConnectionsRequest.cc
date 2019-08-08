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

#include <alibabacloud/vpc/model/DescribeExpressCloudConnectionsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeExpressCloudConnectionsRequest;

DescribeExpressCloudConnectionsRequest::DescribeExpressCloudConnectionsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeExpressCloudConnections")
{}

DescribeExpressCloudConnectionsRequest::~DescribeExpressCloudConnectionsRequest()
{}

std::vector<DescribeExpressCloudConnectionsRequest::Filter> DescribeExpressCloudConnectionsRequest::getFilter()const
{
	return filter_;
}

void DescribeExpressCloudConnectionsRequest::setFilter(const std::vector<Filter>& filter)
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

long DescribeExpressCloudConnectionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeExpressCloudConnectionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeExpressCloudConnectionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeExpressCloudConnectionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeExpressCloudConnectionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeExpressCloudConnectionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeExpressCloudConnectionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeExpressCloudConnectionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeExpressCloudConnectionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeExpressCloudConnectionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeExpressCloudConnectionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeExpressCloudConnectionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeExpressCloudConnectionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeExpressCloudConnectionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

