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

#include <alibabacloud/ccc/model/StartJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

StartJobResult::StartJobResult() :
	ServiceResult()
{}

StartJobResult::StartJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartJobResult::~StartJobResult()
{}

void StartJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskIds = value["TaskIds"]["KeyValuePair"];
	for (auto value : allTaskIds)
	{
		KeyValuePair taskIdsObject;
		if(!value["Key"].isNull())
			taskIdsObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			taskIdsObject.value = value["Value"].asString();
		taskIds_.push_back(taskIdsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::vector<StartJobResult::KeyValuePair> StartJobResult::getTaskIds()const
{
	return taskIds_;
}

std::string StartJobResult::getMessage()const
{
	return message_;
}

int StartJobResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string StartJobResult::getCode()const
{
	return code_;
}

bool StartJobResult::getSuccess()const
{
	return success_;
}

