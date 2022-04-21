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

#include <alibabacloud/outboundbot/model/ListScriptVoiceConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListScriptVoiceConfigsResult::ListScriptVoiceConfigsResult() :
	ServiceResult()
{}

ListScriptVoiceConfigsResult::ListScriptVoiceConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScriptVoiceConfigsResult::~ListScriptVoiceConfigsResult()
{}

void ListScriptVoiceConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scriptVoiceConfigsNode = value["ScriptVoiceConfigs"];
	if(!scriptVoiceConfigsNode["PageNumber"].isNull())
		scriptVoiceConfigs_.pageNumber = std::stoi(scriptVoiceConfigsNode["PageNumber"].asString());
	if(!scriptVoiceConfigsNode["PageSize"].isNull())
		scriptVoiceConfigs_.pageSize = std::stoi(scriptVoiceConfigsNode["PageSize"].asString());
	if(!scriptVoiceConfigsNode["TotalCount"].isNull())
		scriptVoiceConfigs_.totalCount = std::stoi(scriptVoiceConfigsNode["TotalCount"].asString());
	auto allListNode = scriptVoiceConfigsNode["List"]["ScriptVoiceConfig"];
	for (auto scriptVoiceConfigsNodeListScriptVoiceConfig : allListNode)
	{
		ScriptVoiceConfigs::ScriptVoiceConfig scriptVoiceConfigObject;
		if(!scriptVoiceConfigsNodeListScriptVoiceConfig["Type"].isNull())
			scriptVoiceConfigObject.type = scriptVoiceConfigsNodeListScriptVoiceConfig["Type"].asString();
		if(!scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptVoiceConfigId"].isNull())
			scriptVoiceConfigObject.scriptVoiceConfigId = scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptVoiceConfigId"].asString();
		if(!scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptContent"].isNull())
			scriptVoiceConfigObject.scriptContent = scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptContent"].asString();
		if(!scriptVoiceConfigsNodeListScriptVoiceConfig["InstanceId"].isNull())
			scriptVoiceConfigObject.instanceId = scriptVoiceConfigsNodeListScriptVoiceConfig["InstanceId"].asString();
		if(!scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptId"].isNull())
			scriptVoiceConfigObject.scriptId = scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptId"].asString();
		if(!scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptWaveformRelation"].isNull())
			scriptVoiceConfigObject.scriptWaveformRelation = scriptVoiceConfigsNodeListScriptVoiceConfig["ScriptWaveformRelation"].asString();
		if(!scriptVoiceConfigsNodeListScriptVoiceConfig["Source"].isNull())
			scriptVoiceConfigObject.source = scriptVoiceConfigsNodeListScriptVoiceConfig["Source"].asString();
		scriptVoiceConfigs_.list.push_back(scriptVoiceConfigObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListScriptVoiceConfigsResult::getMessage()const
{
	return message_;
}

int ListScriptVoiceConfigsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListScriptVoiceConfigsResult::getCode()const
{
	return code_;
}

bool ListScriptVoiceConfigsResult::getSuccess()const
{
	return success_;
}

ListScriptVoiceConfigsResult::ScriptVoiceConfigs ListScriptVoiceConfigsResult::getScriptVoiceConfigs()const
{
	return scriptVoiceConfigs_;
}

