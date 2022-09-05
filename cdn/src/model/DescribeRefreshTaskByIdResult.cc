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

#include <alibabacloud/cdn/model/DescribeRefreshTaskByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeRefreshTaskByIdResult::DescribeRefreshTaskByIdResult() :
	ServiceResult()
{}

DescribeRefreshTaskByIdResult::DescribeRefreshTaskByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRefreshTaskByIdResult::~DescribeRefreshTaskByIdResult()
{}

void DescribeRefreshTaskByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["CDNTask"];
	for (auto valueTasksCDNTask : allTasksNode)
	{
		CDNTask tasksObject;
		if(!valueTasksCDNTask["Status"].isNull())
			tasksObject.status = valueTasksCDNTask["Status"].asString();
		if(!valueTasksCDNTask["CreationTime"].isNull())
			tasksObject.creationTime = valueTasksCDNTask["CreationTime"].asString();
		if(!valueTasksCDNTask["ObjectType"].isNull())
			tasksObject.objectType = valueTasksCDNTask["ObjectType"].asString();
		if(!valueTasksCDNTask["Process"].isNull())
			tasksObject.process = valueTasksCDNTask["Process"].asString();
		if(!valueTasksCDNTask["Description"].isNull())
			tasksObject.description = valueTasksCDNTask["Description"].asString();
		if(!valueTasksCDNTask["ObjectPath"].isNull())
			tasksObject.objectPath = valueTasksCDNTask["ObjectPath"].asString();
		if(!valueTasksCDNTask["TaskId"].isNull())
			tasksObject.taskId = valueTasksCDNTask["TaskId"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeRefreshTaskByIdResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeRefreshTaskByIdResult::CDNTask> DescribeRefreshTaskByIdResult::getTasks()const
{
	return tasks_;
}

