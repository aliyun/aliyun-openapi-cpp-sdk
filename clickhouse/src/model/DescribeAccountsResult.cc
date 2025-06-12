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

#include <alibabacloud/clickhouse/model/DescribeAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

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
	auto allAccountsNode = value["Accounts"]["Account"];
	for (auto valueAccountsAccount : allAccountsNode)
	{
		Account accountsObject;
		if(!valueAccountsAccount["AccountStatus"].isNull())
			accountsObject.accountStatus = valueAccountsAccount["AccountStatus"].asString();
		if(!valueAccountsAccount["AccountDescription"].isNull())
			accountsObject.accountDescription = valueAccountsAccount["AccountDescription"].asString();
		if(!valueAccountsAccount["AccountType"].isNull())
			accountsObject.accountType = valueAccountsAccount["AccountType"].asString();
		if(!valueAccountsAccount["AccountName"].isNull())
			accountsObject.accountName = valueAccountsAccount["AccountName"].asString();
		if(!valueAccountsAccount["ConfigType"].isNull())
			accountsObject.configType = valueAccountsAccount["ConfigType"].asString();
		accounts_.push_back(accountsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeAccountsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccountsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccountsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAccountsResult::Account> DescribeAccountsResult::getAccounts()const
{
	return accounts_;
}

