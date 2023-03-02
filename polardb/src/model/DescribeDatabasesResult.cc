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

#include <alibabacloud/polardb/model/DescribeDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
	auto allDatabasesNode = value["Databases"]["Database"];
	for (auto valueDatabasesDatabase : allDatabasesNode)
	{
		Database databasesObject;
		if(!valueDatabasesDatabase["DBDescription"].isNull())
			databasesObject.dBDescription = valueDatabasesDatabase["DBDescription"].asString();
		if(!valueDatabasesDatabase["DBStatus"].isNull())
			databasesObject.dBStatus = valueDatabasesDatabase["DBStatus"].asString();
		if(!valueDatabasesDatabase["DBName"].isNull())
			databasesObject.dBName = valueDatabasesDatabase["DBName"].asString();
		if(!valueDatabasesDatabase["Engine"].isNull())
			databasesObject.engine = valueDatabasesDatabase["Engine"].asString();
		if(!valueDatabasesDatabase["MasterID"].isNull())
			databasesObject.masterID = valueDatabasesDatabase["MasterID"].asString();
		if(!valueDatabasesDatabase["CharacterSetName"].isNull())
			databasesObject.characterSetName = valueDatabasesDatabase["CharacterSetName"].asString();
		auto allAccountsNode = valueDatabasesDatabase["Accounts"]["Account"];
		for (auto valueDatabasesDatabaseAccountsAccount : allAccountsNode)
		{
			Database::Account accountsObject;
			if(!valueDatabasesDatabaseAccountsAccount["PrivilegeStatus"].isNull())
				accountsObject.privilegeStatus = valueDatabasesDatabaseAccountsAccount["PrivilegeStatus"].asString();
			if(!valueDatabasesDatabaseAccountsAccount["AccountStatus"].isNull())
				accountsObject.accountStatus = valueDatabasesDatabaseAccountsAccount["AccountStatus"].asString();
			if(!valueDatabasesDatabaseAccountsAccount["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = valueDatabasesDatabaseAccountsAccount["AccountPrivilege"].asString();
			if(!valueDatabasesDatabaseAccountsAccount["AccountName"].isNull())
				accountsObject.accountName = valueDatabasesDatabaseAccountsAccount["AccountName"].asString();
			databasesObject.accounts.push_back(accountsObject);
		}
		databases_.push_back(databasesObject);
	}
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeDatabasesResult::Database> DescribeDatabasesResult::getDatabases()const
{
	return databases_;
}

int DescribeDatabasesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDatabasesResult::getPageNumber()const
{
	return pageNumber_;
}

