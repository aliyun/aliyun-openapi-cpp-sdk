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

#include <alibabacloud/outboundbot/model/ListIntentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListIntentsResult::ListIntentsResult() :
	ServiceResult()
{}

ListIntentsResult::ListIntentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIntentsResult::~ListIntentsResult()
{}

void ListIntentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto intentsNode = value["Intents"];
	if(!intentsNode["PageNumber"].isNull())
		intents_.pageNumber = std::stoi(intentsNode["PageNumber"].asString());
	if(!intentsNode["PageSize"].isNull())
		intents_.pageSize = std::stoi(intentsNode["PageSize"].asString());
	if(!intentsNode["TotalCount"].isNull())
		intents_.totalCount = std::stoi(intentsNode["TotalCount"].asString());
	auto allListNode = intentsNode["List"]["Intent"];
	for (auto intentsNodeListIntent : allListNode)
	{
		Intents::Intent intentObject;
		if(!intentsNodeListIntent["Utterances"].isNull())
			intentObject.utterances = intentsNodeListIntent["Utterances"].asString();
		if(!intentsNodeListIntent["IntentDescription"].isNull())
			intentObject.intentDescription = intentsNodeListIntent["IntentDescription"].asString();
		if(!intentsNodeListIntent["UpdateTime"].isNull())
			intentObject.updateTime = std::stol(intentsNodeListIntent["UpdateTime"].asString());
		if(!intentsNodeListIntent["CreateTime"].isNull())
			intentObject.createTime = std::stol(intentsNodeListIntent["CreateTime"].asString());
		if(!intentsNodeListIntent["Keywords"].isNull())
			intentObject.keywords = intentsNodeListIntent["Keywords"].asString();
		if(!intentsNodeListIntent["ScriptId"].isNull())
			intentObject.scriptId = intentsNodeListIntent["ScriptId"].asString();
		if(!intentsNodeListIntent["IntentId"].isNull())
			intentObject.intentId = intentsNodeListIntent["IntentId"].asString();
		if(!intentsNodeListIntent["IntentName"].isNull())
			intentObject.intentName = intentsNodeListIntent["IntentName"].asString();
		intents_.list.push_back(intentObject);
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

std::string ListIntentsResult::getMessage()const
{
	return message_;
}

int ListIntentsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListIntentsResult::Intents ListIntentsResult::getIntents()const
{
	return intents_;
}

std::string ListIntentsResult::getCode()const
{
	return code_;
}

bool ListIntentsResult::getSuccess()const
{
	return success_;
}

