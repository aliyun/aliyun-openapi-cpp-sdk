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

#include <alibabacloud/dataworks-public/model/ListDISyncTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDISyncTasksResult::ListDISyncTasksResult() :
	ServiceResult()
{}

ListDISyncTasksResult::ListDISyncTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDISyncTasksResult::~ListDISyncTasksResult()
{}

void ListDISyncTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskListNode = value["TaskList"];
	if(!taskListNode["PageNumber"].isNull())
		taskList_.pageNumber = std::stoi(taskListNode["PageNumber"].asString());
	if(!taskListNode["PageSize"].isNull())
		taskList_.pageSize = std::stoi(taskListNode["PageSize"].asString());
	if(!taskListNode["TotalCount"].isNull())
		taskList_.totalCount = std::stoi(taskListNode["TotalCount"].asString());
	auto allRealTimeSolutionListNode = taskListNode["RealTimeSolutionList"]["RealTimeSolutionListItem"];
	for (auto taskListNodeRealTimeSolutionListRealTimeSolutionListItem : allRealTimeSolutionListNode)
	{
		TaskList::RealTimeSolutionListItem realTimeSolutionListItemObject;
		if(!taskListNodeRealTimeSolutionListRealTimeSolutionListItem["ProcessId"].isNull())
			realTimeSolutionListItemObject.processId = std::stol(taskListNodeRealTimeSolutionListRealTimeSolutionListItem["ProcessId"].asString());
		if(!taskListNodeRealTimeSolutionListRealTimeSolutionListItem["ProcessName"].isNull())
			realTimeSolutionListItemObject.processName = taskListNodeRealTimeSolutionListRealTimeSolutionListItem["ProcessName"].asString();
		if(!taskListNodeRealTimeSolutionListRealTimeSolutionListItem["TaskStatus"].isNull())
			realTimeSolutionListItemObject.taskStatus = taskListNodeRealTimeSolutionListRealTimeSolutionListItem["TaskStatus"].asString();
		if(!taskListNodeRealTimeSolutionListRealTimeSolutionListItem["TaskType"].isNull())
			realTimeSolutionListItemObject.taskType = taskListNodeRealTimeSolutionListRealTimeSolutionListItem["TaskType"].asString();
		if(!taskListNodeRealTimeSolutionListRealTimeSolutionListItem["CreateTime"].isNull())
			realTimeSolutionListItemObject.createTime = std::stol(taskListNodeRealTimeSolutionListRealTimeSolutionListItem["CreateTime"].asString());
		taskList_.realTimeSolutionList.push_back(realTimeSolutionListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListDISyncTasksResult::TaskList ListDISyncTasksResult::getTaskList()const
{
	return taskList_;
}

bool ListDISyncTasksResult::getSuccess()const
{
	return success_;
}

