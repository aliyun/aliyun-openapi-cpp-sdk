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

#include <alibabacloud/sgw/model/DescribeCSGClientTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeCSGClientTasksResult::DescribeCSGClientTasksResult() :
	ServiceResult()
{}

DescribeCSGClientTasksResult::DescribeCSGClientTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCSGClientTasksResult::~DescribeCSGClientTasksResult()
{}

void DescribeCSGClientTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["StateCode"].isNull())
			tasksObject.stateCode = valueTasksTask["StateCode"].asString();
		if(!valueTasksTask["Progress"].isNull())
			tasksObject.progress = std::stoi(valueTasksTask["Progress"].asString());
		if(!valueTasksTask["MessageParams"].isNull())
			tasksObject.messageParams = valueTasksTask["MessageParams"].asString();
		if(!valueTasksTask["UpdatedTime"].isNull())
			tasksObject.updatedTime = std::stol(valueTasksTask["UpdatedTime"].asString());
		if(!valueTasksTask["MessageKey"].isNull())
			tasksObject.messageKey = valueTasksTask["MessageKey"].asString();
		if(!valueTasksTask["Name"].isNull())
			tasksObject.name = valueTasksTask["Name"].asString();
		if(!valueTasksTask["TaskId"].isNull())
			tasksObject.taskId = valueTasksTask["TaskId"].asString();
		if(!valueTasksTask["CreatedTime"].isNull())
			tasksObject.createdTime = std::stol(valueTasksTask["CreatedTime"].asString());
		tasks_.push_back(tasksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCSGClientTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCSGClientTasksResult::Task> DescribeCSGClientTasksResult::getTasks()const
{
	return tasks_;
}

std::string DescribeCSGClientTasksResult::getMessage()const
{
	return message_;
}

int DescribeCSGClientTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCSGClientTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeCSGClientTasksResult::getCode()const
{
	return code_;
}

bool DescribeCSGClientTasksResult::getSuccess()const
{
	return success_;
}

