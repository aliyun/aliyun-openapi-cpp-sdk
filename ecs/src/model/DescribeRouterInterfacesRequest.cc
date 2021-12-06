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

#include <alibabacloud/ecs/model/DescribeRouterInterfacesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRouterInterfacesRequest;

DescribeRouterInterfacesRequest::DescribeRouterInterfacesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeRouterInterfaces")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRouterInterfacesRequest::~DescribeRouterInterfacesRequest()
{}

long DescribeRouterInterfacesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouterInterfacesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeRouterInterfacesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouterInterfacesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRouterInterfacesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRouterInterfacesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeRouterInterfacesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRouterInterfacesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRouterInterfacesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouterInterfacesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeRouterInterfacesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouterInterfacesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<DescribeRouterInterfacesRequest::Filter> DescribeRouterInterfacesRequest::getFilter()const
{
	return filter_;
}

void DescribeRouterInterfacesRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	for(int dep1 = 0; dep1!= filter.size(); dep1++) {
		auto filterObj = filter.at(dep1);
		std::string filterObjStr = "Filter." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= filterObj.value.size(); dep2++) {
			setParameter(filterObjStr + ".Value."+ std::to_string(dep2), filterObj.value.at(dep2));
		}
		setParameter(filterObjStr + ".Key", filterObj.key);
	}
}

