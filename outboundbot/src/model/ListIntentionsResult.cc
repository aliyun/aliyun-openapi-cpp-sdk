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

#include <alibabacloud/outboundbot/model/ListIntentionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListIntentionsResult::ListIntentionsResult() :
	ServiceResult()
{}

ListIntentionsResult::ListIntentionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIntentionsResult::~ListIntentionsResult()
{}

void ListIntentionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!dataNode["BotId"].isNull())
		data_.botId = dataNode["BotId"].asString();
	auto allIntentListNode = dataNode["IntentList"]["IntentListItem"];
	for (auto dataNodeIntentListIntentListItem : allIntentListNode)
	{
		Data::IntentListItem intentListItemObject;
		if(!dataNodeIntentListIntentListItem["BotId"].isNull())
			intentListItemObject.botId = std::stol(dataNodeIntentListIntentListItem["BotId"].asString());
		if(!dataNodeIntentListIntentListItem["DialogId"].isNull())
			intentListItemObject.dialogId = dataNodeIntentListIntentListItem["DialogId"].asString();
		if(!dataNodeIntentListIntentListItem["Name"].isNull())
			intentListItemObject.name = dataNodeIntentListIntentListItem["Name"].asString();
		if(!dataNodeIntentListIntentListItem["Id"].isNull())
			intentListItemObject.id = std::stol(dataNodeIntentListIntentListItem["Id"].asString());
		if(!dataNodeIntentListIntentListItem["BotName"].isNull())
			intentListItemObject.botName = dataNodeIntentListIntentListItem["BotName"].asString();
		if(!dataNodeIntentListIntentListItem["Language"].isNull())
			intentListItemObject.language = dataNodeIntentListIntentListItem["Language"].asString();
		if(!dataNodeIntentListIntentListItem["Type"].isNull())
			intentListItemObject.type = std::stoi(dataNodeIntentListIntentListItem["Type"].asString());
		if(!dataNodeIntentListIntentListItem["TableId"].isNull())
			intentListItemObject.tableId = std::stol(dataNodeIntentListIntentListItem["TableId"].asString());
		auto allUserSayNode = dataNodeIntentListIntentListItem["UserSay"]["UserSayItem"];
		for (auto dataNodeIntentListIntentListItemUserSayUserSayItem : allUserSayNode)
		{
			Data::IntentListItem::UserSayItem userSayObject;
			if(!dataNodeIntentListIntentListItemUserSayUserSayItem["Id"].isNull())
				userSayObject.id = dataNodeIntentListIntentListItemUserSayUserSayItem["Id"].asString();
			if(!dataNodeIntentListIntentListItemUserSayUserSayItem["FromId"].isNull())
				userSayObject.fromId = dataNodeIntentListIntentListItemUserSayUserSayItem["FromId"].asString();
			if(!dataNodeIntentListIntentListItemUserSayUserSayItem["Strict"].isNull())
				userSayObject.strict = dataNodeIntentListIntentListItemUserSayUserSayItem["Strict"].asString() == "true";
			auto allUserSayDataNode = dataNodeIntentListIntentListItemUserSayUserSayItem["UserSayData"]["Data"];
			for (auto dataNodeIntentListIntentListItemUserSayUserSayItemUserSayDataData : allUserSayDataNode)
			{
				Data::IntentListItem::UserSayItem::Data1 userSayDataObject;
				if(!dataNodeIntentListIntentListItemUserSayUserSayItemUserSayDataData["SlotId"].isNull())
					userSayDataObject.slotId = dataNodeIntentListIntentListItemUserSayUserSayItemUserSayDataData["SlotId"].asString();
				if(!dataNodeIntentListIntentListItemUserSayUserSayItemUserSayDataData["Text"].isNull())
					userSayDataObject.text = dataNodeIntentListIntentListItemUserSayUserSayItemUserSayDataData["Text"].asString();
				userSayObject.userSayData.push_back(userSayDataObject);
			}
			intentListItemObject.userSay.push_back(userSayObject);
		}
		auto allRuleCheckNode = dataNodeIntentListIntentListItem["RuleCheck"]["RuleCheckItem"];
		for (auto dataNodeIntentListIntentListItemRuleCheckRuleCheckItem : allRuleCheckNode)
		{
			Data::IntentListItem::RuleCheckItem ruleCheckObject;
			if(!dataNodeIntentListIntentListItemRuleCheckRuleCheckItem["Strict"].isNull())
				ruleCheckObject.strict = dataNodeIntentListIntentListItemRuleCheckRuleCheckItem["Strict"].asString() == "true";
			if(!dataNodeIntentListIntentListItemRuleCheckRuleCheckItem["Text"].isNull())
				ruleCheckObject.text = dataNodeIntentListIntentListItemRuleCheckRuleCheckItem["Text"].asString();
			auto allWarning = value["Warning"]["Warning"];
			for (auto value : allWarning)
				ruleCheckObject.warning.push_back(value.asString());
			auto allError = value["Error"]["Error"];
			for (auto value : allError)
				ruleCheckObject.error.push_back(value.asString());
			intentListItemObject.ruleCheck.push_back(ruleCheckObject);
		}
		auto allSlotNode = dataNodeIntentListIntentListItem["Slot"]["SlotItem"];
		for (auto dataNodeIntentListIntentListItemSlotSlotItem : allSlotNode)
		{
			Data::IntentListItem::SlotItem slotObject;
			if(!dataNodeIntentListIntentListItemSlotSlotItem["Id"].isNull())
				slotObject.id = dataNodeIntentListIntentListItemSlotSlotItem["Id"].asString();
			if(!dataNodeIntentListIntentListItemSlotSlotItem["Name"].isNull())
				slotObject.name = dataNodeIntentListIntentListItemSlotSlotItem["Name"].asString();
			if(!dataNodeIntentListIntentListItemSlotSlotItem["IsArray"].isNull())
				slotObject.isArray = dataNodeIntentListIntentListItemSlotSlotItem["IsArray"].asString() == "true";
			if(!dataNodeIntentListIntentListItemSlotSlotItem["IsEncrypt"].isNull())
				slotObject.isEncrypt = dataNodeIntentListIntentListItemSlotSlotItem["IsEncrypt"].asString() == "true";
			if(!dataNodeIntentListIntentListItemSlotSlotItem["IsInteractive"].isNull())
				slotObject.isInteractive = dataNodeIntentListIntentListItemSlotSlotItem["IsInteractive"].asString() == "true";
			if(!dataNodeIntentListIntentListItemSlotSlotItem["Value"].isNull())
				slotObject.value = dataNodeIntentListIntentListItemSlotSlotItem["Value"].asString();
			if(!dataNodeIntentListIntentListItemSlotSlotItem["IsNecessary"].isNull())
				slotObject.isNecessary = dataNodeIntentListIntentListItemSlotSlotItem["IsNecessary"].asString() == "true";
			if(!dataNodeIntentListIntentListItemSlotSlotItem["LifeSpan"].isNull())
				slotObject.lifeSpan = std::stoi(dataNodeIntentListIntentListItemSlotSlotItem["LifeSpan"].asString());
			if(!dataNodeIntentListIntentListItemSlotSlotItem["FeedbackType"].isNull())
				slotObject.feedbackType = dataNodeIntentListIntentListItemSlotSlotItem["FeedbackType"].asString();
			auto allTagsNode = dataNodeIntentListIntentListItemSlotSlotItem["Tags"]["Tag"];
			for (auto dataNodeIntentListIntentListItemSlotSlotItemTagsTag : allTagsNode)
			{
				Data::IntentListItem::SlotItem::Tag tagsObject;
				if(!dataNodeIntentListIntentListItemSlotSlotItemTagsTag["UserSayId"].isNull())
					tagsObject.userSayId = dataNodeIntentListIntentListItemSlotSlotItemTagsTag["UserSayId"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemTagsTag["Value"].isNull())
					tagsObject.value = dataNodeIntentListIntentListItemSlotSlotItemTagsTag["Value"].asString();
				slotObject.tags.push_back(tagsObject);
			}
			auto allFeedbackFunctionsNode = dataNodeIntentListIntentListItemSlotSlotItem["FeedbackFunctions"]["FeedbackFunction"];
			for (auto dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction : allFeedbackFunctionsNode)
			{
				Data::IntentListItem::SlotItem::FeedbackFunction feedbackFunctionsObject;
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Code"].isNull())
					feedbackFunctionsObject.code = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Code"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Description"].isNull())
					feedbackFunctionsObject.description = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Description"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Function"].isNull())
					feedbackFunctionsObject.function = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Function"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Name"].isNull())
					feedbackFunctionsObject.name = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Name"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["AliyunService"].isNull())
					feedbackFunctionsObject.aliyunService = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["AliyunService"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["AliyunFunction"].isNull())
					feedbackFunctionsObject.aliyunFunction = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["AliyunFunction"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["EndPoint"].isNull())
					feedbackFunctionsObject.endPoint = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["EndPoint"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Type"].isNull())
					feedbackFunctionsObject.type = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Type"].asString();
				if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Params"].isNull())
					feedbackFunctionsObject.params = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Params"].asString();
				auto all_SwitchNode = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunction["Switch"]["SwitchItem"];
				for (auto dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem : all_SwitchNode)
				{
					Data::IntentListItem::SlotItem::FeedbackFunction::SwitchItem _switchObject;
					if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Id"].isNull())
						_switchObject.id = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Id"].asString();
					if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Label"].isNull())
						_switchObject.label = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Label"].asString();
					if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Type"].isNull())
						_switchObject.type = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Type"].asString();
					if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Value"].isNull())
						_switchObject.value = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Value"].asString();
					if(!dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Name"].isNull())
						_switchObject.name = dataNodeIntentListIntentListItemSlotSlotItemFeedbackFunctionsFeedbackFunctionSwitchSwitchItem["Name"].asString();
					feedbackFunctionsObject._switch.push_back(_switchObject);
				}
				slotObject.feedbackFunctions.push_back(feedbackFunctionsObject);
			}
			auto allQuestion = value["Question"]["Question"];
			for (auto value : allQuestion)
				slotObject.question.push_back(value.asString());
			intentListItemObject.slot.push_back(slotObject);
		}
		auto allAlias = value["Alias"]["Alia"];
		for (auto value : allAlias)
			intentListItemObject.alias.push_back(value.asString());
		data_.intentList.push_back(intentListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListIntentionsResult::getMessage()const
{
	return message_;
}

int ListIntentionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListIntentionsResult::Data ListIntentionsResult::getData()const
{
	return data_;
}

std::string ListIntentionsResult::getCode()const
{
	return code_;
}

bool ListIntentionsResult::getSuccess()const
{
	return success_;
}

