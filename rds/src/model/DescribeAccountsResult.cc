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
	auto allAccountsNode = value["Accounts"]["DBInstanceAccount"];
	for (auto valueAccountsDBInstanceAccount : allAccountsNode)
	{
		DBInstanceAccount accountsObject;
		if(!valueAccountsDBInstanceAccount["DBInstanceId"].isNull())
			accountsObject.dBInstanceId = valueAccountsDBInstanceAccount["DBInstanceId"].asString();
		if(!valueAccountsDBInstanceAccount["AccountName"].isNull())
			accountsObject.accountName = valueAccountsDBInstanceAccount["AccountName"].asString();
		if(!valueAccountsDBInstanceAccount["AccountStatus"].isNull())
			accountsObject.accountStatus = valueAccountsDBInstanceAccount["AccountStatus"].asString();
		if(!valueAccountsDBInstanceAccount["AccountType"].isNull())
			accountsObject.accountType = valueAccountsDBInstanceAccount["AccountType"].asString();
		if(!valueAccountsDBInstanceAccount["AccountDescription"].isNull())
			accountsObject.accountDescription = valueAccountsDBInstanceAccount["AccountDescription"].asString();
		if(!valueAccountsDBInstanceAccount["PrivExceeded"].isNull())
			accountsObject.privExceeded = valueAccountsDBInstanceAccount["PrivExceeded"].asString();
		auto allDatabasePrivilegesNode = allAccountsNode["DatabasePrivileges"]["DatabasePrivilege"];
		for (auto allAccountsNodeDatabasePrivilegesDatabasePrivilege : allDatabasePrivilegesNode)
		{
			DBInstanceAccount::DatabasePrivilege databasePrivilegesObject;
			if(!allAccountsNodeDatabasePrivilegesDatabasePrivilege["DBName"].isNull())
				databasePrivilegesObject.dBName = allAccountsNodeDatabasePrivilegesDatabasePrivilege["DBName"].asString();
			if(!allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].isNull())
				databasePrivilegesObject.accountPrivilege = allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].asString();
			if(!allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilegeDetail"].isNull())
				databasePrivilegesObject.accountPrivilegeDetail = allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilegeDetail"].asString();
			accountsObject.databasePrivileges.push_back(databasePrivilegesObject);
		}
		accounts_.push_back(accountsObject);
	}
	if(!value["SystemAdminAccountStatus"].isNull())
		systemAdminAccountStatus_ = value["SystemAdminAccountStatus"].asString();
	if(!value["SystemAdminAccountFirstActivationTime"].isNull())
		systemAdminAccountFirstActivationTime_ = value["SystemAdminAccountFirstActivationTime"].asString();

}

std::string DescribeAccountsResult::getSystemAdminAccountStatus()const
{
	return systemAdminAccountStatus_;
}

std::vector<DescribeAccountsResult::DBInstanceAccount> DescribeAccountsResult::getAccounts()const
{
	return accounts_;
}

std::string DescribeAccountsResult::getSystemAdminAccountFirstActivationTime()const
{
	return systemAdminAccountFirstActivationTime_;
}

