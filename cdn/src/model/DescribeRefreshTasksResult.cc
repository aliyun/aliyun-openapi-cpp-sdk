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

#include <alibabacloud/cdn/model/DescribeRefreshTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeRefreshTasksResult::DescribeRefreshTasksResult() :
	ServiceResult()
{}

DescribeRefreshTasksResult::DescribeRefreshTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRefreshTasksResult::~DescribeRefreshTasksResult()
{}

void DescribeRefreshTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["CDNTask"];
	for (auto value : allTasks)
	{
		CDNTask cDNTaskObject;
		cDNTaskObject.taskId = value["TaskId"].asString();
		cDNTaskObject.objectPath = value["ObjectPath"].asString();
		cDNTaskObject.process = value["Process"].asString();
		cDNTaskObject.status = value["Status"].asString();
		cDNTaskObject.creationTime = value["CreationTime"].asString();
		cDNTaskObject.description = value["Description"].asString();
		cDNTaskObject.objectType = value["ObjectType"].asString();
		tasks_.push_back(cDNTaskObject);
	}
	pageNumber_ = std::stol(value["PageNumber"].asString());
	pageSize_ = std::stol(value["PageSize"].asString());
	totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeRefreshTasksResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeRefreshTasksResult::setTotalCount(long totalCount)
{
	totalCount_ = totalCount;
}

long DescribeRefreshTasksResult::getPageSize()const
{
	return pageSize_;
}

void DescribeRefreshTasksResult::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
}

long DescribeRefreshTasksResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRefreshTasksResult::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
}

