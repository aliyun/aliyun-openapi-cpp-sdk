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

#include <alibabacloud/chatbot/model/DescribeIntentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeIntentResult::DescribeIntentResult() :
	ServiceResult()
{}

DescribeIntentResult::DescribeIntentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIntentResult::~DescribeIntentResult()
{}

void DescribeIntentResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allRuleCheck = value["RuleCheck"]["RuleCheckItem"];
	for (auto value : allRuleCheck)
	{
		RuleCheckItem ruleCheckObject;
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
		ruleCheck_.push_back(ruleCheckObject);
	}
	auto allSlot = value["Slot"]["SlotItem"];
	for (auto value : allSlot)
	{
		SlotItem slotObject;
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
		if(!value["SlotId"].isNull())
			slotObject.slotId = value["SlotId"].asString();
		auto allTags = value["Tags"]["TagsItem"];
		for (auto value : allTags)
		{
			SlotItem::TagsItem tagsObject;
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			if(!value["UserSayId"].isNull())
				tagsObject.userSayId = value["UserSayId"].asString();
			slotObject.tags.push_back(tagsObject);
		}
		auto allQuestion = value["Question"]["Question"];
		for (auto value : allQuestion)
			slotObject.question.push_back(value.asString());
		slot_.push_back(slotObject);
	}
	auto allUserSay = value["UserSay"]["UserSayItem"];
	for (auto value : allUserSay)
	{
		UserSayItem userSayObject;
		if(!value["Strict"].isNull())
			userSayObject.strict = value["Strict"].asString() == "true";
		if(!value["UserSayId"].isNull())
			userSayObject.userSayId = value["UserSayId"].asString();
		auto allData = value["Data"]["DataItem"];
		for (auto value : allData)
		{
			UserSayItem::DataItem dataObject;
			if(!value["Text"].isNull())
				dataObject.text = value["Text"].asString();
			if(!value["SlotId"].isNull())
				dataObject.slotId = value["SlotId"].asString();
			userSayObject.data.push_back(dataObject);
		}
		userSay_.push_back(userSayObject);
	}
	if(!value["IntentId"].isNull())
		intentId_ = std::stol(value["IntentId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["DialogId"].isNull())
		dialogId_ = std::stol(value["DialogId"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["CreateUserId"].isNull())
		createUserId_ = value["CreateUserId"].asString();
	if(!value["CreateUserName"].isNull())
		createUserName_ = value["CreateUserName"].asString();
	if(!value["ModifyUserId"].isNull())
		modifyUserId_ = value["ModifyUserId"].asString();
	if(!value["ModifyUserName"].isNull())
		modifyUserName_ = value["ModifyUserName"].asString();

}

std::string DescribeIntentResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribeIntentResult::getCreateTime()const
{
	return createTime_;
}

long DescribeIntentResult::getDialogId()const
{
	return dialogId_;
}

std::string DescribeIntentResult::getCreateUserId()const
{
	return createUserId_;
}

std::string DescribeIntentResult::getCreateUserName()const
{
	return createUserName_;
}

long DescribeIntentResult::getIntentId()const
{
	return intentId_;
}

std::string DescribeIntentResult::getName()const
{
	return name_;
}

std::string DescribeIntentResult::getType()const
{
	return type_;
}

std::vector<DescribeIntentResult::UserSayItem> DescribeIntentResult::getUserSay()const
{
	return userSay_;
}

std::string DescribeIntentResult::getModifyUserId()const
{
	return modifyUserId_;
}

std::string DescribeIntentResult::getModifyUserName()const
{
	return modifyUserName_;
}

std::vector<DescribeIntentResult::SlotItem> DescribeIntentResult::getSlot()const
{
	return slot_;
}

std::vector<DescribeIntentResult::RuleCheckItem> DescribeIntentResult::getRuleCheck()const
{
	return ruleCheck_;
}

