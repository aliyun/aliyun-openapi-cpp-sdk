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

#include <alibabacloud/rds/model/DescribeAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allAccounts = value["Accounts"]["DBInstanceAccount"];
	for (auto value : allAccounts)
	{
		DBInstanceAccount accountsObject;
		if(!value["DBInstanceId"].isNull())
			accountsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["AccountName"].isNull())
			accountsObject.accountName = value["AccountName"].asString();
		if(!value["AccountStatus"].isNull())
			accountsObject.accountStatus = value["AccountStatus"].asString();
		if(!value["AccountType"].isNull())
			accountsObject.accountType = value["AccountType"].asString();
		if(!value["AccountDescription"].isNull())
			accountsObject.accountDescription = value["AccountDescription"].asString();
		if(!value["PrivExceeded"].isNull())
			accountsObject.privExceeded = value["PrivExceeded"].asString();
		auto allDatabasePrivileges = value["DatabasePrivileges"]["DatabasePrivilege"];
		for (auto value : allDatabasePrivileges)
		{
			DBInstanceAccount::DatabasePrivilege databasePrivilegesObject;
			if(!value["DBName"].isNull())
				databasePrivilegesObject.dBName = value["DBName"].asString();
			if(!value["AccountPrivilege"].isNull())
				databasePrivilegesObject.accountPrivilege = value["AccountPrivilege"].asString();
			if(!value["AccountPrivilegeDetail"].isNull())
				databasePrivilegesObject.accountPrivilegeDetail = value["AccountPrivilegeDetail"].asString();
			accountsObject.databasePrivileges.push_back(databasePrivilegesObject);
		}
		accounts_.push_back(accountsObject);
	}

}

std::vector<DescribeAccountsResult::DBInstanceAccount> DescribeAccountsResult::getAccounts()const
{
	return accounts_;
}

