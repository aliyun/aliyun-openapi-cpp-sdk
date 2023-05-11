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

#include <alibabacloud/alidns/model/DescribeIspFlushCacheTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeIspFlushCacheTasksResult::DescribeIspFlushCacheTasksResult() :
	ServiceResult()
{}

DescribeIspFlushCacheTasksResult::DescribeIspFlushCacheTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIspFlushCacheTasksResult::~DescribeIspFlushCacheTasksResult()
{}

void DescribeIspFlushCacheTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspFlushCacheTasksNode = value["IspFlushCacheTasks"]["IspFlushCacheTask"];
	for (auto valueIspFlushCacheTasksIspFlushCacheTask : allIspFlushCacheTasksNode)
	{
		IspFlushCacheTask ispFlushCacheTasksObject;
		if(!valueIspFlushCacheTasksIspFlushCacheTask["TaskId"].isNull())
			ispFlushCacheTasksObject.taskId = valueIspFlushCacheTasksIspFlushCacheTask["TaskId"].asString();
		if(!valueIspFlushCacheTasksIspFlushCacheTask["DomainName"].isNull())
			ispFlushCacheTasksObject.domainName = valueIspFlushCacheTasksIspFlushCacheTask["DomainName"].asString();
		if(!valueIspFlushCacheTasksIspFlushCacheTask["InstanceId"].isNull())
			ispFlushCacheTasksObject.instanceId = valueIspFlushCacheTasksIspFlushCacheTask["InstanceId"].asString();
		if(!valueIspFlushCacheTasksIspFlushCacheTask["InstanceName"].isNull())
			ispFlushCacheTasksObject.instanceName = valueIspFlushCacheTasksIspFlushCacheTask["InstanceName"].asString();
		if(!valueIspFlushCacheTasksIspFlushCacheTask["Isp"].isNull())
			ispFlushCacheTasksObject.isp = valueIspFlushCacheTasksIspFlushCacheTask["Isp"].asString();
		if(!valueIspFlushCacheTasksIspFlushCacheTask["TaskStatus"].isNull())
			ispFlushCacheTasksObject.taskStatus = valueIspFlushCacheTasksIspFlushCacheTask["TaskStatus"].asString();
		if(!valueIspFlushCacheTasksIspFlushCacheTask["CreateTime"].isNull())
			ispFlushCacheTasksObject.createTime = valueIspFlushCacheTasksIspFlushCacheTask["CreateTime"].asString();
		if(!valueIspFlushCacheTasksIspFlushCacheTask["CreateTimestamp"].isNull())
			ispFlushCacheTasksObject.createTimestamp = std::stol(valueIspFlushCacheTasksIspFlushCacheTask["CreateTimestamp"].asString());
		ispFlushCacheTasks_.push_back(ispFlushCacheTasksObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

std::vector<DescribeIspFlushCacheTasksResult::IspFlushCacheTask> DescribeIspFlushCacheTasksResult::getIspFlushCacheTasks()const
{
	return ispFlushCacheTasks_;
}

int DescribeIspFlushCacheTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIspFlushCacheTasksResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeIspFlushCacheTasksResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeIspFlushCacheTasksResult::getTotalItems()const
{
	return totalItems_;
}

