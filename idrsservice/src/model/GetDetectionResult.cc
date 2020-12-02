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

#include <alibabacloud/idrsservice/model/GetDetectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

GetDetectionResult::GetDetectionResult() :
	ServiceResult()
{}

GetDetectionResult::GetDetectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDetectionResult::~GetDetectionResult()
{}

void GetDetectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreatedAt"].isNull())
		data_.createdAt = dataNode["CreatedAt"].asString();
	if(!dataNode["DepartmentId"].isNull())
		data_.departmentId = dataNode["DepartmentId"].asString();
	if(!dataNode["DepartmentName"].isNull())
		data_.departmentName = dataNode["DepartmentName"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["RecordingType"].isNull())
		data_.recordingType = dataNode["RecordingType"].asString();
	if(!dataNode["RuleId"].isNull())
		data_.ruleId = dataNode["RuleId"].asString();
	if(!dataNode["RuleName"].isNull())
		data_.ruleName = dataNode["RuleName"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	auto allTasksNode = dataNode["Tasks"]["TasksItem"];
	for (auto dataNodeTasksTasksItem : allTasksNode)
	{
		Data::TasksItem tasksItemObject;
		if(!dataNodeTasksTasksItem["CreatedAt"].isNull())
			tasksItemObject.createdAt = dataNodeTasksTasksItem["CreatedAt"].asString();
		if(!dataNodeTasksTasksItem["Id"].isNull())
			tasksItemObject.id = dataNodeTasksTasksItem["Id"].asString();
		if(!dataNodeTasksTasksItem["Status"].isNull())
			tasksItemObject.status = dataNodeTasksTasksItem["Status"].asString();
		if(!dataNodeTasksTasksItem["VideoMetaUrl"].isNull())
			tasksItemObject.videoMetaUrl = dataNodeTasksTasksItem["VideoMetaUrl"].asString();
		if(!dataNodeTasksTasksItem["VideoUrl"].isNull())
			tasksItemObject.videoUrl = dataNodeTasksTasksItem["VideoUrl"].asString();
		data_.tasks.push_back(tasksItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetDetectionResult::getMessage()const
{
	return message_;
}

GetDetectionResult::Data GetDetectionResult::getData()const
{
	return data_;
}

std::string GetDetectionResult::getCode()const
{
	return code_;
}

