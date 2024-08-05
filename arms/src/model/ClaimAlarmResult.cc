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

#include <alibabacloud/arms/model/ClaimAlarmResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ClaimAlarmResult::ClaimAlarmResult() :
	ServiceResult()
{}

ClaimAlarmResult::ClaimAlarmResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ClaimAlarmResult::~ClaimAlarmResult()
{}

void ClaimAlarmResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Result"].isNull())
		result_ = value["Result"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ClaimAlarmResult::getMessage()const
{
	return message_;
}

long ClaimAlarmResult::getCode()const
{
	return code_;
}

bool ClaimAlarmResult::getSuccess()const
{
	return success_;
}

bool ClaimAlarmResult::getResult()const
{
	return result_;
}

