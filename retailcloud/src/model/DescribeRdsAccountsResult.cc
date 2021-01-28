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

#include <alibabacloud/retailcloud/model/DescribeRdsAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeRdsAccountsResult::DescribeRdsAccountsResult() :
	ServiceResult()
{}

DescribeRdsAccountsResult::DescribeRdsAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsAccountsResult::~DescribeRdsAccountsResult()
{}

void DescribeRdsAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allAccountsNode = resultNode["Accounts"]["AccountsItem"];
	for (auto resultNodeAccountsAccountsItem : allAccountsNode)
	{
		Result::AccountsItem accountsItemObject;
		if(!resultNodeAccountsAccountsItem["AccountStatus"].isNull())
			accountsItemObject.accountStatus = resultNodeAccountsAccountsItem["AccountStatus"].asString();
		if(!resultNodeAccountsAccountsItem["AccountDescription"].isNull())
			accountsItemObject.accountDescription = resultNodeAccountsAccountsItem["AccountDescription"].asString();
		if(!resultNodeAccountsAccountsItem["AccountName"].isNull())
			accountsItemObject.accountName = resultNodeAccountsAccountsItem["AccountName"].asString();
		if(!resultNodeAccountsAccountsItem["AccountType"].isNull())
			accountsItemObject.accountType = resultNodeAccountsAccountsItem["AccountType"].asString();
		if(!resultNodeAccountsAccountsItem["PrivExceeded"].isNull())
			accountsItemObject.privExceeded = resultNodeAccountsAccountsItem["PrivExceeded"].asString();
		if(!resultNodeAccountsAccountsItem["DBInstanceId"].isNull())
			accountsItemObject.dBInstanceId = resultNodeAccountsAccountsItem["DBInstanceId"].asString();
		auto allDatabasePrivilegesNode = resultNodeAccountsAccountsItem["DatabasePrivileges"]["DatabasePrivilegesItem"];
		for (auto resultNodeAccountsAccountsItemDatabasePrivilegesDatabasePrivilegesItem : allDatabasePrivilegesNode)
		{
			Result::AccountsItem::DatabasePrivilegesItem databasePrivilegesObject;
			if(!resultNodeAccountsAccountsItemDatabasePrivilegesDatabasePrivilegesItem["DBName"].isNull())
				databasePrivilegesObject.dBName = resultNodeAccountsAccountsItemDatabasePrivilegesDatabasePrivilegesItem["DBName"].asString();
			if(!resultNodeAccountsAccountsItemDatabasePrivilegesDatabasePrivilegesItem["AccountPrivilege"].isNull())
				databasePrivilegesObject.accountPrivilege = resultNodeAccountsAccountsItemDatabasePrivilegesDatabasePrivilegesItem["AccountPrivilege"].asString();
			if(!resultNodeAccountsAccountsItemDatabasePrivilegesDatabasePrivilegesItem["AccountPrivilegeDetail"].isNull())
				databasePrivilegesObject.accountPrivilegeDetail = resultNodeAccountsAccountsItemDatabasePrivilegesDatabasePrivilegesItem["AccountPrivilegeDetail"].asString();
			accountsItemObject.databasePrivileges.push_back(databasePrivilegesObject);
		}
		result_.accounts.push_back(accountsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string DescribeRdsAccountsResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeRdsAccountsResult::getCode()const
{
	return code_;
}

DescribeRdsAccountsResult::Result DescribeRdsAccountsResult::getResult()const
{
	return result_;
}

