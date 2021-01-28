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

#include <alibabacloud/retailcloud/model/DescribeDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeDatabasesResult::DescribeDatabasesResult() :
	ServiceResult()
{}

DescribeDatabasesResult::DescribeDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatabasesResult::~DescribeDatabasesResult()
{}

void DescribeDatabasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allDatabasesNode = resultNode["Databases"]["DatabasesItem"];
	for (auto resultNodeDatabasesDatabasesItem : allDatabasesNode)
	{
		Result::DatabasesItem databasesItemObject;
		if(!resultNodeDatabasesDatabasesItem["DBName"].isNull())
			databasesItemObject.dBName = resultNodeDatabasesDatabasesItem["DBName"].asString();
		if(!resultNodeDatabasesDatabasesItem["DBStatus"].isNull())
			databasesItemObject.dBStatus = resultNodeDatabasesDatabasesItem["DBStatus"].asString();
		if(!resultNodeDatabasesDatabasesItem["DBDescription"].isNull())
			databasesItemObject.dBDescription = resultNodeDatabasesDatabasesItem["DBDescription"].asString();
		if(!resultNodeDatabasesDatabasesItem["Engine"].isNull())
			databasesItemObject.engine = resultNodeDatabasesDatabasesItem["Engine"].asString();
		if(!resultNodeDatabasesDatabasesItem["CharacterSetName"].isNull())
			databasesItemObject.characterSetName = resultNodeDatabasesDatabasesItem["CharacterSetName"].asString();
		if(!resultNodeDatabasesDatabasesItem["DBInstanceId"].isNull())
			databasesItemObject.dBInstanceId = resultNodeDatabasesDatabasesItem["DBInstanceId"].asString();
		auto allAccountsNode = resultNodeDatabasesDatabasesItem["Accounts"]["AccountsItem"];
		for (auto resultNodeDatabasesDatabasesItemAccountsAccountsItem : allAccountsNode)
		{
			Result::DatabasesItem::AccountsItem accountsObject;
			if(!resultNodeDatabasesDatabasesItemAccountsAccountsItem["AccountPrivilegeDetail"].isNull())
				accountsObject.accountPrivilegeDetail = resultNodeDatabasesDatabasesItemAccountsAccountsItem["AccountPrivilegeDetail"].asString();
			if(!resultNodeDatabasesDatabasesItemAccountsAccountsItem["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = resultNodeDatabasesDatabasesItemAccountsAccountsItem["AccountPrivilege"].asString();
			if(!resultNodeDatabasesDatabasesItemAccountsAccountsItem["Account"].isNull())
				accountsObject.account = resultNodeDatabasesDatabasesItemAccountsAccountsItem["Account"].asString();
			databasesItemObject.accounts.push_back(accountsObject);
		}
		result_.databases.push_back(databasesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string DescribeDatabasesResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeDatabasesResult::getCode()const
{
	return code_;
}

DescribeDatabasesResult::Result DescribeDatabasesResult::getResult()const
{
	return result_;
}

