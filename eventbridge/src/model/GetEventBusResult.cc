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

#include <alibabacloud/eventbridge/model/GetEventBusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

GetEventBusResult::GetEventBusResult() :
	ServiceResult()
{}

GetEventBusResult::GetEventBusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEventBusResult::~GetEventBusResult()
{}

void GetEventBusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EventBusARN"].isNull())
		data_.eventBusARN = dataNode["EventBusARN"].asString();
	if(!dataNode["EventBusName"].isNull())
		data_.eventBusName = dataNode["EventBusName"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["CreateTimestamp"].isNull())
		data_.createTimestamp = std::stol(dataNode["CreateTimestamp"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetEventBusResult::getMessage()const
{
	return message_;
}

GetEventBusResult::Data GetEventBusResult::getData()const
{
	return data_;
}

std::string GetEventBusResult::getCode()const
{
	return code_;
}

bool GetEventBusResult::getSuccess()const
{
	return success_;
}

