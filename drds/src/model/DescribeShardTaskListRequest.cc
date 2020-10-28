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

#include <alibabacloud/drds/model/DescribeShardTaskListRequest.h>

using AlibabaCloud::Drds::Model::DescribeShardTaskListRequest;

DescribeShardTaskListRequest::DescribeShardTaskListRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeShardTaskList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeShardTaskListRequest::~DescribeShardTaskListRequest()
{}

std::string DescribeShardTaskListRequest::getTaskType()const
{
	return taskType_;
}

void DescribeShardTaskListRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string DescribeShardTaskListRequest::getQuery()const
{
	return query_;
}

void DescribeShardTaskListRequest::setQuery(const std::string& query)
{
	query_ = query;
	setParameter("Query", query);
}

int DescribeShardTaskListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeShardTaskListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeShardTaskListRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeShardTaskListRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeShardTaskListRequest::getDbName()const
{
	return dbName_;
}

void DescribeShardTaskListRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string DescribeShardTaskListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeShardTaskListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeShardTaskListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeShardTaskListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

