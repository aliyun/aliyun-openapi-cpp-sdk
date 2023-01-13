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

#include <alibabacloud/outboundbot/model/DescribeScriptResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeScriptResult::DescribeScriptResult() :
	ServiceResult()
{}

DescribeScriptResult::DescribeScriptResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScriptResult::~DescribeScriptResult()
{}

void DescribeScriptResult::parse(const std::string &payload)
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
	if(!scriptNode["ChatbotId"].isNull())
		script_.chatbotId = scriptNode["ChatbotId"].asString();
	if(!scriptNode["ScriptId"].isNull())
		script_.scriptId = scriptNode["ScriptId"].asString();
	if(!scriptNode["IsDebugDrafted"].isNull())
		script_.isDebugDrafted = scriptNode["IsDebugDrafted"].asString() == "true";
	if(!scriptNode["Industry"].isNull())
		script_.industry = scriptNode["Industry"].asString();
	if(!scriptNode["ScriptDescription"].isNull())
		script_.scriptDescription = scriptNode["ScriptDescription"].asString();
	if(!scriptNode["MiniPlaybackEnable"].isNull())
		script_.miniPlaybackEnable = scriptNode["MiniPlaybackEnable"].asString() == "true";
	if(!scriptNode["IsDrafted"].isNull())
		script_.isDrafted = scriptNode["IsDrafted"].asString() == "true";
	if(!scriptNode["TtsConfig"].isNull())
		script_.ttsConfig = scriptNode["TtsConfig"].asString();
	if(!scriptNode["DebugStatus"].isNull())
		script_.debugStatus = scriptNode["DebugStatus"].asString();
	if(!scriptNode["AsrConfig"].isNull())
		script_.asrConfig = scriptNode["AsrConfig"].asString();
	if(!scriptNode["Scene"].isNull())
		script_.scene = scriptNode["Scene"].asString();
	if(!scriptNode["ScriptName"].isNull())
		script_.scriptName = scriptNode["ScriptName"].asString();
	if(!scriptNode["NewBargeInEnable"].isNull())
		script_.newBargeInEnable = scriptNode["NewBargeInEnable"].asString() == "true";
	if(!scriptNode["LongWaitEnable"].isNull())
		script_.longWaitEnable = scriptNode["LongWaitEnable"].asString() == "true";
	if(!scriptNode["EmotionEnable"].isNull())
		script_.emotionEnable = scriptNode["EmotionEnable"].asString() == "true";
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
	if(!value["TtsConfig"].isNull())
		ttsConfig_ = value["TtsConfig"].asString();
	if(!value["AsrConfig"].isNull())
		asrConfig_ = value["AsrConfig"].asString();
	if(!value["NlsConfig"].isNull())
		nlsConfig_ = value["NlsConfig"].asString();

}

std::string DescribeScriptResult::getAsrConfig()const
{
	return asrConfig_;
}

DescribeScriptResult::Script DescribeScriptResult::getScript()const
{
	return script_;
}

std::string DescribeScriptResult::getChatbotId()const
{
	return chatbotId_;
}

std::string DescribeScriptResult::getMessage()const
{
	return message_;
}

int DescribeScriptResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeScriptResult::getTtsConfig()const
{
	return ttsConfig_;
}

std::string DescribeScriptResult::getCode()const
{
	return code_;
}

bool DescribeScriptResult::getSuccess()const
{
	return success_;
}

std::string DescribeScriptResult::getNlsConfig()const
{
	return nlsConfig_;
}

