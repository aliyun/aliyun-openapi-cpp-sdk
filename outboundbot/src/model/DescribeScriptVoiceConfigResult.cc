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

#include <alibabacloud/outboundbot/model/DescribeScriptVoiceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeScriptVoiceConfigResult::DescribeScriptVoiceConfigResult() :
	ServiceResult()
{}

DescribeScriptVoiceConfigResult::DescribeScriptVoiceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScriptVoiceConfigResult::~DescribeScriptVoiceConfigResult()
{}

void DescribeScriptVoiceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scriptVoiceConfigNode = value["ScriptVoiceConfig"];
	if(!scriptVoiceConfigNode["ScriptVoiceConfigId"].isNull())
		scriptVoiceConfig_.scriptVoiceConfigId = scriptVoiceConfigNode["ScriptVoiceConfigId"].asString();
	if(!scriptVoiceConfigNode["InstanceId"].isNull())
		scriptVoiceConfig_.instanceId = scriptVoiceConfigNode["InstanceId"].asString();
	if(!scriptVoiceConfigNode["ScriptId"].isNull())
		scriptVoiceConfig_.scriptId = scriptVoiceConfigNode["ScriptId"].asString();
	if(!scriptVoiceConfigNode["ScriptContent"].isNull())
		scriptVoiceConfig_.scriptContent = scriptVoiceConfigNode["ScriptContent"].asString();
	if(!scriptVoiceConfigNode["Source"].isNull())
		scriptVoiceConfig_.source = scriptVoiceConfigNode["Source"].asString();
	if(!scriptVoiceConfigNode["Type"].isNull())
		scriptVoiceConfig_.type = scriptVoiceConfigNode["Type"].asString();
	if(!scriptVoiceConfigNode["ScriptWaveformRelation"].isNull())
		scriptVoiceConfig_.scriptWaveformRelation = scriptVoiceConfigNode["ScriptWaveformRelation"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string DescribeScriptVoiceConfigResult::getMessage()const
{
	return message_;
}

int DescribeScriptVoiceConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeScriptVoiceConfigResult::getCode()const
{
	return code_;
}

bool DescribeScriptVoiceConfigResult::getSuccess()const
{
	return success_;
}

DescribeScriptVoiceConfigResult::ScriptVoiceConfig DescribeScriptVoiceConfigResult::getScriptVoiceConfig()const
{
	return scriptVoiceConfig_;
}

