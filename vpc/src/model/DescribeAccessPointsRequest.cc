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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAccessPointsRequest::~DescribeAccessPointsRequest()
{}

long DescribeAccessPointsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAccessPointsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAccessPointsRequest::getType()const
{
	return type_;
}

void DescribeAccessPointsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int DescribeAccessPointsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAccessPointsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAccessPointsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAccessPointsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeAccessPointsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAccessPointsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAccessPointsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAccessPointsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeAccessPointsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAccessPointsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<DescribeAccessPointsRequest::Filter> DescribeAccessPointsRequest::getFilter()const
{
	return filter_;
}

void DescribeAccessPointsRequest::setFilter(const std::vector<Filter>& filter)
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

std::string DescribeAccessPointsRequest::getHostOperator()const
{
	return hostOperator_;
}

void DescribeAccessPointsRequest::setHostOperator(const std::string& hostOperator)
{
	hostOperator_ = hostOperator;
	setParameter("HostOperator", hostOperator);
}

std::string DescribeAccessPointsRequest::getName()const
{
	return name_;
}

void DescribeAccessPointsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

