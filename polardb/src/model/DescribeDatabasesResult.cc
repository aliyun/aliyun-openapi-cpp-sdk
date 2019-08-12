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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDatabases = value["Databases"]["Database"];
	for (auto value : allDatabases)
	{
		Database databasesObject;
		if(!value["DBName"].isNull())
			databasesObject.dBName = value["DBName"].asString();
		if(!value["DBStatus"].isNull())
			databasesObject.dBStatus = value["DBStatus"].asString();
		if(!value["DBDescription"].isNull())
			databasesObject.dBDescription = value["DBDescription"].asString();
		if(!value["CharacterSetName"].isNull())
			databasesObject.characterSetName = value["CharacterSetName"].asString();
		if(!value["Engine"].isNull())
			databasesObject.engine = value["Engine"].asString();
		auto allAccounts = value["Accounts"]["Account"];
		for (auto value : allAccounts)
		{
			Database::Account accountsObject;
			if(!value["AccountName"].isNull())
				accountsObject.accountName = value["AccountName"].asString();
			if(!value["AccountStatus"].isNull())
				accountsObject.accountStatus = value["AccountStatus"].asString();
			if(!value["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = value["AccountPrivilege"].asString();
			if(!value["PrivilegeStatus"].isNull())
				accountsObject.privilegeStatus = value["PrivilegeStatus"].asString();
			databasesObject.accounts.push_back(accountsObject);
		}
		databases_.push_back(databasesObject);
	}

}

std::vector<DescribeDatabasesResult::Database> DescribeDatabasesResult::getDatabases()const
{
	return databases_;
}

