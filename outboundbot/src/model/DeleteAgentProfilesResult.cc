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

#include <alibabacloud/outboundbot/model/DeleteAgentProfilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DeleteAgentProfilesResult::DeleteAgentProfilesResult() :
	ServiceResult()
{}

DeleteAgentProfilesResult::DeleteAgentProfilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAgentProfilesResult::~DeleteAgentProfilesResult()
{}

void DeleteAgentProfilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string DeleteAgentProfilesResult::getMessage()const
{
	return message_;
}

int DeleteAgentProfilesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DeleteAgentProfilesResult::getData()const
{
	return data_;
}

std::string DeleteAgentProfilesResult::getCode()const
{
	return code_;
}

bool DeleteAgentProfilesResult::getSuccess()const
{
	return success_;
}

