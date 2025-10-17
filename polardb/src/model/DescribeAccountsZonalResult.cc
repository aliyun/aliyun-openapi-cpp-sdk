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

#include <alibabacloud/polardb/model/DescribeAccountsZonalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeAccountsZonalResult::DescribeAccountsZonalResult() :
	ServiceResult()
{}

DescribeAccountsZonalResult::DescribeAccountsZonalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountsZonalResult::~DescribeAccountsZonalResult()
{}

void DescribeAccountsZonalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["DBAccount"];
	for (auto valueAccountsDBAccount : allAccountsNode)
	{
		DBAccount accountsObject;
		if(!valueAccountsDBAccount["AccountDescription"].isNull())
			accountsObject.accountDescription = valueAccountsDBAccount["AccountDescription"].asString();
		if(!valueAccountsDBAccount["AccountStatus"].isNull())
			accountsObject.accountStatus = valueAccountsDBAccount["AccountStatus"].asString();
		if(!valueAccountsDBAccount["PrivilegeExceeded"].isNull())
			accountsObject.privilegeExceeded = valueAccountsDBAccount["PrivilegeExceeded"].asString();
		if(!valueAccountsDBAccount["DynamoDBAuthPassword"].isNull())
			accountsObject.dynamoDBAuthPassword = valueAccountsDBAccount["DynamoDBAuthPassword"].asString();
		if(!valueAccountsDBAccount["AccountLockState"].isNull())
			accountsObject.accountLockState = valueAccountsDBAccount["AccountLockState"].asString();
		if(!valueAccountsDBAccount["AccountPasswordValidTime"].isNull())
			accountsObject.accountPasswordValidTime = valueAccountsDBAccount["AccountPasswordValidTime"].asString();
		if(!valueAccountsDBAccount["AccountType"].isNull())
			accountsObject.accountType = valueAccountsDBAccount["AccountType"].asString();
		if(!valueAccountsDBAccount["TairPasswordSetted"].isNull())
			accountsObject.tairPasswordSetted = valueAccountsDBAccount["TairPasswordSetted"].asString();
		if(!valueAccountsDBAccount["AccountName"].isNull())
			accountsObject.accountName = valueAccountsDBAccount["AccountName"].asString();
		if(!valueAccountsDBAccount["AccountPassword"].isNull())
			accountsObject.accountPassword = valueAccountsDBAccount["AccountPassword"].asString();
		auto allDatabasePrivilegesNode = valueAccountsDBAccount["DatabasePrivileges"]["DatabasePrivilege"];
		for (auto valueAccountsDBAccountDatabasePrivilegesDatabasePrivilege : allDatabasePrivilegesNode)
		{
			DBAccount::DatabasePrivilege databasePrivilegesObject;
			if(!valueAccountsDBAccountDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].isNull())
				databasePrivilegesObject.accountPrivilege = valueAccountsDBAccountDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].asString();
			if(!valueAccountsDBAccountDatabasePrivilegesDatabasePrivilege["DBName"].isNull())
				databasePrivilegesObject.dBName = valueAccountsDBAccountDatabasePrivilegesDatabasePrivilege["DBName"].asString();
			accountsObject.databasePrivileges.push_back(databasePrivilegesObject);
		}
		accounts_.push_back(accountsObject);
	}
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeAccountsZonalResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeAccountsZonalResult::getNextToken()const
{
	return nextToken_;
}

int DescribeAccountsZonalResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeAccountsZonalResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeAccountsZonalResult::DBAccount> DescribeAccountsZonalResult::getAccounts()const
{
	return accounts_;
}

