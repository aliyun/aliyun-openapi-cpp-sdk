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

#include <alibabacloud/ecs-workbench/model/ViewInstanceRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs_workbench;
using namespace AlibabaCloud::Ecs_workbench::Model;

ViewInstanceRecordsResult::ViewInstanceRecordsResult() :
	ServiceResult()
{}

ViewInstanceRecordsResult::ViewInstanceRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ViewInstanceRecordsResult::~ViewInstanceRecordsResult()
{}

void ViewInstanceRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Root"].isNull())
		root_ = value["Root"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

bool ViewInstanceRecordsResult::getRoot()const
{
	return root_;
}

std::string ViewInstanceRecordsResult::getMessage()const
{
	return message_;
}

std::string ViewInstanceRecordsResult::getCode()const
{
	return code_;
}

bool ViewInstanceRecordsResult::getSuccess()const
{
	return success_;
}

