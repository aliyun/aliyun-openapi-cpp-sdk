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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAlertContactList = value["AlertContactList"]["AlertContact"];
	for (auto value : allAlertContactList)
	{
		AlertContact alertContactListObject;
		if(!value["Id"].isNull())
			alertContactListObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			alertContactListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			alertContactListObject.gmtModified = value["GmtModified"].asString();
		if(!value["BizId"].isNull())
			alertContactListObject.bizId = value["BizId"].asString();
		if(!value["Name"].isNull())
			alertContactListObject.name = value["Name"].asString();
		if(!value["Email"].isNull())
			alertContactListObject.email = value["Email"].asString();
		if(!value["PhoneNumber"].isNull())
			alertContactListObject.phoneNumber = value["PhoneNumber"].asString();
		alertContactList_.push_back(alertContactListObject);
	}

}

std::vector<ListAlertContactsResult::AlertContact> ListAlertContactsResult::getAlertContactList()const
{
	return alertContactList_;
}

