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

#include <alibabacloud/outboundbot/model/CreateScriptResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateScriptResult::CreateScriptResult() :
	ServiceResult()
{}

CreateScriptResult::CreateScriptResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateScriptResult::~CreateScriptResult()
{}

void CreateScriptResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scriptNode = value["Script"];
	if(!scriptNode["Status"].isNull())
		script_.status = scriptNode["Status"].asString();
	if(!scriptNode["UpdateTime"].isNull())
		script_.updateTime = std::stol(scriptNode["UpdateTime"].asString());
	if(!scriptNode["Industry"].isNull())
		script_.industry = scriptNode["Industry"].asString();
	if(!scriptNode["ScriptDescription"].isNull())
		script_.scriptDescription = scriptNode["ScriptDescription"].asString();
	if(!scriptNode["IsDrafted"].isNull())
		script_.isDrafted = scriptNode["IsDrafted"].asString() == "true";
	if(!scriptNode["DebugStatus"].isNull())
		script_.debugStatus = scriptNode["DebugStatus"].asString();
	if(!scriptNode["ScriptId"].isNull())
		script_.scriptId = scriptNode["ScriptId"].asString();
	if(!scriptNode["IsDebugDrafted"].isNull())
		script_.isDebugDrafted = scriptNode["IsDebugDrafted"].asString() == "true";
	if(!scriptNode["ScriptName"].isNull())
		script_.scriptName = scriptNode["ScriptName"].asString();
	if(!scriptNode["Scene"].isNull())
		script_.scene = scriptNode["Scene"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ChatbotId"].isNull())
		chatbotId_ = value["ChatbotId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

CreateScriptResult::Script CreateScriptResult::getScript()const
{
	return script_;
}

std::string CreateScriptResult::getChatbotId()const
{
	return chatbotId_;
}

std::string CreateScriptResult::getMessage()const
{
	return message_;
}

int CreateScriptResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateScriptResult::getCode()const
{
	return code_;
}

bool CreateScriptResult::getSuccess()const
{
	return success_;
}

