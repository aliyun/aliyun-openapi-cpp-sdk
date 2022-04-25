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

#include <alibabacloud/dataworks-public/model/GetMigrationProcessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMigrationProcessResult::GetMigrationProcessResult() :
	ServiceResult()
{}

GetMigrationProcessResult::GetMigrationProcessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMigrationProcessResult::~GetMigrationProcessResult()
{}

void GetMigrationProcessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ProgressTaskItem"];
	for (auto valueDataProgressTaskItem : allDataNode)
	{
		ProgressTaskItem dataObject;
		if(!valueDataProgressTaskItem["TaskStatus"].isNull())
			dataObject.taskStatus = valueDataProgressTaskItem["TaskStatus"].asString();
		if(!valueDataProgressTaskItem["TaskName"].isNull())
			dataObject.taskName = valueDataProgressTaskItem["TaskName"].asString();
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

int GetMigrationProcessResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetMigrationProcessResult::ProgressTaskItem> GetMigrationProcessResult::getData()const
{
	return data_;
}

std::string GetMigrationProcessResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMigrationProcessResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMigrationProcessResult::getSuccess()const
{
	return success_;
}

