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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeExpressCloudConnectionsRequest::~DescribeExpressCloudConnectionsRequest()
{}

long DescribeExpressCloudConnectionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeExpressCloudConnectionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string DescribeExpressCloudConnectionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeExpressCloudConnectionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
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

std::string DescribeExpressCloudConnectionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeExpressCloudConnectionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
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

long DescribeExpressCloudConnectionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeExpressCloudConnectionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<DescribeExpressCloudConnectionsRequest::Filter> DescribeExpressCloudConnectionsRequest::getFilter()const
{
	return filter_;
}

void DescribeExpressCloudConnectionsRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	for(int dep1 = 0; dep1!= filter.size(); dep1++) {
		auto filterObj = filter.at(dep1);
		std::string filterObjStr = "Filter." + std::to_string(dep1);
		for(int dep2 = 0; dep2!= value.size(); dep2++)
			setCoreParameter(filterObjStr + ".Value."+ std::to_string(dep2), filterObj.value.at(dep2));
		setCoreParameter(filterObjStr + ".Key", filterObj.key);
	}
}

