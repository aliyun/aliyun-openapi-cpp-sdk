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

#include <alibabacloud/ccc/model/AddBulkPhoneNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

AddBulkPhoneNumbersResult::AddBulkPhoneNumbersResult() :
	ServiceResult()
{}

AddBulkPhoneNumbersResult::AddBulkPhoneNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddBulkPhoneNumbersResult::~AddBulkPhoneNumbersResult()
{}

void AddBulkPhoneNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
		phoneNumbers_.push_back(phoneNumbersObject);
	}
	auto allArrearagePhoneNumbers = value["ArrearagePhoneNumbers"]["ArrearagePhoneNumber"];
	for (const auto &item : allArrearagePhoneNumbers)
		arrearagePhoneNumbers_.push_back(item.asString());
	auto allFailedPhoneNumbers = value["FailedPhoneNumbers"]["FailedPhoneNumber"];
	for (const auto &item : allFailedPhoneNumbers)
		failedPhoneNumbers_.push_back(item.asString());
	auto allUserdPhoneNumbers = value["UserdPhoneNumbers"]["UserdPhoneNumber"];
	for (const auto &item : allUserdPhoneNumbers)
		userdPhoneNumbers_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::vector<std::string> AddBulkPhoneNumbersResult::getArrearagePhoneNumbers()const
{
	return arrearagePhoneNumbers_;
}

std::vector<AddBulkPhoneNumbersResult::PhoneNumber> AddBulkPhoneNumbersResult::getPhoneNumbers()const
{
	return phoneNumbers_;
}

std::string AddBulkPhoneNumbersResult::getMessage()const
{
	return message_;
}

int AddBulkPhoneNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> AddBulkPhoneNumbersResult::getFailedPhoneNumbers()const
{
	return failedPhoneNumbers_;
}

std::vector<std::string> AddBulkPhoneNumbersResult::getUserdPhoneNumbers()const
{
	return userdPhoneNumbers_;
}

std::string AddBulkPhoneNumbersResult::getCode()const
{
	return code_;
}

bool AddBulkPhoneNumbersResult::getSuccess()const
{
	return success_;
}

