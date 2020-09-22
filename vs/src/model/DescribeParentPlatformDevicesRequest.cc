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

#include <alibabacloud/vs/model/DescribeParentPlatformDevicesRequest.h>

using AlibabaCloud::Vs::Model::DescribeParentPlatformDevicesRequest;

DescribeParentPlatformDevicesRequest::DescribeParentPlatformDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeParentPlatformDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeParentPlatformDevicesRequest::~DescribeParentPlatformDevicesRequest()
{}

std::string DescribeParentPlatformDevicesRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeParentPlatformDevicesRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

long DescribeParentPlatformDevicesRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeParentPlatformDevicesRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

long DescribeParentPlatformDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeParentPlatformDevicesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeParentPlatformDevicesRequest::getId()const
{
	return id_;
}

void DescribeParentPlatformDevicesRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeParentPlatformDevicesRequest::getShowLog()const
{
	return showLog_;
}

void DescribeParentPlatformDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeParentPlatformDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeParentPlatformDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeParentPlatformDevicesRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeParentPlatformDevicesRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

