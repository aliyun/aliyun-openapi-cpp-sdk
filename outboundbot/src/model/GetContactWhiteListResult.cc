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

#include <alibabacloud/outboundbot/model/GetContactWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetContactWhiteListResult::GetContactWhiteListResult() :
	ServiceResult()
{}

GetContactWhiteListResult::GetContactWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetContactWhiteListResult::~GetContactWhiteListResult()
{}

void GetContactWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contactWhitelistListNode = value["ContactWhitelistList"];
	if(!contactWhitelistListNode["PageSize"].isNull())
		contactWhitelistList_.pageSize = std::stoi(contactWhitelistListNode["PageSize"].asString());
	if(!contactWhitelistListNode["PageNumber"].isNull())
		contactWhitelistList_.pageNumber = std::stoi(contactWhitelistListNode["PageNumber"].asString());
	if(!contactWhitelistListNode["TotalCount"].isNull())
		contactWhitelistList_.totalCount = std::stoi(contactWhitelistListNode["TotalCount"].asString());
	auto allListNode = contactWhitelistListNode["List"]["ContactWhitelistList"];
	for (auto contactWhitelistListNodeListContactWhitelistList : allListNode)
	{
		ContactWhitelistList::ContactWhitelistList1 contactWhitelistList1Object;
		if(!contactWhitelistListNodeListContactWhitelistList["CreationTime"].isNull())
			contactWhitelistList1Object.creationTime = std::stol(contactWhitelistListNodeListContactWhitelistList["CreationTime"].asString());
		if(!contactWhitelistListNodeListContactWhitelistList["Remark"].isNull())
			contactWhitelistList1Object.remark = contactWhitelistListNodeListContactWhitelistList["Remark"].asString();
		if(!contactWhitelistListNodeListContactWhitelistList["PhoneNumber"].isNull())
			contactWhitelistList1Object.phoneNumber = contactWhitelistListNodeListContactWhitelistList["PhoneNumber"].asString();
		if(!contactWhitelistListNodeListContactWhitelistList["Operator"].isNull())
			contactWhitelistList1Object._operator = contactWhitelistListNodeListContactWhitelistList["Operator"].asString();
		if(!contactWhitelistListNodeListContactWhitelistList["ContactWhiteListId"].isNull())
			contactWhitelistList1Object.contactWhiteListId = contactWhitelistListNodeListContactWhitelistList["ContactWhiteListId"].asString();
		if(!contactWhitelistListNodeListContactWhitelistList["InstanceId"].isNull())
			contactWhitelistList1Object.instanceId = contactWhitelistListNodeListContactWhitelistList["InstanceId"].asString();
		if(!contactWhitelistListNodeListContactWhitelistList["Name"].isNull())
			contactWhitelistList1Object.name = contactWhitelistListNodeListContactWhitelistList["Name"].asString();
		if(!contactWhitelistListNodeListContactWhitelistList["Creator"].isNull())
			contactWhitelistList1Object.creator = contactWhitelistListNodeListContactWhitelistList["Creator"].asString();
		contactWhitelistList_.list.push_back(contactWhitelistList1Object);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetContactWhiteListResult::getMessage()const
{
	return message_;
}

int GetContactWhiteListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetContactWhiteListResult::ContactWhitelistList GetContactWhiteListResult::getContactWhitelistList()const
{
	return contactWhitelistList_;
}

std::string GetContactWhiteListResult::getCode()const
{
	return code_;
}

bool GetContactWhiteListResult::getSuccess()const
{
	return success_;
}

