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

#include <alibabacloud/ccc/model/ListPhoneNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListPhoneNumbersResult::ListPhoneNumbersResult() :
	ServiceResult()
{}

ListPhoneNumbersResult::ListPhoneNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPhoneNumbersResult::~ListPhoneNumbersResult()
{}

void ListPhoneNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPhoneNumbersNode = value["PhoneNumbers"]["PhoneNumber"];
	for (auto valuePhoneNumbersPhoneNumber : allPhoneNumbersNode)
	{
		PhoneNumber phoneNumbersObject;
		if(!valuePhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
			phoneNumbersObject.phoneNumberId = valuePhoneNumbersPhoneNumber["PhoneNumberId"].asString();
		if(!valuePhoneNumbersPhoneNumber["InstanceId"].isNull())
			phoneNumbersObject.instanceId = valuePhoneNumbersPhoneNumber["InstanceId"].asString();
		if(!valuePhoneNumbersPhoneNumber["Number"].isNull())
			phoneNumbersObject.number = valuePhoneNumbersPhoneNumber["Number"].asString();
		if(!valuePhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
			phoneNumbersObject.phoneNumberDescription = valuePhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
		if(!valuePhoneNumbersPhoneNumber["TestOnly"].isNull())
			phoneNumbersObject.testOnly = valuePhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
		if(!valuePhoneNumbersPhoneNumber["RemainingTime"].isNull())
			phoneNumbersObject.remainingTime = std::stoi(valuePhoneNumbersPhoneNumber["RemainingTime"].asString());
		if(!valuePhoneNumbersPhoneNumber["AllowOutbound"].isNull())
			phoneNumbersObject.allowOutbound = valuePhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
		if(!valuePhoneNumbersPhoneNumber["Usage"].isNull())
			phoneNumbersObject.usage = valuePhoneNumbersPhoneNumber["Usage"].asString();
		if(!valuePhoneNumbersPhoneNumber["Trunks"].isNull())
			phoneNumbersObject.trunks = std::stoi(valuePhoneNumbersPhoneNumber["Trunks"].asString());
		if(!valuePhoneNumbersPhoneNumber["Province"].isNull())
			phoneNumbersObject.province = valuePhoneNumbersPhoneNumber["Province"].asString();
		if(!valuePhoneNumbersPhoneNumber["City"].isNull())
			phoneNumbersObject.city = valuePhoneNumbersPhoneNumber["City"].asString();
		if(!valuePhoneNumbersPhoneNumber["Assignee"].isNull())
			phoneNumbersObject.assignee = valuePhoneNumbersPhoneNumber["Assignee"].asString();
		if(!valuePhoneNumbersPhoneNumber["NumberCommodityStatus"].isNull())
			phoneNumbersObject.numberCommodityStatus = std::stoi(valuePhoneNumbersPhoneNumber["NumberCommodityStatus"].asString());
		if(!valuePhoneNumbersPhoneNumber["SipTelX"].isNull())
			phoneNumbersObject.sipTelX = valuePhoneNumbersPhoneNumber["SipTelX"].asString();
		auto allSkillGroupsNode = valuePhoneNumbersPhoneNumber["SkillGroups"]["SkillGroup"];
		for (auto valuePhoneNumbersPhoneNumberSkillGroupsSkillGroup : allSkillGroupsNode)
		{
			PhoneNumber::SkillGroup skillGroupsObject;
			if(!valuePhoneNumbersPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].isNull())
				skillGroupsObject.skillGroupId = valuePhoneNumbersPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].asString();
			if(!valuePhoneNumbersPhoneNumberSkillGroupsSkillGroup["SkillGroupName"].isNull())
				skillGroupsObject.skillGroupName = valuePhoneNumbersPhoneNumberSkillGroupsSkillGroup["SkillGroupName"].asString();
			phoneNumbersObject.skillGroups.push_back(skillGroupsObject);
		}
		auto contactFlowNode = value["ContactFlow"];
		if(!contactFlowNode["ContactFlowId"].isNull())
			phoneNumbersObject.contactFlow.contactFlowId = contactFlowNode["ContactFlowId"].asString();
		if(!contactFlowNode["InstanceId"].isNull())
			phoneNumbersObject.contactFlow.instanceId = contactFlowNode["InstanceId"].asString();
		if(!contactFlowNode["ContactFlowName"].isNull())
			phoneNumbersObject.contactFlow.contactFlowName = contactFlowNode["ContactFlowName"].asString();
		if(!contactFlowNode["ContactFlowDescription"].isNull())
			phoneNumbersObject.contactFlow.contactFlowDescription = contactFlowNode["ContactFlowDescription"].asString();
		if(!contactFlowNode["Type"].isNull())
			phoneNumbersObject.contactFlow.type = contactFlowNode["Type"].asString();
		auto privacyNumberNode = value["PrivacyNumber"];
		if(!privacyNumberNode["PoolId"].isNull())
			phoneNumbersObject.privacyNumber.poolId = privacyNumberNode["PoolId"].asString();
		if(!privacyNumberNode["Type"].isNull())
			phoneNumbersObject.privacyNumber.type = privacyNumberNode["Type"].asString();
		if(!privacyNumberNode["TelX"].isNull())
			phoneNumbersObject.privacyNumber.telX = privacyNumberNode["TelX"].asString();
		if(!privacyNumberNode["PoolName"].isNull())
			phoneNumbersObject.privacyNumber.poolName = privacyNumberNode["PoolName"].asString();
		if(!privacyNumberNode["PhoneNumber"].isNull())
			phoneNumbersObject.privacyNumber.phoneNumber = privacyNumberNode["PhoneNumber"].asString();
		if(!privacyNumberNode["Extra"].isNull())
			phoneNumbersObject.privacyNumber.extra = privacyNumberNode["Extra"].asString();
		if(!privacyNumberNode["BizId"].isNull())
			phoneNumbersObject.privacyNumber.bizId = privacyNumberNode["BizId"].asString();
		if(!privacyNumberNode["SubId"].isNull())
			phoneNumbersObject.privacyNumber.subId = privacyNumberNode["SubId"].asString();
		if(!privacyNumberNode["RegionNameCity"].isNull())
			phoneNumbersObject.privacyNumber.regionNameCity = privacyNumberNode["RegionNameCity"].asString();
		phoneNumbers_.push_back(phoneNumbersObject);
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

std::vector<ListPhoneNumbersResult::PhoneNumber> ListPhoneNumbersResult::getPhoneNumbers()const
{
	return phoneNumbers_;
}

std::string ListPhoneNumbersResult::getMessage()const
{
	return message_;
}

int ListPhoneNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListPhoneNumbersResult::getCode()const
{
	return code_;
}

bool ListPhoneNumbersResult::getSuccess()const
{
	return success_;
}

