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

#include <alibabacloud/outboundbot/model/ListScriptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListScriptsResult::ListScriptsResult() :
	ServiceResult()
{}

ListScriptsResult::ListScriptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScriptsResult::~ListScriptsResult()
{}

void ListScriptsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scriptsNode = value["Scripts"];
	if(!scriptsNode["PageNumber"].isNull())
		scripts_.pageNumber = std::stoi(scriptsNode["PageNumber"].asString());
	if(!scriptsNode["PageSize"].isNull())
		scripts_.pageSize = std::stoi(scriptsNode["PageSize"].asString());
	if(!scriptsNode["TotalCount"].isNull())
		scripts_.totalCount = std::stoi(scriptsNode["TotalCount"].asString());
	auto allListNode = scriptsNode["List"]["Script"];
	for (auto scriptsNodeListScript : allListNode)
	{
		Scripts::Script scriptObject;
		if(!scriptsNodeListScript["Status"].isNull())
			scriptObject.status = scriptsNodeListScript["Status"].asString();
		if(!scriptsNodeListScript["UpdateTime"].isNull())
			scriptObject.updateTime = std::stol(scriptsNodeListScript["UpdateTime"].asString());
		if(!scriptsNodeListScript["ScriptId"].isNull())
			scriptObject.scriptId = scriptsNodeListScript["ScriptId"].asString();
		if(!scriptsNodeListScript["IsDebugDrafted"].isNull())
			scriptObject.isDebugDrafted = scriptsNodeListScript["IsDebugDrafted"].asString() == "true";
		if(!scriptsNodeListScript["Industry"].isNull())
			scriptObject.industry = scriptsNodeListScript["Industry"].asString();
		if(!scriptsNodeListScript["ScriptDescription"].isNull())
			scriptObject.scriptDescription = scriptsNodeListScript["ScriptDescription"].asString();
		if(!scriptsNodeListScript["IsDrafted"].isNull())
			scriptObject.isDrafted = scriptsNodeListScript["IsDrafted"].asString() == "true";
		if(!scriptsNodeListScript["DebugStatus"].isNull())
			scriptObject.debugStatus = scriptsNodeListScript["DebugStatus"].asString();
		if(!scriptsNodeListScript["MiniPlaybackEnable"].isNull())
			scriptObject.miniPlaybackEnable = scriptsNodeListScript["MiniPlaybackEnable"].asString() == "true";
		if(!scriptsNodeListScript["RejectReason"].isNull())
			scriptObject.rejectReason = scriptsNodeListScript["RejectReason"].asString();
		if(!scriptsNodeListScript["FailReason"].isNull())
			scriptObject.failReason = scriptsNodeListScript["FailReason"].asString();
		if(!scriptsNodeListScript["Scene"].isNull())
			scriptObject.scene = scriptsNodeListScript["Scene"].asString();
		if(!scriptsNodeListScript["ScriptName"].isNull())
			scriptObject.scriptName = scriptsNodeListScript["ScriptName"].asString();
		if(!scriptsNodeListScript["NewBargeInEnable"].isNull())
			scriptObject.newBargeInEnable = scriptsNodeListScript["NewBargeInEnable"].asString() == "true";
		if(!scriptsNodeListScript["LongWaitEnable"].isNull())
			scriptObject.longWaitEnable = scriptsNodeListScript["LongWaitEnable"].asString() == "true";
		if(!scriptsNodeListScript["EmotionEnable"].isNull())
			scriptObject.emotionEnable = scriptsNodeListScript["EmotionEnable"].asString() == "true";
		if(!scriptsNodeListScript["IsPreset"].isNull())
			scriptObject.isPreset = scriptsNodeListScript["IsPreset"].asString() == "true";
		scripts_.list.push_back(scriptObject);
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

ListScriptsResult::Scripts ListScriptsResult::getScripts()const
{
	return scripts_;
}

std::string ListScriptsResult::getMessage()const
{
	return message_;
}

int ListScriptsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListScriptsResult::getCode()const
{
	return code_;
}

bool ListScriptsResult::getSuccess()const
{
	return success_;
}

