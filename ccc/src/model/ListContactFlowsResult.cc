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
		auto allVersionsNode = allContactFlowsNode["Versions"]["ContactFlowVersion"];
		for (auto allContactFlowsNodeVersionsContactFlowVersion : allVersionsNode)
		{
			ContactFlow::ContactFlowVersion versionsObject;
			if(!allContactFlowsNodeVersionsContactFlowVersion["ContactFlowVersionId"].isNull())
				versionsObject.contactFlowVersionId = allContactFlowsNodeVersionsContactFlowVersion["ContactFlowVersionId"].asString();
			if(!allContactFlowsNodeVersionsContactFlowVersion["Version"].isNull())
				versionsObject.version = allContactFlowsNodeVersionsContactFlowVersion["Version"].asString();
			if(!allContactFlowsNodeVersionsContactFlowVersion["ContactFlowVersionDescription"].isNull())
				versionsObject.contactFlowVersionDescription = allContactFlowsNodeVersionsContactFlowVersion["ContactFlowVersionDescription"].asString();
			if(!allContactFlowsNodeVersionsContactFlowVersion["LastModified"].isNull())
				versionsObject.lastModified = allContactFlowsNodeVersionsContactFlowVersion["LastModified"].asString();
			if(!allContactFlowsNodeVersionsContactFlowVersion["LastModifiedBy"].isNull())
				versionsObject.lastModifiedBy = allContactFlowsNodeVersionsContactFlowVersion["LastModifiedBy"].asString();
			if(!allContactFlowsNodeVersionsContactFlowVersion["LockedBy"].isNull())
				versionsObject.lockedBy = allContactFlowsNodeVersionsContactFlowVersion["LockedBy"].asString();
			if(!allContactFlowsNodeVersionsContactFlowVersion["Status"].isNull())
				versionsObject.status = allContactFlowsNodeVersionsContactFlowVersion["Status"].asString();
			contactFlowsObject.versions.push_back(versionsObject);
		}
		auto allPhoneNumbersNode = allContactFlowsNode["PhoneNumbers"]["PhoneNumber"];
		for (auto allContactFlowsNodePhoneNumbersPhoneNumber : allPhoneNumbersNode)
		{
			ContactFlow::PhoneNumber phoneNumbersObject;
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
				phoneNumbersObject.phoneNumberId = allContactFlowsNodePhoneNumbersPhoneNumber["PhoneNumberId"].asString();
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["InstanceId"].isNull())
				phoneNumbersObject.instanceId = allContactFlowsNodePhoneNumbersPhoneNumber["InstanceId"].asString();
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["Number"].isNull())
				phoneNumbersObject.number = allContactFlowsNodePhoneNumbersPhoneNumber["Number"].asString();
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
				phoneNumbersObject.phoneNumberDescription = allContactFlowsNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["TestOnly"].isNull())
				phoneNumbersObject.testOnly = allContactFlowsNodePhoneNumbersPhoneNumber["TestOnly"].asString() == "true";
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["RemainingTime"].isNull())
				phoneNumbersObject.remainingTime = std::stoi(allContactFlowsNodePhoneNumbersPhoneNumber["RemainingTime"].asString());
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["AllowOutbound"].isNull())
				phoneNumbersObject.allowOutbound = allContactFlowsNodePhoneNumbersPhoneNumber["AllowOutbound"].asString() == "true";
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["Usage"].isNull())
				phoneNumbersObject.usage = allContactFlowsNodePhoneNumbersPhoneNumber["Usage"].asString();
			if(!allContactFlowsNodePhoneNumbersPhoneNumber["Trunks"].isNull())
				phoneNumbersObject.trunks = std::stoi(allContactFlowsNodePhoneNumbersPhoneNumber["Trunks"].asString());
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

