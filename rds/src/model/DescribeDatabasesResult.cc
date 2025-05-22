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
		if(!valueDatabasesDatabase["CharacterSetName"].isNull())
			databasesObject.characterSetName = valueDatabasesDatabase["CharacterSetName"].asString();
		if(!valueDatabasesDatabase["Collate"].isNull())
			databasesObject.collate = valueDatabasesDatabase["Collate"].asString();
		if(!valueDatabasesDatabase["ConnLimit"].isNull())
			databasesObject.connLimit = valueDatabasesDatabase["ConnLimit"].asString();
		if(!valueDatabasesDatabase["Ctype"].isNull())
			databasesObject.ctype = valueDatabasesDatabase["Ctype"].asString();
		if(!valueDatabasesDatabase["DBDescription"].isNull())
			databasesObject.dBDescription = valueDatabasesDatabase["DBDescription"].asString();
		if(!valueDatabasesDatabase["DBInstanceId"].isNull())
			databasesObject.dBInstanceId = valueDatabasesDatabase["DBInstanceId"].asString();
		if(!valueDatabasesDatabase["DBName"].isNull())
			databasesObject.dBName = valueDatabasesDatabase["DBName"].asString();
		if(!valueDatabasesDatabase["DBStatus"].isNull())
			databasesObject.dBStatus = valueDatabasesDatabase["DBStatus"].asString();
		if(!valueDatabasesDatabase["Engine"].isNull())
			databasesObject.engine = valueDatabasesDatabase["Engine"].asString();
		if(!valueDatabasesDatabase["PageNumber"].isNull())
			databasesObject.pageNumber = std::stoi(valueDatabasesDatabase["PageNumber"].asString());
		if(!valueDatabasesDatabase["PageSize"].isNull())
			databasesObject.pageSize = std::stoi(valueDatabasesDatabase["PageSize"].asString());
		if(!valueDatabasesDatabase["ResourceGroupId"].isNull())
			databasesObject.resourceGroupId = valueDatabasesDatabase["ResourceGroupId"].asString();
		if(!valueDatabasesDatabase["Tablespace"].isNull())
			databasesObject.tablespace = valueDatabasesDatabase["Tablespace"].asString();
		if(!valueDatabasesDatabase["TotalCount"].isNull())
			databasesObject.totalCount = std::stoi(valueDatabasesDatabase["TotalCount"].asString());
		auto allAccountsNode = valueDatabasesDatabase["Accounts"]["AccountPrivilegeInfo"];
		for (auto valueDatabasesDatabaseAccountsAccountPrivilegeInfo : allAccountsNode)
		{
			Database::AccountPrivilegeInfo accountsObject;
			if(!valueDatabasesDatabaseAccountsAccountPrivilegeInfo["Account"].isNull())
				accountsObject.account = valueDatabasesDatabaseAccountsAccountPrivilegeInfo["Account"].asString();
			if(!valueDatabasesDatabaseAccountsAccountPrivilegeInfo["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = valueDatabasesDatabaseAccountsAccountPrivilegeInfo["AccountPrivilege"].asString();
			if(!valueDatabasesDatabaseAccountsAccountPrivilegeInfo["AccountPrivilegeDetail"].isNull())
				accountsObject.accountPrivilegeDetail = valueDatabasesDatabaseAccountsAccountPrivilegeInfo["AccountPrivilegeDetail"].asString();
			databasesObject.accounts.push_back(accountsObject);
		}
		auto allAdvancedInfo = value["AdvancedInfo"]["AdvancedDbProperty"];
		for (auto value : allAdvancedInfo)
			databasesObject.advancedInfo.push_back(value.asString());
		auto allBasicInfo = value["BasicInfo"]["BasicDbProperty"];
		for (auto value : allBasicInfo)
			databasesObject.basicInfo.push_back(value.asString());
		auto allRuntimeInfo = value["RuntimeInfo"]["RuntimeDbProperty"];
		for (auto value : allRuntimeInfo)
			databasesObject.runtimeInfo.push_back(value.asString());
		databases_.push_back(databasesObject);
	}

}

std::vector<DescribeDatabasesResult::Database> DescribeDatabasesResult::getDatabases()const
{
	return databases_;
}

