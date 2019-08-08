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

#include <alibabacloud/chatbot/model/QueryIntentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryIntentsResult::QueryIntentsResult() :
	ServiceResult()
{}

QueryIntentsResult::QueryIntentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIntentsResult::~QueryIntentsResult()
{}

void QueryIntentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allIntents = value["Intents"]["Intent"];
	for (auto value : allIntents)
	{
		Intent intentsObject;
		if(!value["IntentId"].isNull())
			intentsObject.intentId = std::stol(value["IntentId"].asString());
		if(!value["Name"].isNull())
			intentsObject.name = value["Name"].asString();
		if(!value["CreateTime"].isNull())
			intentsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			intentsObject.modifyTime = value["ModifyTime"].asString();
		if(!value["CreateUserId"].isNull())
			intentsObject.createUserId = value["CreateUserId"].asString();
		if(!value["CreateUserName"].isNull())
			intentsObject.createUserName = value["CreateUserName"].asString();
		if(!value["ModifyUserId"].isNull())
			intentsObject.modifyUserId = value["ModifyUserId"].asString();
		if(!value["ModifyUserName"].isNull())
			intentsObject.modifyUserName = value["ModifyUserName"].asString();
		auto allUserSay = value["UserSay"]["UserSayItem"];
		for (auto value : allUserSay)
		{
			Intent::UserSayItem userSayObject;
			if(!value["Strict"].isNull())
				userSayObject.strict = value["Strict"].asString() == "true";
			auto allData = value["Data"]["DataItem"];
			for (auto value : allData)
			{
				Intent::UserSayItem::DataItem dataObject;
				if(!value["Text"].isNull())
					dataObject.text = value["Text"].asString();
				if(!value["SlotId"].isNull())
					dataObject.slotId = value["SlotId"].asString();
				userSayObject.data.push_back(dataObject);
			}
			intentsObject.userSay.push_back(userSayObject);
		}
		auto allRuleCheck = value["RuleCheck"]["RuleCheckItem"];
		for (auto value : allRuleCheck)
		{
			Intent::RuleCheckItem ruleCheckObject;
			if(!value["Text"].isNull())
				ruleCheckObject.text = value["Text"].asString();
			if(!value["Strict"].isNull())
				ruleCheckObject.strict = value["Strict"].asString() == "true";
			auto allWarning = value["Warning"]["Warning"];
			for (auto value : allWarning)
				ruleCheckObject.warning.push_back(value.asString());
			auto allError = value["Error"]["Error"];
			for (auto value : allError)
				ruleCheckObject.error.push_back(value.asString());
			intentsObject.ruleCheck.push_back(ruleCheckObject);
		}
		auto allSlot = value["Slot"]["SlotItem"];
		for (auto value : allSlot)
		{
			Intent::SlotItem slotObject;
			if(!value["Name"].isNull())
				slotObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				slotObject.value = value["Value"].asString();
			if(!value["IsNecessary"].isNull())
				slotObject.isNecessary = value["IsNecessary"].asString() == "true";
			if(!value["IsArray"].isNull())
				slotObject.isArray = value["IsArray"].asString() == "true";
			if(!value["LifeSpan"].isNull())
				slotObject.lifeSpan = std::stoi(value["LifeSpan"].asString());
			auto allTags = value["Tags"]["TagsItem"];
			for (auto value : allTags)
			{
				Intent::SlotItem::TagsItem tagsObject;
				if(!value["Value"].isNull())
					tagsObject.value = value["Value"].asString();
				if(!value["UserSayId"].isNull())
					tagsObject.userSayId = value["UserSayId"].asString();
				slotObject.tags.push_back(tagsObject);
			}
			auto allQuestion = value["Question"]["Question"];
			for (auto value : allQuestion)
				slotObject.question.push_back(value.asString());
			intentsObject.slot.push_back(slotObject);
		}
		intents_.push_back(intentsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryIntentsResult::getTotalCount()const
{
	return totalCount_;
}

int QueryIntentsResult::getPageSize()const
{
	return pageSize_;
}

int QueryIntentsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryIntentsResult::Intent> QueryIntentsResult::getIntents()const
{
	return intents_;
}

