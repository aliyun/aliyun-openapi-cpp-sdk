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

#include <alibabacloud/cams/model/GetConversationalAutomationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

GetConversationalAutomationResult::GetConversationalAutomationResult() :
	ServiceResult()
{}

GetConversationalAutomationResult::GetConversationalAutomationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConversationalAutomationResult::~GetConversationalAutomationResult()
{}

void GetConversationalAutomationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PhoneNumber"].isNull())
		data_.phoneNumber = dataNode["PhoneNumber"].asString();
	if(!dataNode["EnableWelcomeMessage"].isNull())
		data_.enableWelcomeMessage = dataNode["EnableWelcomeMessage"].asString() == "true";
	auto allCommandsNode = dataNode["Commands"]["commandsItem"];
	for (auto dataNodeCommandscommandsItem : allCommandsNode)
	{
		Data::CommandsItem commandsItemObject;
		if(!dataNodeCommandscommandsItem["CommandDescription"].isNull())
			commandsItemObject.commandDescription = dataNodeCommandscommandsItem["CommandDescription"].asString();
		if(!dataNodeCommandscommandsItem["CommandName"].isNull())
			commandsItemObject.commandName = dataNodeCommandscommandsItem["CommandName"].asString();
		data_.commands.push_back(commandsItemObject);
	}
		auto allPrompts = dataNode["Prompts"]["prompts"];
		for (auto value : allPrompts)
			data_.prompts.push_back(value.asString());
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetConversationalAutomationResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string GetConversationalAutomationResult::getMessage()const
{
	return message_;
}

GetConversationalAutomationResult::Data GetConversationalAutomationResult::getData()const
{
	return data_;
}

std::string GetConversationalAutomationResult::getCode()const
{
	return code_;
}

bool GetConversationalAutomationResult::getSuccess()const
{
	return success_;
}

