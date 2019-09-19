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

#include <alibabacloud/ccc/model/ListSkillGroupsOfUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSkillGroupsOfUserResult::ListSkillGroupsOfUserResult() :
	ServiceResult()
{}

ListSkillGroupsOfUserResult::ListSkillGroupsOfUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupsOfUserResult::~ListSkillGroupsOfUserResult()
{}

void ListSkillGroupsOfUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSkillLevelsNode = value["SkillLevels"]["SkillLevel"];
	for (auto valueSkillLevelsSkillLevel : allSkillLevelsNode)
	{
		SkillLevel skillLevelsObject;
		if(!valueSkillLevelsSkillLevel["SkillLevelId"].isNull())
			skillLevelsObject.skillLevelId = valueSkillLevelsSkillLevel["SkillLevelId"].asString();
		if(!valueSkillLevelsSkillLevel["Level"].isNull())
			skillLevelsObject.level = std::stoi(valueSkillLevelsSkillLevel["Level"].asString());
		auto skillNode = value["Skill"];
		if(!skillNode["SkillGroupId"].isNull())
			skillLevelsObject.skill.skillGroupId = skillNode["SkillGroupId"].asString();
		if(!skillNode["InstanceId"].isNull())
			skillLevelsObject.skill.instanceId = skillNode["InstanceId"].asString();
		if(!skillNode["SkillGroupName"].isNull())
			skillLevelsObject.skill.skillGroupName = skillNode["SkillGroupName"].asString();
		if(!skillNode["SkillGroupDescription"].isNull())
			skillLevelsObject.skill.skillGroupDescription = skillNode["SkillGroupDescription"].asString();
		if(!skillNode["RoutingStrategy"].isNull())
			skillLevelsObject.skill.routingStrategy = skillNode["RoutingStrategy"].asString();
		auto allOutboundPhoneNumbersNode = skillNode["OutboundPhoneNumbers"]["PhoneNumber"];
		for (auto skillNodeOutboundPhoneNumbersPhoneNumber : allOutboundPhoneNumbersNode)
		{
			SkillLevel::Skill::PhoneNumber phoneNumberObject;
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
				phoneNumberObject.phoneNumberId = skillNodeOutboundPhoneNumbersPhoneNumber["PhoneNumberId"].asString();
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["InstanceId"].isNull())
				phoneNumberObject.instanceId = skillNodeOutboundPhoneNumbersPhoneNumber["InstanceId"].asString();
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["Number"].isNull())
				phoneNumberObject.number = skillNodeOutboundPhoneNumbersPhoneNumber["Number"].asString();
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
				phoneNumberObject.phoneNumberDescription = skillNodeOutboundPhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["TestOnly"].isNull())
				phoneNumberObject.testOnly = skillNodeOutboundPhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["RemainingTime"].isNull())
				phoneNumberObject.remainingTime = std::stoi(skillNodeOutboundPhoneNumbersPhoneNumber["RemainingTime"].asString());
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["AllowOutbound"].isNull())
				phoneNumberObject.allowOutbound = skillNodeOutboundPhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["Usage"].isNull())
				phoneNumberObject.usage = skillNodeOutboundPhoneNumbersPhoneNumber["Usage"].asString();
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["Trunks"].isNull())
				phoneNumberObject.trunks = std::stoi(skillNodeOutboundPhoneNumbersPhoneNumber["Trunks"].asString());
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["Province"].isNull())
				phoneNumberObject.province = skillNodeOutboundPhoneNumbersPhoneNumber["Province"].asString();
			if(!skillNodeOutboundPhoneNumbersPhoneNumber["City"].isNull())
				phoneNumberObject.city = skillNodeOutboundPhoneNumbersPhoneNumber["City"].asString();
			skillLevelsObject.skill.outboundPhoneNumbers.push_back(phoneNumberObject);
		}
		skillLevels_.push_back(skillLevelsObject);
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

std::vector<ListSkillGroupsOfUserResult::SkillLevel> ListSkillGroupsOfUserResult::getSkillLevels()const
{
	return skillLevels_;
}

std::string ListSkillGroupsOfUserResult::getMessage()const
{
	return message_;
}

int ListSkillGroupsOfUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListSkillGroupsOfUserResult::getCode()const
{
	return code_;
}

bool ListSkillGroupsOfUserResult::getSuccess()const
{
	return success_;
}

