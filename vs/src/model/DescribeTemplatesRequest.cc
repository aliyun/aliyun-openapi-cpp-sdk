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

#include <alibabacloud/vs/model/DescribeTemplatesRequest.h>

using AlibabaCloud::Vs::Model::DescribeTemplatesRequest;

DescribeTemplatesRequest::DescribeTemplatesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeTemplates")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTemplatesRequest::~DescribeTemplatesRequest()
{}

std::string DescribeTemplatesRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeTemplatesRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

std::string DescribeTemplatesRequest::getType()const
{
	return type_;
}

void DescribeTemplatesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long DescribeTemplatesRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeTemplatesRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

long DescribeTemplatesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTemplatesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTemplatesRequest::getId()const
{
	return id_;
}

void DescribeTemplatesRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeTemplatesRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTemplatesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeTemplatesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTemplatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTemplatesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeTemplatesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeTemplatesRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeTemplatesRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

