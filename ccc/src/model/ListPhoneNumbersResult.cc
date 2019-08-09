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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allPhoneNumbers = value["PhoneNumbers"]["PhoneNumber"];
	for (auto value : allPhoneNumbers)
	{
		PhoneNumber phoneNumbersObject;
		if(!value["PhoneNumberId"].isNull())
			phoneNumbersObject.phoneNumberId = value["PhoneNumberId"].asString();
		if(!value["InstanceId"].isNull())
			phoneNumbersObject.instanceId = value["InstanceId"].asString();
		if(!value["Number"].isNull())
			phoneNumbersObject.number = value["Number"].asString();
		if(!value["PhoneNumberDescription"].isNull())
			phoneNumbersObject.phoneNumberDescription = value["PhoneNumberDescription"].asString();
		if(!value["TestOnly"].isNull())
			phoneNumbersObject.testOnly = value["TestOnly"].asString() == "true";
		if(!value["RemainingTime"].isNull())
			phoneNumbersObject.remainingTime = std::stoi(value["RemainingTime"].asString());
		if(!value["AllowOutbound"].isNull())
			phoneNumbersObject.allowOutbound = value["AllowOutbound"].asString() == "true";
		if(!value["Usage"].isNull())
			phoneNumbersObject.usage = value["Usage"].asString();
		if(!value["Trunks"].isNull())
			phoneNumbersObject.trunks = std::stoi(value["Trunks"].asString());
		if(!value["Province"].isNull())
			phoneNumbersObject.province = value["Province"].asString();
		if(!value["City"].isNull())
			phoneNumbersObject.city = value["City"].asString();
		if(!value["Assignee"].isNull())
			phoneNumbersObject.assignee = value["Assignee"].asString();
		if(!value["NumberCommodityStatus"].isNull())
			phoneNumbersObject.numberCommodityStatus = std::stoi(value["NumberCommodityStatus"].asString());
		if(!value["SipTelX"].isNull())
			phoneNumbersObject.sipTelX = value["SipTelX"].asString();
		auto allSkillGroups = value["SkillGroups"]["SkillGroup"];
		for (auto value : allSkillGroups)
		{
			PhoneNumber::SkillGroup skillGroupsObject;
			if(!value["SkillGroupId"].isNull())
				skillGroupsObject.skillGroupId = value["SkillGroupId"].asString();
			if(!value["SkillGroupName"].isNull())
				skillGroupsObject.skillGroupName = value["SkillGroupName"].asString();
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

