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

#include <alibabacloud/outboundbot/model/GetEffectiveDaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetEffectiveDaysResult::GetEffectiveDaysResult() :
	ServiceResult()
{}

GetEffectiveDaysResult::GetEffectiveDaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEffectiveDaysResult::~GetEffectiveDaysResult()
{}

void GetEffectiveDaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["EffectiveDays"].isNull())
		effectiveDays_ = std::stoi(value["EffectiveDays"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

int GetEffectiveDaysResult::getEffectiveDays()const
{
	return effectiveDays_;
}

std::string GetEffectiveDaysResult::getMessage()const
{
	return message_;
}

int GetEffectiveDaysResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetEffectiveDaysResult::getCode()const
{
	return code_;
}

bool GetEffectiveDaysResult::getSuccess()const
{
	return success_;
}

