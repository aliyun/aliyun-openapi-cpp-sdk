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

#include <alibabacloud/ccc/model/ListUnreachableContactsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListUnreachableContactsResult::ListUnreachableContactsResult() :
	ServiceResult()
{}

ListUnreachableContactsResult::ListUnreachableContactsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUnreachableContactsResult::~ListUnreachableContactsResult()
{}

void ListUnreachableContactsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto unreachableContactsNode = value["UnreachableContacts"];
	if(!unreachableContactsNode["TotalCount"].isNull())
		unreachableContacts_.totalCount = std::stoi(unreachableContactsNode["TotalCount"].asString());
	if(!unreachableContactsNode["PageNumber"].isNull())
		unreachableContacts_.pageNumber = std::stoi(unreachableContactsNode["PageNumber"].asString());
	if(!unreachableContactsNode["PageSize"].isNull())
		unreachableContacts_.pageSize = std::stoi(unreachableContactsNode["PageSize"].asString());
	auto allList = value["List"]["UnreachableContact"];
	for (auto value : allList)
	{
		UnreachableContacts::UnreachableContact unreachableContactObject;
		if(!value["TotalAttempts"].isNull())
			unreachableContactObject.totalAttempts = std::stoi(value["TotalAttempts"].asString());
		auto allContacts = value["Contacts"]["Contact"];
		for (auto value : allContacts)
		{
			UnreachableContacts::UnreachableContact::Contact contactsObject;
			if(!value["ContactId"].isNull())
				contactsObject.contactId = value["ContactId"].asString();
			if(!value["ContactName"].isNull())
				contactsObject.contactName = value["ContactName"].asString();
			if(!value["Role"].isNull())
				contactsObject.role = value["Role"].asString();
			if(!value["PhoneNumber"].isNull())
				contactsObject.phoneNumber = value["PhoneNumber"].asString();
			if(!value["State"].isNull())
				contactsObject.state = value["State"].asString();
			if(!value["ReferenceId"].isNull())
				contactsObject.referenceId = value["ReferenceId"].asString();
			unreachableContactObject.contacts.push_back(contactsObject);
		}
		unreachableContacts_.list.push_back(unreachableContactObject);
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

ListUnreachableContactsResult::UnreachableContacts ListUnreachableContactsResult::getUnreachableContacts()const
{
	return unreachableContacts_;
}

std::string ListUnreachableContactsResult::getMessage()const
{
	return message_;
}

int ListUnreachableContactsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListUnreachableContactsResult::getCode()const
{
	return code_;
}

bool ListUnreachableContactsResult::getSuccess()const
{
	return success_;
}

