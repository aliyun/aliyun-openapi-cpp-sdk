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
	auto allIntentsNode = value["Intents"]["Intent"];
	for (auto valueIntentsIntent : allIntentsNode)
	{
		Intent intentsObject;
		if(!valueIntentsIntent["IntentId"].isNull())
			intentsObject.intentId = std::stol(valueIntentsIntent["IntentId"].asString());
		if(!valueIntentsIntent["Name"].isNull())
			intentsObject.name = valueIntentsIntent["Name"].asString();
		if(!valueIntentsIntent["CreateTime"].isNull())
			intentsObject.createTime = valueIntentsIntent["CreateTime"].asString();
		if(!valueIntentsIntent["ModifyTime"].isNull())
			intentsObject.modifyTime = valueIntentsIntent["ModifyTime"].asString();
		if(!valueIntentsIntent["CreateUserId"].isNull())
			intentsObject.createUserId = valueIntentsIntent["CreateUserId"].asString();
		if(!valueIntentsIntent["CreateUserName"].isNull())
			intentsObject.createUserName = valueIntentsIntent["CreateUserName"].asString();
		if(!valueIntentsIntent["ModifyUserId"].isNull())
			intentsObject.modifyUserId = valueIntentsIntent["ModifyUserId"].asString();
		if(!valueIntentsIntent["ModifyUserName"].isNull())
			intentsObject.modifyUserName = valueIntentsIntent["ModifyUserName"].asString();
		auto allUserSayNode = allIntentsNode["UserSay"]["UserSayItem"];
		for (auto allIntentsNodeUserSayUserSayItem : allUserSayNode)
		{
			Intent::UserSayItem userSayObject;
			if(!allIntentsNodeUserSayUserSayItem["Strict"].isNull())
				userSayObject.strict = allIntentsNodeUserSayUserSayItem["Strict"].asString() == "true";
			if(!allIntentsNodeUserSayUserSayItem["UserSayId"].isNull())
				userSayObject.userSayId = allIntentsNodeUserSayUserSayItem["UserSayId"].asString();
			auto allDataNode = allUserSayNode["Data"]["DataItem"];
			for (auto allUserSayNodeDataDataItem : allDataNode)
			{
				Intent::UserSayItem::DataItem dataObject;
				if(!allUserSayNodeDataDataItem["Text"].isNull())
					dataObject.text = allUserSayNodeDataDataItem["Text"].asString();
				if(!allUserSayNodeDataDataItem["SlotId"].isNull())
					dataObject.slotId = allUserSayNodeDataDataItem["SlotId"].asString();
				userSayObject.data.push_back(dataObject);
			}
			intentsObject.userSay.push_back(userSayObject);
		}
		auto allRuleCheckNode = allIntentsNode["RuleCheck"]["RuleCheckItem"];
		for (auto allIntentsNodeRuleCheckRuleCheckItem : allRuleCheckNode)
		{
			Intent::RuleCheckItem ruleCheckObject;
			if(!allIntentsNodeRuleCheckRuleCheckItem["Text"].isNull())
				ruleCheckObject.text = allIntentsNodeRuleCheckRuleCheckItem["Text"].asString();
			if(!allIntentsNodeRuleCheckRuleCheckItem["Strict"].isNull())
				ruleCheckObject.strict = allIntentsNodeRuleCheckRuleCheckItem["Strict"].asString() == "true";
			auto allWarning = value["Warning"]["Warning"];
			for (auto value : allWarning)
				ruleCheckObject.warning.push_back(value.asString());
			auto allError = value["Error"]["Error"];
			for (auto value : allError)
				ruleCheckObject.error.push_back(value.asString());
			intentsObject.ruleCheck.push_back(ruleCheckObject);
		}
		auto allSlotNode = allIntentsNode["Slot"]["SlotItem"];
		for (auto allIntentsNodeSlotSlotItem : allSlotNode)
		{
			Intent::SlotItem slotObject;
			if(!allIntentsNodeSlotSlotItem["Name"].isNull())
				slotObject.name = allIntentsNodeSlotSlotItem["Name"].asString();
			if(!allIntentsNodeSlotSlotItem["Value"].isNull())
				slotObject.value = allIntentsNodeSlotSlotItem["Value"].asString();
			if(!allIntentsNodeSlotSlotItem["IsNecessary"].isNull())
				slotObject.isNecessary = allIntentsNodeSlotSlotItem["IsNecessary"].asString() == "true";
			if(!allIntentsNodeSlotSlotItem["IsArray"].isNull())
				slotObject.isArray = allIntentsNodeSlotSlotItem["IsArray"].asString() == "true";
			if(!allIntentsNodeSlotSlotItem["LifeSpan"].isNull())
				slotObject.lifeSpan = std::stoi(allIntentsNodeSlotSlotItem["LifeSpan"].asString());
			if(!allIntentsNodeSlotSlotItem["SlotId"].isNull())
				slotObject.slotId = allIntentsNodeSlotSlotItem["SlotId"].asString();
			auto allTagsNode = allSlotNode["Tags"]["TagsItem"];
			for (auto allSlotNodeTagsTagsItem : allTagsNode)
			{
				Intent::SlotItem::TagsItem tagsObject;
				if(!allSlotNodeTagsTagsItem["Value"].isNull())
					tagsObject.value = allSlotNodeTagsTagsItem["Value"].asString();
				if(!allSlotNodeTagsTagsItem["UserSayId"].isNull())
					tagsObject.userSayId = allSlotNodeTagsTagsItem["UserSayId"].asString();
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

