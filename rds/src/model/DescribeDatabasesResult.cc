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
		Database databaseObject;
		databaseObject.dBName = value["DBName"].asString();
		databaseObject.dBInstanceId = value["DBInstanceId"].asString();
		databaseObject.engine = value["Engine"].asString();
		databaseObject.dBStatus = value["DBStatus"].asString();
		databaseObject.characterSetName = value["CharacterSetName"].asString();
		databaseObject.dBDescription = value["DBDescription"].asString();
		auto allAccounts = value["Accounts"]["AccountPrivilegeInfo"];
		for (auto value : allAccounts)
		{
			Database::AccountPrivilegeInfo accountPrivilegeInfoObject;
			accountPrivilegeInfoObject.account = value["Account"].asString();
			accountPrivilegeInfoObject.accountPrivilege = value["AccountPrivilege"].asString();
			databaseObject.accounts.push_back(accountPrivilegeInfoObject);
		}
		databases_.push_back(databaseObject);
	}

}

