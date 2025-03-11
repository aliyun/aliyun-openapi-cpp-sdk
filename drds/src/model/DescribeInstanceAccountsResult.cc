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

#include <alibabacloud/drds/model/DescribeInstanceAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeInstanceAccountsResult::DescribeInstanceAccountsResult() :
	ServiceResult()
{}

DescribeInstanceAccountsResult::DescribeInstanceAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAccountsResult::~DescribeInstanceAccountsResult()
{}

void DescribeInstanceAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceAccountsNode = value["InstanceAccounts"]["InstanceAccount"];
	for (auto valueInstanceAccountsInstanceAccount : allInstanceAccountsNode)
	{
		InstanceAccount instanceAccountsObject;
		if(!valueInstanceAccountsInstanceAccount["Host"].isNull())
			instanceAccountsObject.host = valueInstanceAccountsInstanceAccount["Host"].asString();
		if(!valueInstanceAccountsInstanceAccount["Description"].isNull())
			instanceAccountsObject.description = valueInstanceAccountsInstanceAccount["Description"].asString();
		if(!valueInstanceAccountsInstanceAccount["AccountType"].isNull())
			instanceAccountsObject.accountType = std::stoi(valueInstanceAccountsInstanceAccount["AccountType"].asString());
		if(!valueInstanceAccountsInstanceAccount["AccountName"].isNull())
			instanceAccountsObject.accountName = valueInstanceAccountsInstanceAccount["AccountName"].asString();
		auto allDbPrivilegesNode = valueInstanceAccountsInstanceAccount["DbPrivileges"]["DbPrivilege"];
		for (auto valueInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege : allDbPrivilegesNode)
		{
			InstanceAccount::DbPrivilege dbPrivilegesObject;
			if(!valueInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege["DbName"].isNull())
				dbPrivilegesObject.dbName = valueInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege["DbName"].asString();
			if(!valueInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege["Privilege"].isNull())
				dbPrivilegesObject.privilege = valueInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege["Privilege"].asString();
			instanceAccountsObject.dbPrivileges.push_back(dbPrivilegesObject);
		}
		instanceAccounts_.push_back(instanceAccountsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeInstanceAccountsResult::InstanceAccount> DescribeInstanceAccountsResult::getInstanceAccounts()const
{
	return instanceAccounts_;
}

bool DescribeInstanceAccountsResult::getSuccess()const
{
	return success_;
}

