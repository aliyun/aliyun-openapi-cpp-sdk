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

#include <alibabacloud/dds/model/DescribeAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAccounts = value["Accounts"]["Account"];
	for (auto value : allAccounts)
	{
		Account accountsObject;
		if(!value["DBInstanceId"].isNull())
			accountsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["AccountName"].isNull())
			accountsObject.accountName = value["AccountName"].asString();
		if(!value["AccountStatus"].isNull())
			accountsObject.accountStatus = value["AccountStatus"].asString();
		if(!value["AccountDescription"].isNull())
			accountsObject.accountDescription = value["AccountDescription"].asString();
		if(!value["CharacterType"].isNull())
			accountsObject.characterType = value["CharacterType"].asString();
		accounts_.push_back(accountsObject);
	}

}

std::vector<DescribeAccountsResult::Account> DescribeAccountsResult::getAccounts()const
{
	return accounts_;
}

