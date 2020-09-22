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

#include <alibabacloud/vs/model/DescribeDirectoriesRequest.h>

using AlibabaCloud::Vs::Model::DescribeDirectoriesRequest;

DescribeDirectoriesRequest::DescribeDirectoriesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeDirectories")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDirectoriesRequest::~DescribeDirectoriesRequest()
{}

std::string DescribeDirectoriesRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeDirectoriesRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

long DescribeDirectoriesRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeDirectoriesRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

bool DescribeDirectoriesRequest::getNoPagination()const
{
	return noPagination_;
}

void DescribeDirectoriesRequest::setNoPagination(bool noPagination)
{
	noPagination_ = noPagination;
	setParameter("NoPagination", noPagination ? "true" : "false");
}

std::string DescribeDirectoriesRequest::getParentId()const
{
	return parentId_;
}

void DescribeDirectoriesRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

long DescribeDirectoriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDirectoriesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDirectoriesRequest::getShowLog()const
{
	return showLog_;
}

void DescribeDirectoriesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeDirectoriesRequest::getGroupId()const
{
	return groupId_;
}

void DescribeDirectoriesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long DescribeDirectoriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDirectoriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDirectoriesRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDirectoriesRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

