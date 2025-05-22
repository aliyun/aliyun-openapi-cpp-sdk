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
		if(!valueAccountsDBInstanceAccount["AccountDescription"].isNull())
			accountsObject.accountDescription = valueAccountsDBInstanceAccount["AccountDescription"].asString();
		if(!valueAccountsDBInstanceAccount["AccountName"].isNull())
			accountsObject.accountName = valueAccountsDBInstanceAccount["AccountName"].asString();
		if(!valueAccountsDBInstanceAccount["AccountStatus"].isNull())
			accountsObject.accountStatus = valueAccountsDBInstanceAccount["AccountStatus"].asString();
		if(!valueAccountsDBInstanceAccount["AccountType"].isNull())
			accountsObject.accountType = valueAccountsDBInstanceAccount["AccountType"].asString();
		if(!valueAccountsDBInstanceAccount["BypassRLS"].isNull())
			accountsObject.bypassRLS = valueAccountsDBInstanceAccount["BypassRLS"].asString();
		if(!valueAccountsDBInstanceAccount["CheckPolicy"].isNull())
			accountsObject.checkPolicy = valueAccountsDBInstanceAccount["CheckPolicy"].asString() == "true";
		if(!valueAccountsDBInstanceAccount["CreateDB"].isNull())
			accountsObject.createDB = valueAccountsDBInstanceAccount["CreateDB"].asString();
		if(!valueAccountsDBInstanceAccount["CreateRole"].isNull())
			accountsObject.createRole = valueAccountsDBInstanceAccount["CreateRole"].asString();
		if(!valueAccountsDBInstanceAccount["DBInstanceId"].isNull())
			accountsObject.dBInstanceId = valueAccountsDBInstanceAccount["DBInstanceId"].asString();
		if(!valueAccountsDBInstanceAccount["PasswordExpireTime"].isNull())
			accountsObject.passwordExpireTime = valueAccountsDBInstanceAccount["PasswordExpireTime"].asString();
		if(!valueAccountsDBInstanceAccount["PrivExceeded"].isNull())
			accountsObject.privExceeded = valueAccountsDBInstanceAccount["PrivExceeded"].asString();
		if(!valueAccountsDBInstanceAccount["Replication"].isNull())
			accountsObject.replication = valueAccountsDBInstanceAccount["Replication"].asString();
		if(!valueAccountsDBInstanceAccount["ValidUntil"].isNull())
			accountsObject.validUntil = valueAccountsDBInstanceAccount["ValidUntil"].asString();
		auto allDatabasePrivilegesNode = valueAccountsDBInstanceAccount["DatabasePrivileges"]["DatabasePrivilege"];
		for (auto valueAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege : allDatabasePrivilegesNode)
		{
			DBInstanceAccount::DatabasePrivilege databasePrivilegesObject;
			if(!valueAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].isNull())
				databasePrivilegesObject.accountPrivilege = valueAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].asString();
			if(!valueAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege["AccountPrivilegeDetail"].isNull())
				databasePrivilegesObject.accountPrivilegeDetail = valueAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege["AccountPrivilegeDetail"].asString();
			if(!valueAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege["DBName"].isNull())
				databasePrivilegesObject.dBName = valueAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege["DBName"].asString();
			accountsObject.databasePrivileges.push_back(databasePrivilegesObject);
		}
		accounts_.push_back(accountsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["SystemAdminAccountFirstActivationTime"].isNull())
		systemAdminAccountFirstActivationTime_ = value["SystemAdminAccountFirstActivationTime"].asString();
	if(!value["SystemAdminAccountStatus"].isNull())
		systemAdminAccountStatus_ = value["SystemAdminAccountStatus"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

int DescribeAccountsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeAccountsResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

int DescribeAccountsResult::getPageNumber()const
{
	return pageNumber_;
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

