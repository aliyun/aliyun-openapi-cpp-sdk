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

#include <alibabacloud/vs/model/DescribeGroupsRequest.h>

using AlibabaCloud::Vs::Model::DescribeGroupsRequest;

DescribeGroupsRequest::DescribeGroupsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeGroups")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGroupsRequest::~DescribeGroupsRequest()
{}

std::string DescribeGroupsRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeGroupsRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

long DescribeGroupsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeGroupsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

bool DescribeGroupsRequest::getIncludeStats()const
{
	return includeStats_;
}

void DescribeGroupsRequest::setIncludeStats(bool includeStats)
{
	includeStats_ = includeStats;
	setParameter("IncludeStats", includeStats ? "true" : "false");
}

long DescribeGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGroupsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeGroupsRequest::getId()const
{
	return id_;
}

void DescribeGroupsRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeGroupsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeGroupsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeGroupsRequest::getInProtocol()const
{
	return inProtocol_;
}

void DescribeGroupsRequest::setInProtocol(const std::string& inProtocol)
{
	inProtocol_ = inProtocol;
	setParameter("InProtocol", inProtocol);
}

std::string DescribeGroupsRequest::getName()const
{
	return name_;
}

void DescribeGroupsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeGroupsRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeGroupsRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

std::string DescribeGroupsRequest::getRegion()const
{
	return region_;
}

void DescribeGroupsRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string DescribeGroupsRequest::getStatus()const
{
	return status_;
}

void DescribeGroupsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

