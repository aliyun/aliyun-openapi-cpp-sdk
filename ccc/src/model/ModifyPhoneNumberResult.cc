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

#include <alibabacloud/ccc/model/ModifyPhoneNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ModifyPhoneNumberResult::ModifyPhoneNumberResult() :
	ServiceResult()
{}

ModifyPhoneNumberResult::ModifyPhoneNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyPhoneNumberResult::~ModifyPhoneNumberResult()
{}

void ModifyPhoneNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto phoneNumberNode = value["PhoneNumber"];
	if(!phoneNumberNode["PhoneNumberId"].isNull())
		phoneNumber_.phoneNumberId = phoneNumberNode["PhoneNumberId"].asString();
	if(!phoneNumberNode["InstanceId"].isNull())
		phoneNumber_.instanceId = phoneNumberNode["InstanceId"].asString();
	if(!phoneNumberNode["Number"].isNull())
		phoneNumber_.number = phoneNumberNode["Number"].asString();
	if(!phoneNumberNode["PhoneNumberDescription"].isNull())
		phoneNumber_.phoneNumberDescription = phoneNumberNode["PhoneNumberDescription"].asString();
	if(!phoneNumberNode["TestOnly"].isNull())
		phoneNumber_.testOnly = phoneNumberNode["TestOnly"].asString() == "true";
	if(!phoneNumberNode["RemainingTime"].isNull())
		phoneNumber_.remainingTime = std::stoi(phoneNumberNode["RemainingTime"].asString());
	if(!phoneNumberNode["AllowOutbound"].isNull())
		phoneNumber_.allowOutbound = phoneNumberNode["AllowOutbound"].asString() == "true";
	if(!phoneNumberNode["Usage"].isNull())
		phoneNumber_.usage = phoneNumberNode["Usage"].asString();
	if(!phoneNumberNode["Trunks"].isNull())
		phoneNumber_.trunks = std::stoi(phoneNumberNode["Trunks"].asString());
	auto allSkillGroups = value["SkillGroups"]["SkillGroup"];
	for (auto value : allSkillGroups)
	{
		PhoneNumber::SkillGroup skillGroupObject;
		if(!value["SkillGroupId"].isNull())
			skillGroupObject.skillGroupId = value["SkillGroupId"].asString();
		if(!value["SkillGroupName"].isNull())
			skillGroupObject.skillGroupName = value["SkillGroupName"].asString();
		phoneNumber_.skillGroups.push_back(skillGroupObject);
	}
	auto contactFlowNode = phoneNumberNode["ContactFlow"];
	if(!contactFlowNode["ContactFlowId"].isNull())
		phoneNumber_.contactFlow.contactFlowId = contactFlowNode["ContactFlowId"].asString();
	if(!contactFlowNode["InstanceId"].isNull())
		phoneNumber_.contactFlow.instanceId = contactFlowNode["InstanceId"].asString();
	if(!contactFlowNode["ContactFlowName"].isNull())
		phoneNumber_.contactFlow.contactFlowName = contactFlowNode["ContactFlowName"].asString();
	if(!contactFlowNode["ContactFlowDescription"].isNull())
		phoneNumber_.contactFlow.contactFlowDescription = contactFlowNode["ContactFlowDescription"].asString();
	if(!contactFlowNode["Type"].isNull())
		phoneNumber_.contactFlow.type = contactFlowNode["Type"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ModifyPhoneNumberResult::getMessage()const
{
	return message_;
}

int ModifyPhoneNumberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ModifyPhoneNumberResult::PhoneNumber ModifyPhoneNumberResult::getPhoneNumber()const
{
	return phoneNumber_;
}

std::string ModifyPhoneNumberResult::getCode()const
{
	return code_;
}

bool ModifyPhoneNumberResult::getSuccess()const
{
	return success_;
}

