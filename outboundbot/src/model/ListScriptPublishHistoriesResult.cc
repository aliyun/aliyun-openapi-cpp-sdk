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

#include <alibabacloud/outboundbot/model/ListScriptPublishHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListScriptPublishHistoriesResult::ListScriptPublishHistoriesResult() :
	ServiceResult()
{}

ListScriptPublishHistoriesResult::ListScriptPublishHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScriptPublishHistoriesResult::~ListScriptPublishHistoriesResult()
{}

void ListScriptPublishHistoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scriptPublishHistoriesNode = value["ScriptPublishHistories"];
	if(!scriptPublishHistoriesNode["PageNumber"].isNull())
		scriptPublishHistories_.pageNumber = std::stoi(scriptPublishHistoriesNode["PageNumber"].asString());
	if(!scriptPublishHistoriesNode["PageSize"].isNull())
		scriptPublishHistories_.pageSize = std::stoi(scriptPublishHistoriesNode["PageSize"].asString());
	if(!scriptPublishHistoriesNode["TotalCount"].isNull())
		scriptPublishHistories_.totalCount = std::stoi(scriptPublishHistoriesNode["TotalCount"].asString());
	auto allListNode = scriptPublishHistoriesNode["List"]["PublishHistory"];
	for (auto scriptPublishHistoriesNodeListPublishHistory : allListNode)
	{
		ScriptPublishHistories::PublishHistory publishHistoryObject;
		if(!scriptPublishHistoriesNodeListPublishHistory["PublishTime"].isNull())
			publishHistoryObject.publishTime = std::stol(scriptPublishHistoriesNodeListPublishHistory["PublishTime"].asString());
		if(!scriptPublishHistoriesNodeListPublishHistory["InstanceId"].isNull())
			publishHistoryObject.instanceId = scriptPublishHistoriesNodeListPublishHistory["InstanceId"].asString();
		if(!scriptPublishHistoriesNodeListPublishHistory["ScriptId"].isNull())
			publishHistoryObject.scriptId = scriptPublishHistoriesNodeListPublishHistory["ScriptId"].asString();
		if(!scriptPublishHistoriesNodeListPublishHistory["Description"].isNull())
			publishHistoryObject.description = scriptPublishHistoriesNodeListPublishHistory["Description"].asString();
		if(!scriptPublishHistoriesNodeListPublishHistory["ScriptVersion"].isNull())
			publishHistoryObject.scriptVersion = scriptPublishHistoriesNodeListPublishHistory["ScriptVersion"].asString();
		scriptPublishHistories_.list.push_back(publishHistoryObject);
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

std::string ListScriptPublishHistoriesResult::getMessage()const
{
	return message_;
}

ListScriptPublishHistoriesResult::ScriptPublishHistories ListScriptPublishHistoriesResult::getScriptPublishHistories()const
{
	return scriptPublishHistories_;
}

int ListScriptPublishHistoriesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListScriptPublishHistoriesResult::getCode()const
{
	return code_;
}

bool ListScriptPublishHistoriesResult::getSuccess()const
{
	return success_;
}

