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

#include <alibabacloud/outboundbot/model/ListBeebotIntentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListBeebotIntentResult::ListBeebotIntentResult() :
	ServiceResult()
{}

ListBeebotIntentResult::ListBeebotIntentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBeebotIntentResult::~ListBeebotIntentResult()
{}

void ListBeebotIntentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIntentsNode = value["Intents"]["intent"];
	for (auto valueIntentsintent : allIntentsNode)
	{
		Intent intentsObject;
		if(!valueIntentsintent["IntentId"].isNull())
			intentsObject.intentId = std::stol(valueIntentsintent["IntentId"].asString());
		if(!valueIntentsintent["IntentName"].isNull())
			intentsObject.intentName = valueIntentsintent["IntentName"].asString();
		if(!valueIntentsintent["AliasName"].isNull())
			intentsObject.aliasName = valueIntentsintent["AliasName"].asString();
		if(!valueIntentsintent["ModifyUserId"].isNull())
			intentsObject.modifyUserId = valueIntentsintent["ModifyUserId"].asString();
		if(!valueIntentsintent["ModifyUserName"].isNull())
			intentsObject.modifyUserName = valueIntentsintent["ModifyUserName"].asString();
		if(!valueIntentsintent["CreateUserName"].isNull())
			intentsObject.createUserName = valueIntentsintent["CreateUserName"].asString();
		if(!valueIntentsintent["CreateTime"].isNull())
			intentsObject.createTime = valueIntentsintent["CreateTime"].asString();
		if(!valueIntentsintent["CreateUserId"].isNull())
			intentsObject.createUserId = valueIntentsintent["CreateUserId"].asString();
		if(!valueIntentsintent["ModifyTime"].isNull())
			intentsObject.modifyTime = valueIntentsintent["ModifyTime"].asString();
		intents_.push_back(intentsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["BeebotRequestId"].isNull())
		beebotRequestId_ = value["BeebotRequestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::string ListBeebotIntentResult::getBeebotRequestId()const
{
	return beebotRequestId_;
}

int ListBeebotIntentResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListBeebotIntentResult::getMessage()const
{
	return message_;
}

int ListBeebotIntentResult::getPageSize()const
{
	return pageSize_;
}

int ListBeebotIntentResult::getPageNumber()const
{
	return pageNumber_;
}

int ListBeebotIntentResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListBeebotIntentResult::Intent> ListBeebotIntentResult::getIntents()const
{
	return intents_;
}

std::string ListBeebotIntentResult::getCode()const
{
	return code_;
}

bool ListBeebotIntentResult::getSuccess()const
{
	return success_;
}

