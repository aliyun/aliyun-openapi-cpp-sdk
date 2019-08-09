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

#include <alibabacloud/dcdn/model/DescribeDcdnRefreshTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnRefreshTasksResult::DescribeDcdnRefreshTasksResult() :
	ServiceResult()
{}

DescribeDcdnRefreshTasksResult::DescribeDcdnRefreshTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnRefreshTasksResult::~DescribeDcdnRefreshTasksResult()
{}

void DescribeDcdnRefreshTasksResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTasks = value["Tasks"]["Task"];
	for (auto value : allTasks)
	{
		Task tasksObject;
		if(!value["TaskId"].isNull())
			tasksObject.taskId = value["TaskId"].asString();
		if(!value["ObjectPath"].isNull())
			tasksObject.objectPath = value["ObjectPath"].asString();
		if(!value["Process"].isNull())
			tasksObject.process = value["Process"].asString();
		if(!value["Status"].isNull())
			tasksObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			tasksObject.creationTime = value["CreationTime"].asString();
		if(!value["Description"].isNull())
			tasksObject.description = value["Description"].asString();
		if(!value["ObjectType"].isNull())
			tasksObject.objectType = value["ObjectType"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeDcdnRefreshTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDcdnRefreshTasksResult::Task> DescribeDcdnRefreshTasksResult::getTasks()const
{
	return tasks_;
}

long DescribeDcdnRefreshTasksResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDcdnRefreshTasksResult::getPageNumber()const
{
	return pageNumber_;
}

