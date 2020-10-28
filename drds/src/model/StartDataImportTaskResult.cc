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

#include <alibabacloud/drds/model/StartDataImportTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

StartDataImportTaskResult::StartDataImportTaskResult() :
	ServiceResult()
{}

StartDataImportTaskResult::StartDataImportTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartDataImportTaskResult::~StartDataImportTaskResult()
{}

void StartDataImportTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskManageResultNode = value["TaskManageResult"];
	if(!taskManageResultNode["Success"].isNull())
		taskManageResult_.success = taskManageResultNode["Success"].asString() == "true";
	if(!taskManageResultNode["Message"].isNull())
		taskManageResult_.message = taskManageResultNode["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

StartDataImportTaskResult::TaskManageResult StartDataImportTaskResult::getTaskManageResult()const
{
	return taskManageResult_;
}

bool StartDataImportTaskResult::getSuccess()const
{
	return success_;
}

