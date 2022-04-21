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

#include <alibabacloud/outboundbot/model/GetContactBlockListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetContactBlockListResult::GetContactBlockListResult() :
	ServiceResult()
{}

GetContactBlockListResult::GetContactBlockListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetContactBlockListResult::~GetContactBlockListResult()
{}

void GetContactBlockListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contactBlocklistListNode = value["ContactBlocklistList"];
	if(!contactBlocklistListNode["PageNumber"].isNull())
		contactBlocklistList_.pageNumber = std::stoi(contactBlocklistListNode["PageNumber"].asString());
	if(!contactBlocklistListNode["PageSize"].isNull())
		contactBlocklistList_.pageSize = std::stoi(contactBlocklistListNode["PageSize"].asString());
	if(!contactBlocklistListNode["TotalCount"].isNull())
		contactBlocklistList_.totalCount = std::stoi(contactBlocklistListNode["TotalCount"].asString());
	auto allListNode = contactBlocklistListNode["List"]["ContactBlockList"];
	for (auto contactBlocklistListNodeListContactBlockList : allListNode)
	{
		ContactBlocklistList::ContactBlockList contactBlockListObject;
		if(!contactBlocklistListNodeListContactBlockList["ContactBlockListId"].isNull())
			contactBlockListObject.contactBlockListId = contactBlocklistListNodeListContactBlockList["ContactBlockListId"].asString();
		if(!contactBlocklistListNodeListContactBlockList["CreationTime"].isNull())
			contactBlockListObject.creationTime = std::stol(contactBlocklistListNodeListContactBlockList["CreationTime"].asString());
		if(!contactBlocklistListNodeListContactBlockList["Remark"].isNull())
			contactBlockListObject.remark = contactBlocklistListNodeListContactBlockList["Remark"].asString();
		if(!contactBlocklistListNodeListContactBlockList["PhoneNumber"].isNull())
			contactBlockListObject.phoneNumber = contactBlocklistListNodeListContactBlockList["PhoneNumber"].asString();
		if(!contactBlocklistListNodeListContactBlockList["Operator"].isNull())
			contactBlockListObject._operator = contactBlocklistListNodeListContactBlockList["Operator"].asString();
		if(!contactBlocklistListNodeListContactBlockList["InstanceId"].isNull())
			contactBlockListObject.instanceId = contactBlocklistListNodeListContactBlockList["InstanceId"].asString();
		if(!contactBlocklistListNodeListContactBlockList["Name"].isNull())
			contactBlockListObject.name = contactBlocklistListNodeListContactBlockList["Name"].asString();
		if(!contactBlocklistListNodeListContactBlockList["Creator"].isNull())
			contactBlockListObject.creator = contactBlocklistListNodeListContactBlockList["Creator"].asString();
		contactBlocklistList_.list.push_back(contactBlockListObject);
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

std::string GetContactBlockListResult::getMessage()const
{
	return message_;
}

int GetContactBlockListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetContactBlockListResult::getCode()const
{
	return code_;
}

GetContactBlockListResult::ContactBlocklistList GetContactBlockListResult::getContactBlocklistList()const
{
	return contactBlocklistList_;
}

bool GetContactBlockListResult::getSuccess()const
{
	return success_;
}

