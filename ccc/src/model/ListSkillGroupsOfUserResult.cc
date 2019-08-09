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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSkillLevels = value["SkillLevels"]["SkillLevel"];
	for (auto value : allSkillLevels)
	{
		SkillLevel skillLevelsObject;
		if(!value["SkillLevelId"].isNull())
			skillLevelsObject.skillLevelId = value["SkillLevelId"].asString();
		if(!value["Level"].isNull())
			skillLevelsObject.level = std::stoi(value["Level"].asString());
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
		auto allOutboundPhoneNumbers = value["OutboundPhoneNumbers"]["PhoneNumber"];
		for (auto value : allOutboundPhoneNumbers)
		{
			SkillLevel::Skill::PhoneNumber phoneNumberObject;
			if(!value["PhoneNumberId"].isNull())
				phoneNumberObject.phoneNumberId = value["PhoneNumberId"].asString();
			if(!value["InstanceId"].isNull())
				phoneNumberObject.instanceId = value["InstanceId"].asString();
			if(!value["Number"].isNull())
				phoneNumberObject.number = value["Number"].asString();
			if(!value["PhoneNumberDescription"].isNull())
				phoneNumberObject.phoneNumberDescription = value["PhoneNumberDescription"].asString();
			if(!value["TestOnly"].isNull())
				phoneNumberObject.testOnly = value["TestOnly"].asString() == "true";
			if(!value["RemainingTime"].isNull())
				phoneNumberObject.remainingTime = std::stoi(value["RemainingTime"].asString());
			if(!value["AllowOutbound"].isNull())
				phoneNumberObject.allowOutbound = value["AllowOutbound"].asString() == "true";
			if(!value["Usage"].isNull())
				phoneNumberObject.usage = value["Usage"].asString();
			if(!value["Trunks"].isNull())
				phoneNumberObject.trunks = std::stoi(value["Trunks"].asString());
			if(!value["Province"].isNull())
				phoneNumberObject.province = value["Province"].asString();
			if(!value["City"].isNull())
				phoneNumberObject.city = value["City"].asString();
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

