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

#include <alibabacloud/rds/model/DescribeDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
		if(!valueDatabasesDatabase["DBName"].isNull())
			databasesObject.dBName = valueDatabasesDatabase["DBName"].asString();
		if(!valueDatabasesDatabase["DBInstanceId"].isNull())
			databasesObject.dBInstanceId = valueDatabasesDatabase["DBInstanceId"].asString();
		if(!valueDatabasesDatabase["Engine"].isNull())
			databasesObject.engine = valueDatabasesDatabase["Engine"].asString();
		if(!valueDatabasesDatabase["DBStatus"].isNull())
			databasesObject.dBStatus = valueDatabasesDatabase["DBStatus"].asString();
		if(!valueDatabasesDatabase["CharacterSetName"].isNull())
			databasesObject.characterSetName = valueDatabasesDatabase["CharacterSetName"].asString();
		if(!valueDatabasesDatabase["DBDescription"].isNull())
			databasesObject.dBDescription = valueDatabasesDatabase["DBDescription"].asString();
		auto allAccountsNode = allDatabasesNode["Accounts"]["AccountPrivilegeInfo"];
		for (auto allDatabasesNodeAccountsAccountPrivilegeInfo : allAccountsNode)
		{
			Database::AccountPrivilegeInfo accountsObject;
			if(!allDatabasesNodeAccountsAccountPrivilegeInfo["Account"].isNull())
				accountsObject.account = allDatabasesNodeAccountsAccountPrivilegeInfo["Account"].asString();
			if(!allDatabasesNodeAccountsAccountPrivilegeInfo["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = allDatabasesNodeAccountsAccountPrivilegeInfo["AccountPrivilege"].asString();
			if(!allDatabasesNodeAccountsAccountPrivilegeInfo["AccountPrivilegeDetail"].isNull())
				accountsObject.accountPrivilegeDetail = allDatabasesNodeAccountsAccountPrivilegeInfo["AccountPrivilegeDetail"].asString();
			databasesObject.accounts.push_back(accountsObject);
		}
		databases_.push_back(databasesObject);
	}

}

std::vector<DescribeDatabasesResult::Database> DescribeDatabasesResult::getDatabases()const
{
	return databases_;
}

