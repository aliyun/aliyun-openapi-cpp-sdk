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

#include <alibabacloud/vs/model/DescribeParentPlatformsRequest.h>

using AlibabaCloud::Vs::Model::DescribeParentPlatformsRequest;

DescribeParentPlatformsRequest::DescribeParentPlatformsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeParentPlatforms")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeParentPlatformsRequest::~DescribeParentPlatformsRequest()
{}

std::string DescribeParentPlatformsRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeParentPlatformsRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

std::string DescribeParentPlatformsRequest::getGbId()const
{
	return gbId_;
}

void DescribeParentPlatformsRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setParameter("GbId", gbId);
}

long DescribeParentPlatformsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeParentPlatformsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

long DescribeParentPlatformsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeParentPlatformsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeParentPlatformsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeParentPlatformsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeParentPlatformsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeParentPlatformsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeParentPlatformsRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeParentPlatformsRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

std::string DescribeParentPlatformsRequest::getStatus()const
{
	return status_;
}

void DescribeParentPlatformsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

