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

#include <alibabacloud/ecs-workbench/model/GetInstanceRecordConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs_workbench;
using namespace AlibabaCloud::Ecs_workbench::Model;

GetInstanceRecordConfigResult::GetInstanceRecordConfigResult() :
	ServiceResult()
{}

GetInstanceRecordConfigResult::GetInstanceRecordConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceRecordConfigResult::~GetInstanceRecordConfigResult()
{}

void GetInstanceRecordConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto rootNode = value["Root"];
	if(!rootNode["InstanceId"].isNull())
		root_.instanceId = rootNode["InstanceId"].asString();
	if(!rootNode["ParentId"].isNull())
		root_.parentId = rootNode["ParentId"].asString();
	if(!rootNode["RecordStorageTarget"].isNull())
		root_.recordStorageTarget = rootNode["RecordStorageTarget"].asString();
	if(!rootNode["ExpirationDays"].isNull())
		root_.expirationDays = std::stoi(rootNode["ExpirationDays"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

GetInstanceRecordConfigResult::Root GetInstanceRecordConfigResult::getRoot()const
{
	return root_;
}

std::string GetInstanceRecordConfigResult::getMessage()const
{
	return message_;
}

std::string GetInstanceRecordConfigResult::getCode()const
{
	return code_;
}

bool GetInstanceRecordConfigResult::getSuccess()const
{
	return success_;
}

