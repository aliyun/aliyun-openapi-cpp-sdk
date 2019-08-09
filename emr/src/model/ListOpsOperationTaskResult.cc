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

#include <alibabacloud/emr/model/ListOpsOperationTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListOpsOperationTaskResult::ListOpsOperationTaskResult() :
	ServiceResult()
{}

ListOpsOperationTaskResult::ListOpsOperationTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOpsOperationTaskResult::~ListOpsOperationTaskResult()
{}

void ListOpsOperationTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTaskList = value["TaskList"]["TaskListItem"];
	for (auto value : allTaskList)
	{
		TaskListItem taskListObject;
		if(!value["Id"].isNull())
			taskListObject.id = std::stol(value["Id"].asString());
		if(!value["OpsOperationId"].isNull())
			taskListObject.opsOperationId = std::stol(value["OpsOperationId"].asString());
		if(!value["TaskId"].isNull())
			taskListObject.taskId = std::stol(value["TaskId"].asString());
		if(!value["Status"].isNull())
			taskListObject.status = value["Status"].asString();
		if(!value["RegionId"].isNull())
			taskListObject.regionId = value["RegionId"].asString();
		if(!value["UserId"].isNull())
			taskListObject.userId = value["UserId"].asString();
		if(!value["ClusterId"].isNull())
			taskListObject.clusterId = std::stol(value["ClusterId"].asString());
		if(!value["ExternalClusterId"].isNull())
			taskListObject.externalClusterId = value["ExternalClusterId"].asString();
		if(!value["HostId"].isNull())
			taskListObject.hostId = std::stol(value["HostId"].asString());
		if(!value["StartTime"].isNull())
			taskListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			taskListObject.endTime = value["EndTime"].asString();
		if(!value["CommandName"].isNull())
			taskListObject.commandName = value["CommandName"].asString();
		if(!value["HostName"].isNull())
			taskListObject.hostName = value["HostName"].asString();
		taskList_.push_back(taskListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListOpsOperationTaskResult::getPageSize()const
{
	return pageSize_;
}

int ListOpsOperationTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListOpsOperationTaskResult::TaskListItem> ListOpsOperationTaskResult::getTaskList()const
{
	return taskList_;
}

int ListOpsOperationTaskResult::getTotal()const
{
	return total_;
}

