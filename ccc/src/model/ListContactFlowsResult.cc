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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactFlowsNode = value["ContactFlows"]["ContactFlow"];
	for (auto valueContactFlowsContactFlow : allContactFlowsNode)
	{
		ContactFlow contactFlowsObject;
		if(!valueContactFlowsContactFlow["ContactFlowId"].isNull())
			contactFlowsObject.contactFlowId = valueContactFlowsContactFlow["ContactFlowId"].asString();
		if(!valueContactFlowsContactFlow["InstanceId"].isNull())
			contactFlowsObject.instanceId = valueContactFlowsContactFlow["InstanceId"].asString();
		if(!valueContactFlowsContactFlow["ContactFlowName"].isNull())
			contactFlowsObject.contactFlowName = valueContactFlowsContactFlow["ContactFlowName"].asString();
		if(!valueContactFlowsContactFlow["ContactFlowDescription"].isNull())
			contactFlowsObject.contactFlowDescription = valueContactFlowsContactFlow["ContactFlowDescription"].asString();
		if(!valueContactFlowsContactFlow["Type"].isNull())
			contactFlowsObject.type = valueContactFlowsContactFlow["Type"].asString();
		if(!valueContactFlowsContactFlow["AppliedVersion"].isNull())
			contactFlowsObject.appliedVersion = valueContactFlowsContactFlow["AppliedVersion"].asString();
		auto allVersionsNode = valueContactFlowsContactFlow["Versions"]["ContactFlowVersion"];
		for (auto valueContactFlowsContactFlowVersionsContactFlowVersion : allVersionsNode)
		{
			ContactFlow::ContactFlowVersion versionsObject;
			if(!valueContactFlowsContactFlowVersionsContactFlowVersion["ContactFlowVersionId"].isNull())
				versionsObject.contactFlowVersionId = valueContactFlowsContactFlowVersionsContactFlowVersion["ContactFlowVersionId"].asString();
			if(!valueContactFlowsContactFlowVersionsContactFlowVersion["Version"].isNull())
				versionsObject.version = valueContactFlowsContactFlowVersionsContactFlowVersion["Version"].asString();
			if(!valueContactFlowsContactFlowVersionsContactFlowVersion["ContactFlowVersionDescription"].isNull())
				versionsObject.contactFlowVersionDescription = valueContactFlowsContactFlowVersionsContactFlowVersion["ContactFlowVersionDescription"].asString();
			if(!valueContactFlowsContactFlowVersionsContactFlowVersion["LastModified"].isNull())
				versionsObject.lastModified = valueContactFlowsContactFlowVersionsContactFlowVersion["LastModified"].asString();
			if(!valueContactFlowsContactFlowVersionsContactFlowVersion["LastModifiedBy"].isNull())
				versionsObject.lastModifiedBy = valueContactFlowsContactFlowVersionsContactFlowVersion["LastModifiedBy"].asString();
			if(!valueContactFlowsContactFlowVersionsContactFlowVersion["LockedBy"].isNull())
				versionsObject.lockedBy = valueContactFlowsContactFlowVersionsContactFlowVersion["LockedBy"].asString();
			if(!valueContactFlowsContactFlowVersionsContactFlowVersion["Status"].isNull())
				versionsObject.status = valueContactFlowsContactFlowVersionsContactFlowVersion["Status"].asString();
			contactFlowsObject.versions.push_back(versionsObject);
		}
		auto allPhoneNumbersNode = valueContactFlowsContactFlow["PhoneNumbers"]["PhoneNumber"];
		for (auto valueContactFlowsContactFlowPhoneNumbersPhoneNumber : allPhoneNumbersNode)
		{
			ContactFlow::PhoneNumber phoneNumbersObject;
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
				phoneNumbersObject.phoneNumberId = valueContactFlowsContactFlowPhoneNumbersPhoneNumber["PhoneNumberId"].asString();
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["InstanceId"].isNull())
				phoneNumbersObject.instanceId = valueContactFlowsContactFlowPhoneNumbersPhoneNumber["InstanceId"].asString();
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["Number"].isNull())
				phoneNumbersObject.number = valueContactFlowsContactFlowPhoneNumbersPhoneNumber["Number"].asString();
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
				phoneNumbersObject.phoneNumberDescription = valueContactFlowsContactFlowPhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["TestOnly"].isNull())
				phoneNumbersObject.testOnly = valueContactFlowsContactFlowPhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["RemainingTime"].isNull())
				phoneNumbersObject.remainingTime = std::stoi(valueContactFlowsContactFlowPhoneNumbersPhoneNumber["RemainingTime"].asString());
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["AllowOutbound"].isNull())
				phoneNumbersObject.allowOutbound = valueContactFlowsContactFlowPhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["Usage"].isNull())
				phoneNumbersObject.usage = valueContactFlowsContactFlowPhoneNumbersPhoneNumber["Usage"].asString();
			if(!valueContactFlowsContactFlowPhoneNumbersPhoneNumber["Trunks"].isNull())
				phoneNumbersObject.trunks = std::stoi(valueContactFlowsContactFlowPhoneNumbersPhoneNumber["Trunks"].asString());
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

