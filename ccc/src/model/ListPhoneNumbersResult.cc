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
		auto allContactFlow = value["ContactFlow"];
		for (auto value : allContactFlow)
		{
			PhoneNumber::ContactFlow contactFlowObject;
			if(!value["ContactFlowId"].isNull())
				contactFlowObject.contactFlowId = value["ContactFlowId"].asString();
			if(!value["InstanceId"].isNull())
				contactFlowObject.instanceId = value["InstanceId"].asString();
			if(!value["ContactFlowName"].isNull())
				contactFlowObject.contactFlowName = value["ContactFlowName"].asString();
			if(!value["ContactFlowDescription"].isNull())
				contactFlowObject.contactFlowDescription = value["ContactFlowDescription"].asString();
			if(!value["Type"].isNull())
				contactFlowObject.type = value["Type"].asString();
			phoneNumbersObject.contactFlow.push_back(contactFlowObject);
		}
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

