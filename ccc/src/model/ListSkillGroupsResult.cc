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

#include <alibabacloud/ccc/model/ListSkillGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSkillGroupsResult::ListSkillGroupsResult() :
	ServiceResult()
{}

ListSkillGroupsResult::ListSkillGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupsResult::~ListSkillGroupsResult()
{}

void ListSkillGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSkillGroups = value["SkillGroups"]["SkillGroup"];
	for (auto value : allSkillGroups)
	{
		SkillGroup skillGroupsObject;
		if(!value["SkillGroupId"].isNull())
			skillGroupsObject.skillGroupId = value["SkillGroupId"].asString();
		if(!value["InstanceId"].isNull())
			skillGroupsObject.instanceId = value["InstanceId"].asString();
		if(!value["SkillGroupName"].isNull())
			skillGroupsObject.skillGroupName = value["SkillGroupName"].asString();
		if(!value["AccSkillGroupName"].isNull())
			skillGroupsObject.accSkillGroupName = value["AccSkillGroupName"].asString();
		if(!value["AccQueueName"].isNull())
			skillGroupsObject.accQueueName = value["AccQueueName"].asString();
		if(!value["SkillGroupDescription"].isNull())
			skillGroupsObject.skillGroupDescription = value["SkillGroupDescription"].asString();
		if(!value["UserCount"].isNull())
			skillGroupsObject.userCount = std::stoi(value["UserCount"].asString());
		auto allOutboundPhoneNumbers = value["OutboundPhoneNumbers"]["PhoneNumber"];
		for (auto value : allOutboundPhoneNumbers)
		{
			SkillGroup::PhoneNumber outboundPhoneNumbersObject;
			if(!value["PhoneNumberId"].isNull())
				outboundPhoneNumbersObject.phoneNumberId = value["PhoneNumberId"].asString();
			if(!value["InstanceId"].isNull())
				outboundPhoneNumbersObject.instanceId = value["InstanceId"].asString();
			if(!value["Number"].isNull())
				outboundPhoneNumbersObject.number = value["Number"].asString();
			if(!value["PhoneNumberDescription"].isNull())
				outboundPhoneNumbersObject.phoneNumberDescription = value["PhoneNumberDescription"].asString();
			if(!value["TestOnly"].isNull())
				outboundPhoneNumbersObject.testOnly = value["TestOnly"].asString() == "true";
			if(!value["RemainingTime"].isNull())
				outboundPhoneNumbersObject.remainingTime = std::stoi(value["RemainingTime"].asString());
			if(!value["AllowOutbound"].isNull())
				outboundPhoneNumbersObject.allowOutbound = value["AllowOutbound"].asString() == "true";
			if(!value["Usage"].isNull())
				outboundPhoneNumbersObject.usage = value["Usage"].asString();
			if(!value["Trunks"].isNull())
				outboundPhoneNumbersObject.trunks = std::stoi(value["Trunks"].asString());
			skillGroupsObject.outboundPhoneNumbers.push_back(outboundPhoneNumbersObject);
		}
		skillGroups_.push_back(skillGroupsObject);
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

std::string ListSkillGroupsResult::getMessage()const
{
	return message_;
}

int ListSkillGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListSkillGroupsResult::SkillGroup> ListSkillGroupsResult::getSkillGroups()const
{
	return skillGroups_;
}

std::string ListSkillGroupsResult::getCode()const
{
	return code_;
}

bool ListSkillGroupsResult::getSuccess()const
{
	return success_;
}

