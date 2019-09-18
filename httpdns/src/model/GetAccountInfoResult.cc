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

#include <alibabacloud/httpdns/model/GetAccountInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Httpdns;
using namespace AlibabaCloud::Httpdns::Model;

GetAccountInfoResult::GetAccountInfoResult() :
	ServiceResult()
{}

GetAccountInfoResult::GetAccountInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountInfoResult::~GetAccountInfoResult()
{}

void GetAccountInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accountInfoNode = value["AccountInfo"];
	if(!accountInfoNode["AccountId"].isNull())
		accountInfo_.accountId = accountInfoNode["AccountId"].asString();
	if(!accountInfoNode["MonthFreeCount"].isNull())
		accountInfo_.monthFreeCount = std::stoi(accountInfoNode["MonthFreeCount"].asString());
	if(!accountInfoNode["MonthHttpsResolveCount"].isNull())
		accountInfo_.monthHttpsResolveCount = std::stoi(accountInfoNode["MonthHttpsResolveCount"].asString());
	if(!accountInfoNode["MonthResolveCount"].isNull())
		accountInfo_.monthResolveCount = std::stoi(accountInfoNode["MonthResolveCount"].asString());
	if(!accountInfoNode["PackageCount"].isNull())
		accountInfo_.packageCount = std::stoi(accountInfoNode["PackageCount"].asString());
	if(!accountInfoNode["UserStatus"].isNull())
		accountInfo_.userStatus = std::stoi(accountInfoNode["UserStatus"].asString());
	if(!accountInfoNode["SignSecret"].isNull())
		accountInfo_.signSecret = accountInfoNode["SignSecret"].asString();
	if(!accountInfoNode["UnsignedEnabled"].isNull())
		accountInfo_.unsignedEnabled = accountInfoNode["UnsignedEnabled"].asString() == "true";
	if(!accountInfoNode["SignedCount"].isNull())
		accountInfo_.signedCount = std::stol(accountInfoNode["SignedCount"].asString());
	if(!accountInfoNode["UnsignedCount"].isNull())
		accountInfo_.unsignedCount = std::stol(accountInfoNode["UnsignedCount"].asString());

}

GetAccountInfoResult::AccountInfo GetAccountInfoResult::getAccountInfo()const
{
	return accountInfo_;
}

