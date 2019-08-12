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

#include <alibabacloud/ccc/model/CreateContactFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CreateContactFlowResult::CreateContactFlowResult() :
	ServiceResult()
{}

CreateContactFlowResult::CreateContactFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateContactFlowResult::~CreateContactFlowResult()
{}

void CreateContactFlowResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto contactFlowNode = value["ContactFlow"];
	if(!contactFlowNode["ContactFlowId"].isNull())
		contactFlow_.contactFlowId = contactFlowNode["ContactFlowId"].asString();
	if(!contactFlowNode["InstanceId"].isNull())
		contactFlow_.instanceId = contactFlowNode["InstanceId"].asString();
	if(!contactFlowNode["ContactFlowName"].isNull())
		contactFlow_.contactFlowName = contactFlowNode["ContactFlowName"].asString();
	if(!contactFlowNode["ContactFlowDescription"].isNull())
		contactFlow_.contactFlowDescription = contactFlowNode["ContactFlowDescription"].asString();
	if(!contactFlowNode["Type"].isNull())
		contactFlow_.type = contactFlowNode["Type"].asString();
	if(!contactFlowNode["AppliedVersion"].isNull())
		contactFlow_.appliedVersion = contactFlowNode["AppliedVersion"].asString();
	auto allVersions = value["Versions"]["ContactFlowVersion"];
	for (auto value : allVersions)
	{
		ContactFlow::ContactFlowVersion contactFlowVersionObject;
		if(!value["ContactFlowVersionId"].isNull())
			contactFlowVersionObject.contactFlowVersionId = value["ContactFlowVersionId"].asString();
		if(!value["Version"].isNull())
			contactFlowVersionObject.version = value["Version"].asString();
		if(!value["ContactFlowVersionDescription"].isNull())
			contactFlowVersionObject.contactFlowVersionDescription = value["ContactFlowVersionDescription"].asString();
		if(!value["Canvas"].isNull())
			contactFlowVersionObject.canvas = value["Canvas"].asString();
		if(!value["Content"].isNull())
			contactFlowVersionObject.content = value["Content"].asString();
		if(!value["LastModified"].isNull())
			contactFlowVersionObject.lastModified = value["LastModified"].asString();
		if(!value["LastModifiedBy"].isNull())
			contactFlowVersionObject.lastModifiedBy = value["LastModifiedBy"].asString();
		if(!value["LockedBy"].isNull())
			contactFlowVersionObject.lockedBy = value["LockedBy"].asString();
		if(!value["Status"].isNull())
			contactFlowVersionObject.status = value["Status"].asString();
		contactFlow_.versions.push_back(contactFlowVersionObject);
	}
	auto allPhoneNumbers = value["PhoneNumbers"]["PhoneNumber"];
	for (auto value : allPhoneNumbers)
	{
		ContactFlow::PhoneNumber phoneNumberObject;
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
		contactFlow_.phoneNumbers.push_back(phoneNumberObject);
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

std::string CreateContactFlowResult::getMessage()const
{
	return message_;
}

int CreateContactFlowResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateContactFlowResult::ContactFlow CreateContactFlowResult::getContactFlow()const
{
	return contactFlow_;
}

std::string CreateContactFlowResult::getCode()const
{
	return code_;
}

bool CreateContactFlowResult::getSuccess()const
{
	return success_;
}

