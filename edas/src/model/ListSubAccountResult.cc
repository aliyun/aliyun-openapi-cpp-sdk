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

#include <alibabacloud/edas/model/ListSubAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListSubAccountResult::ListSubAccountResult() :
	ServiceResult()
{}

ListSubAccountResult::ListSubAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSubAccountResult::~ListSubAccountResult()
{}

void ListSubAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubAccountListNode = value["SubAccountList"]["SubAccount"];
	for (auto valueSubAccountListSubAccount : allSubAccountListNode)
	{
		SubAccount subAccountListObject;
		if(!valueSubAccountListSubAccount["AdminUserId"].isNull())
			subAccountListObject.adminUserId = valueSubAccountListSubAccount["AdminUserId"].asString();
		if(!valueSubAccountListSubAccount["SubUserId"].isNull())
			subAccountListObject.subUserId = valueSubAccountListSubAccount["SubUserId"].asString();
		if(!valueSubAccountListSubAccount["Email"].isNull())
			subAccountListObject.email = valueSubAccountListSubAccount["Email"].asString();
		if(!valueSubAccountListSubAccount["Phone"].isNull())
			subAccountListObject.phone = valueSubAccountListSubAccount["Phone"].asString();
		if(!valueSubAccountListSubAccount["AdminUserKp"].isNull())
			subAccountListObject.adminUserKp = valueSubAccountListSubAccount["AdminUserKp"].asString();
		if(!valueSubAccountListSubAccount["SubUserKp"].isNull())
			subAccountListObject.subUserKp = valueSubAccountListSubAccount["SubUserKp"].asString();
		if(!valueSubAccountListSubAccount["AdminEdasId"].isNull())
			subAccountListObject.adminEdasId = valueSubAccountListSubAccount["AdminEdasId"].asString();
		if(!valueSubAccountListSubAccount["SubEdasId"].isNull())
			subAccountListObject.subEdasId = valueSubAccountListSubAccount["SubEdasId"].asString();
		subAccountList_.push_back(subAccountListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSubAccountResult::getMessage()const
{
	return message_;
}

std::vector<ListSubAccountResult::SubAccount> ListSubAccountResult::getSubAccountList()const
{
	return subAccountList_;
}

int ListSubAccountResult::getCode()const
{
	return code_;
}

