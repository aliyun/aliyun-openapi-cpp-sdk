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

#include <alibabacloud/ccc/model/ListContactFlowsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListContactFlowsResult::ListContactFlowsResult() :
	ServiceResult()
{}

ListContactFlowsResult::ListContactFlowsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListContactFlowsResult::~ListContactFlowsResult()
{}

void ListContactFlowsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allContactFlows = value["ContactFlows"]["ContactFlow"];
	for (auto value : allContactFlows)
	{
		ContactFlow contactFlowsObject;
		if(!value["ContactFlowId"].isNull())
			contactFlowsObject.contactFlowId = value["ContactFlowId"].asString();
		if(!value["InstanceId"].isNull())
			contactFlowsObject.instanceId = value["InstanceId"].asString();
		if(!value["ContactFlowName"].isNull())
			contactFlowsObject.contactFlowName = value["ContactFlowName"].asString();
		if(!value["ContactFlowDescription"].isNull())
			contactFlowsObject.contactFlowDescription = value["ContactFlowDescription"].asString();
		if(!value["Type"].isNull())
			contactFlowsObject.type = value["Type"].asString();
		if(!value["AppliedVersion"].isNull())
			contactFlowsObject.appliedVersion = value["AppliedVersion"].asString();
		auto allVersions = value["Versions"]["ContactFlowVersion"];
		for (auto value : allVersions)
		{
			ContactFlow::ContactFlowVersion versionsObject;
			if(!value["ContactFlowVersionId"].isNull())
				versionsObject.contactFlowVersionId = value["ContactFlowVersionId"].asString();
			if(!value["Version"].isNull())
				versionsObject.version = value["Version"].asString();
			if(!value["ContactFlowVersionDescription"].isNull())
				versionsObject.contactFlowVersionDescription = value["ContactFlowVersionDescription"].asString();
			if(!value["LastModified"].isNull())
				versionsObject.lastModified = value["LastModified"].asString();
			if(!value["LastModifiedBy"].isNull())
				versionsObject.lastModifiedBy = value["LastModifiedBy"].asString();
			if(!value["LockedBy"].isNull())
				versionsObject.lockedBy = value["LockedBy"].asString();
			if(!value["Status"].isNull())
				versionsObject.status = value["Status"].asString();
			contactFlowsObject.versions.push_back(versionsObject);
		}
		auto allPhoneNumbers = value["PhoneNumbers"]["PhoneNumber"];
		for (auto value : allPhoneNumbers)
		{
			ContactFlow::PhoneNumber phoneNumbersObject;
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
			contactFlowsObject.phoneNumbers.push_back(phoneNumbersObject);
		}
		contactFlows_.push_back(contactFlowsObject);
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

std::string ListContactFlowsResult::getMessage()const
{
	return message_;
}

std::vector<ListContactFlowsResult::ContactFlow> ListContactFlowsResult::getContactFlows()const
{
	return contactFlows_;
}

int ListContactFlowsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListContactFlowsResult::getCode()const
{
	return code_;
}

bool ListContactFlowsResult::getSuccess()const
{
	return success_;
}

