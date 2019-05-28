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
	auto allDatabases = value["Databases"]["Database"];
	for (auto value : allDatabases)
	{
		Database databasesObject;
		if(!value["DBName"].isNull())
			databasesObject.dBName = value["DBName"].asString();
		if(!value["DBInstanceId"].isNull())
			databasesObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["Engine"].isNull())
			databasesObject.engine = value["Engine"].asString();
		if(!value["DBStatus"].isNull())
			databasesObject.dBStatus = value["DBStatus"].asString();
		if(!value["CharacterSetName"].isNull())
			databasesObject.characterSetName = value["CharacterSetName"].asString();
		if(!value["DBDescription"].isNull())
			databasesObject.dBDescription = value["DBDescription"].asString();
		auto allAccounts = value["Accounts"]["AccountPrivilegeInfo"];
		for (auto value : allAccounts)
		{
			Database::AccountPrivilegeInfo accountsObject;
			if(!value["Account"].isNull())
				accountsObject.account = value["Account"].asString();
			if(!value["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = value["AccountPrivilege"].asString();
			if(!value["AccountPrivilegeDetail"].isNull())
				accountsObject.accountPrivilegeDetail = value["AccountPrivilegeDetail"].asString();
			databasesObject.accounts.push_back(accountsObject);
		}
		databases_.push_back(databasesObject);
	}

}

std::vector<DescribeDatabasesResult::Database> DescribeDatabasesResult::getDatabases()const
{
	return databases_;
}

