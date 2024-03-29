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

#include <alibabacloud/adb/model/DescribeAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeAccountsResult::DescribeAccountsResult() :
	ServiceResult()
{}

DescribeAccountsResult::DescribeAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountsResult::~DescribeAccountsResult()
{}

void DescribeAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountListNode = value["AccountList"]["DBAccount"];
	for (auto valueAccountListDBAccount : allAccountListNode)
	{
		DBAccount accountListObject;
		if(!valueAccountListDBAccount["AccountStatus"].isNull())
			accountListObject.accountStatus = valueAccountListDBAccount["AccountStatus"].asString();
		if(!valueAccountListDBAccount["AccountDescription"].isNull())
			accountListObject.accountDescription = valueAccountListDBAccount["AccountDescription"].asString();
		if(!valueAccountListDBAccount["AccountType"].isNull())
			accountListObject.accountType = valueAccountListDBAccount["AccountType"].asString();
		if(!valueAccountListDBAccount["AccountName"].isNull())
			accountListObject.accountName = valueAccountListDBAccount["AccountName"].asString();
		accountList_.push_back(accountListObject);
	}

}

std::vector<DescribeAccountsResult::DBAccount> DescribeAccountsResult::getAccountList()const
{
	return accountList_;
}

