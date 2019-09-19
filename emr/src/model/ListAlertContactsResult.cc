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

#include <alibabacloud/emr/model/ListAlertContactsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListAlertContactsResult::ListAlertContactsResult() :
	ServiceResult()
{}

ListAlertContactsResult::ListAlertContactsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertContactsResult::~ListAlertContactsResult()
{}

void ListAlertContactsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlertContactListNode = value["AlertContactList"]["AlertContact"];
	for (auto valueAlertContactListAlertContact : allAlertContactListNode)
	{
		AlertContact alertContactListObject;
		if(!valueAlertContactListAlertContact["Id"].isNull())
			alertContactListObject.id = std::stol(valueAlertContactListAlertContact["Id"].asString());
		if(!valueAlertContactListAlertContact["GmtCreate"].isNull())
			alertContactListObject.gmtCreate = valueAlertContactListAlertContact["GmtCreate"].asString();
		if(!valueAlertContactListAlertContact["GmtModified"].isNull())
			alertContactListObject.gmtModified = valueAlertContactListAlertContact["GmtModified"].asString();
		if(!valueAlertContactListAlertContact["BizId"].isNull())
			alertContactListObject.bizId = valueAlertContactListAlertContact["BizId"].asString();
		if(!valueAlertContactListAlertContact["Name"].isNull())
			alertContactListObject.name = valueAlertContactListAlertContact["Name"].asString();
		if(!valueAlertContactListAlertContact["Email"].isNull())
			alertContactListObject.email = valueAlertContactListAlertContact["Email"].asString();
		if(!valueAlertContactListAlertContact["PhoneNumber"].isNull())
			alertContactListObject.phoneNumber = valueAlertContactListAlertContact["PhoneNumber"].asString();
		alertContactList_.push_back(alertContactListObject);
	}

}

std::vector<ListAlertContactsResult::AlertContact> ListAlertContactsResult::getAlertContactList()const
{
	return alertContactList_;
}

