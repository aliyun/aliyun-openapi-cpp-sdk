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

#include <alibabacloud/dataworks-public/model/ListHistoryTasksForResourceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListHistoryTasksForResourceGroupResult::ListHistoryTasksForResourceGroupResult() :
	ServiceResult()
{}

ListHistoryTasksForResourceGroupResult::ListHistoryTasksForResourceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHistoryTasksForResourceGroupResult::~ListHistoryTasksForResourceGroupResult()
{}

void ListHistoryTasksForResourceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalNum"].isNull())
		data_.totalNum = std::stoi(dataNode["TotalNum"].asString());
	auto allTasksNode = dataNode["Tasks"]["PopTasksForResourceGroupDto"];
	for (auto dataNodeTasksPopTasksForResourceGroupDto : allTasksNode)
	{
		Data::PopTasksForResourceGroupDto popTasksForResourceGroupDtoObject;
		if(!dataNodeTasksPopTasksForResourceGroupDto["ProjectName"].isNull())
			popTasksForResourceGroupDtoObject.projectName = dataNodeTasksPopTasksForResourceGroupDto["ProjectName"].asString();
		if(!dataNodeTasksPopTasksForResourceGroupDto["Status"].isNull())
			popTasksForResourceGroupDtoObject.status = std::stoi(dataNodeTasksPopTasksForResourceGroupDto["Status"].asString());
		if(!dataNodeTasksPopTasksForResourceGroupDto["Concurrency"].isNull())
			popTasksForResourceGroupDtoObject.concurrency = std::stoi(dataNodeTasksPopTasksForResourceGroupDto["Concurrency"].asString());
		if(!dataNodeTasksPopTasksForResourceGroupDto["TaskName"].isNull())
			popTasksForResourceGroupDtoObject.taskName = dataNodeTasksPopTasksForResourceGroupDto["TaskName"].asString();
		if(!dataNodeTasksPopTasksForResourceGroupDto["TaskType"].isNull())
			popTasksForResourceGroupDtoObject.taskType = std::stoi(dataNodeTasksPopTasksForResourceGroupDto["TaskType"].asString());
		if(!dataNodeTasksPopTasksForResourceGroupDto["TaskId"].isNull())
			popTasksForResourceGroupDtoObject.taskId = dataNodeTasksPopTasksForResourceGroupDto["TaskId"].asString();
		data_.tasks.push_back(popTasksForResourceGroupDtoObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListHistoryTasksForResourceGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListHistoryTasksForResourceGroupResult::Data ListHistoryTasksForResourceGroupResult::getData()const
{
	return data_;
}

std::string ListHistoryTasksForResourceGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListHistoryTasksForResourceGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListHistoryTasksForResourceGroupResult::getSuccess()const
{
	return success_;
}

