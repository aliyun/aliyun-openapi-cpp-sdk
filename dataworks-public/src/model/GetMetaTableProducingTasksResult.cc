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

#include <alibabacloud/dataworks-public/model/GetMetaTableProducingTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableProducingTasksResult::GetMetaTableProducingTasksResult() :
	ServiceResult()
{}

GetMetaTableProducingTasksResult::GetMetaTableProducingTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableProducingTasksResult::~GetMetaTableProducingTasksResult()
{}

void GetMetaTableProducingTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["TaskId"].isNull())
			dataObject.taskId = valueDataDataItem["TaskId"].asString();
		if(!valueDataDataItem["TaskName"].isNull())
			dataObject.taskName = valueDataDataItem["TaskName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetMetaTableProducingTasksResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetMetaTableProducingTasksResult::DataItem> GetMetaTableProducingTasksResult::getData()const
{
	return data_;
}

std::string GetMetaTableProducingTasksResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableProducingTasksResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableProducingTasksResult::getSuccess()const
{
	return success_;
}

