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

#include <alibabacloud/rds/model/DescribeHostAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeHostAccountsResult::DescribeHostAccountsResult() :
	ServiceResult()
{}

DescribeHostAccountsResult::DescribeHostAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHostAccountsResult::~DescribeHostAccountsResult()
{}

void DescribeHostAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["AccountsItem"];
	for (auto valueAccountsAccountsItem : allAccountsNode)
	{
		AccountsItem accountsObject;
		if(!valueAccountsAccountsItem["AccountName"].isNull())
			accountsObject.accountName = valueAccountsAccountsItem["AccountName"].asString();
		if(!valueAccountsAccountsItem["AccountType"].isNull())
			accountsObject.accountType = valueAccountsAccountsItem["AccountType"].asString();
		if(!valueAccountsAccountsItem["AccountDescription"].isNull())
			accountsObject.accountDescription = valueAccountsAccountsItem["AccountDescription"].asString();
		if(!valueAccountsAccountsItem["AccountStatus"].isNull())
			accountsObject.accountStatus = valueAccountsAccountsItem["AccountStatus"].asString();
		if(!valueAccountsAccountsItem["DBInstanceId"].isNull())
			accountsObject.dBInstanceId = valueAccountsAccountsItem["DBInstanceId"].asString();
		accounts_.push_back(accountsObject);
	}

}

std::vector<DescribeHostAccountsResult::AccountsItem> DescribeHostAccountsResult::getAccounts()const
{
	return accounts_;
}

