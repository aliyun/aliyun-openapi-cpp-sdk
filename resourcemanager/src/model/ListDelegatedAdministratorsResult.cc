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

#include <alibabacloud/resourcemanager/model/ListDelegatedAdministratorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListDelegatedAdministratorsResult::ListDelegatedAdministratorsResult() :
	ServiceResult()
{}

ListDelegatedAdministratorsResult::ListDelegatedAdministratorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDelegatedAdministratorsResult::~ListDelegatedAdministratorsResult()
{}

void ListDelegatedAdministratorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["Account"];
	for (auto valueAccountsAccount : allAccountsNode)
	{
		Account accountsObject;
		if(!valueAccountsAccount["AccountId"].isNull())
			accountsObject.accountId = valueAccountsAccount["AccountId"].asString();
		if(!valueAccountsAccount["DisplayName"].isNull())
			accountsObject.displayName = valueAccountsAccount["DisplayName"].asString();
		if(!valueAccountsAccount["JoinMethod"].isNull())
			accountsObject.joinMethod = valueAccountsAccount["JoinMethod"].asString();
		if(!valueAccountsAccount["ServicePrincipal"].isNull())
			accountsObject.servicePrincipal = valueAccountsAccount["ServicePrincipal"].asString();
		if(!valueAccountsAccount["DelegationEnabledTime"].isNull())
			accountsObject.delegationEnabledTime = valueAccountsAccount["DelegationEnabledTime"].asString();
		accounts_.push_back(accountsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long ListDelegatedAdministratorsResult::getTotalCount()const
{
	return totalCount_;
}

long ListDelegatedAdministratorsResult::getPageSize()const
{
	return pageSize_;
}

long ListDelegatedAdministratorsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDelegatedAdministratorsResult::Account> ListDelegatedAdministratorsResult::getAccounts()const
{
	return accounts_;
}

