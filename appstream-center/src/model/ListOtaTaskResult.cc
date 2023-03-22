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

#include <alibabacloud/appstream-center/model/ListOtaTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

ListOtaTaskResult::ListOtaTaskResult() :
	ServiceResult()
{}

ListOtaTaskResult::ListOtaTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOtaTaskResult::~ListOtaTaskResult()
{}

void ListOtaTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskListNode = value["TaskList"]["data"];
	for (auto valueTaskListdata : allTaskListNode)
	{
		Data taskListObject;
		if(!valueTaskListdata["OtaVersion"].isNull())
			taskListObject.otaVersion = valueTaskListdata["OtaVersion"].asString();
		if(!valueTaskListdata["TaskDisplayStatus"].isNull())
			taskListObject.taskDisplayStatus = valueTaskListdata["TaskDisplayStatus"].asString();
		if(!valueTaskListdata["TaskStartTime"].isNull())
			taskListObject.taskStartTime = valueTaskListdata["TaskStartTime"].asString();
		if(!valueTaskListdata["TaskId"].isNull())
			taskListObject.taskId = valueTaskListdata["TaskId"].asString();
		taskList_.push_back(taskListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListOtaTaskResult::getTotalCount()const
{
	return totalCount_;
}

int ListOtaTaskResult::getPageSize()const
{
	return pageSize_;
}

int ListOtaTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListOtaTaskResult::Data> ListOtaTaskResult::getTaskList()const
{
	return taskList_;
}

