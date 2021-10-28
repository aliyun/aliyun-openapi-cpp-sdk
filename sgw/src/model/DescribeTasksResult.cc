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

#include <alibabacloud/sgw/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["SimpleTask"];
	for (auto valueTasksSimpleTask : allTasksNode)
	{
		SimpleTask tasksObject;
		if(!valueTasksSimpleTask["StateCode"].isNull())
			tasksObject.stateCode = valueTasksSimpleTask["StateCode"].asString();
		if(!valueTasksSimpleTask["Progress"].isNull())
			tasksObject.progress = std::stoi(valueTasksSimpleTask["Progress"].asString());
		if(!valueTasksSimpleTask["MessageParams"].isNull())
			tasksObject.messageParams = valueTasksSimpleTask["MessageParams"].asString();
		if(!valueTasksSimpleTask["UpdatedTime"].isNull())
			tasksObject.updatedTime = std::stol(valueTasksSimpleTask["UpdatedTime"].asString());
		if(!valueTasksSimpleTask["MessageKey"].isNull())
			tasksObject.messageKey = valueTasksSimpleTask["MessageKey"].asString();
		if(!valueTasksSimpleTask["Name"].isNull())
			tasksObject.name = valueTasksSimpleTask["Name"].asString();
		if(!valueTasksSimpleTask["StageCode"].isNull())
			tasksObject.stageCode = valueTasksSimpleTask["StageCode"].asString();
		if(!valueTasksSimpleTask["CreatedTime"].isNull())
			tasksObject.createdTime = std::stol(valueTasksSimpleTask["CreatedTime"].asString());
		if(!valueTasksSimpleTask["TaskId"].isNull())
			tasksObject.taskId = valueTasksSimpleTask["TaskId"].asString();
		if(!valueTasksSimpleTask["RelatedResourceId"].isNull())
			tasksObject.relatedResourceId = valueTasksSimpleTask["RelatedResourceId"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int DescribeTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTasksResult::SimpleTask> DescribeTasksResult::getTasks()const
{
	return tasks_;
}

std::string DescribeTasksResult::getMessage()const
{
	return message_;
}

int DescribeTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeTasksResult::getCode()const
{
	return code_;
}

bool DescribeTasksResult::getSuccess()const
{
	return success_;
}

