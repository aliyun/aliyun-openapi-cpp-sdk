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

#include <alibabacloud/live/model/DescribeLivePullToPushListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLivePullToPushListResult::DescribeLivePullToPushListResult() :
	ServiceResult()
{}

DescribeLivePullToPushListResult::DescribeLivePullToPushListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePullToPushListResult::~DescribeLivePullToPushListResult()
{}

void DescribeLivePullToPushListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskListNode = value["TaskList"]["TaskListItem"];
	for (auto valueTaskListTaskListItem : allTaskListNode)
	{
		TaskListItem taskListObject;
		if(!valueTaskListTaskListItem["TaskId"].isNull())
			taskListObject.taskId = valueTaskListTaskListItem["TaskId"].asString();
		if(!valueTaskListTaskListItem["TaskStatus"].isNull())
			taskListObject.taskStatus = std::stoi(valueTaskListTaskListItem["TaskStatus"].asString());
		if(!valueTaskListTaskListItem["TaskInvalidReason"].isNull())
			taskListObject.taskInvalidReason = valueTaskListTaskListItem["TaskInvalidReason"].asString();
		if(!valueTaskListTaskListItem["TaskExitTime"].isNull())
			taskListObject.taskExitTime = std::stoi(valueTaskListTaskListItem["TaskExitTime"].asString());
		if(!valueTaskListTaskListItem["TaskExitReason"].isNull())
			taskListObject.taskExitReason = valueTaskListTaskListItem["TaskExitReason"].asString();
		if(!valueTaskListTaskListItem["CurrentOffset"].isNull())
			taskListObject.currentOffset = std::stoi(valueTaskListTaskListItem["CurrentOffset"].asString());
		if(!valueTaskListTaskListItem["CurrentFileIndex"].isNull())
			taskListObject.currentFileIndex = std::stoi(valueTaskListTaskListItem["CurrentFileIndex"].asString());
		auto taskInfoNode = value["TaskInfo"];
		if(!taskInfoNode["TaskId"].isNull())
			taskListObject.taskInfo.taskId = taskInfoNode["TaskId"].asString();
		if(!taskInfoNode["TaskName"].isNull())
			taskListObject.taskInfo.taskName = taskInfoNode["TaskName"].asString();
		if(!taskInfoNode["StartTime"].isNull())
			taskListObject.taskInfo.startTime = taskInfoNode["StartTime"].asString();
		if(!taskInfoNode["EndTime"].isNull())
			taskListObject.taskInfo.endTime = taskInfoNode["EndTime"].asString();
		if(!taskInfoNode["SourceType"].isNull())
			taskListObject.taskInfo.sourceType = taskInfoNode["SourceType"].asString();
		if(!taskInfoNode["SourceProtocol"].isNull())
			taskListObject.taskInfo.sourceProtocol = taskInfoNode["SourceProtocol"].asString();
		if(!taskInfoNode["DstUrl"].isNull())
			taskListObject.taskInfo.dstUrl = taskInfoNode["DstUrl"].asString();
		if(!taskInfoNode["CallbackURL"].isNull())
			taskListObject.taskInfo.callbackURL = taskInfoNode["CallbackURL"].asString();
		if(!taskInfoNode["Offset"].isNull())
			taskListObject.taskInfo.offset = std::stoi(taskInfoNode["Offset"].asString());
		if(!taskInfoNode["FileIndex"].isNull())
			taskListObject.taskInfo.fileIndex = std::stoi(taskInfoNode["FileIndex"].asString());
		if(!taskInfoNode["RetryCount"].isNull())
			taskListObject.taskInfo.retryCount = std::stoi(taskInfoNode["RetryCount"].asString());
		if(!taskInfoNode["RetryInterval"].isNull())
			taskListObject.taskInfo.retryInterval = std::stoi(taskInfoNode["RetryInterval"].asString());
		if(!taskInfoNode["RepeatNumber"].isNull())
			taskListObject.taskInfo.repeatNumber = std::stoi(taskInfoNode["RepeatNumber"].asString());
			auto allSourceUrls = taskInfoNode["SourceUrls"]["sourceUrls"];
			for (auto value : allSourceUrls)
				taskListObject.taskInfo.sourceUrls.push_back(value.asString());
		taskList_.push_back(taskListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeLivePullToPushListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLivePullToPushListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLivePullToPushListResult::TaskListItem> DescribeLivePullToPushListResult::getTaskList()const
{
	return taskList_;
}

int DescribeLivePullToPushListResult::getTotal()const
{
	return total_;
}

