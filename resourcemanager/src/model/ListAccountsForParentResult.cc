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

#include <alibabacloud/resourcemanager/model/ListAccountsForParentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListAccountsForParentResult::ListAccountsForParentResult() :
	ServiceResult()
{}

ListAccountsForParentResult::ListAccountsForParentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccountsForParentResult::~ListAccountsForParentResult()
{}

void ListAccountsForParentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["Account"];
	for (auto valueAccountsAccount : allAccountsNode)
	{
		Account accountsObject;
		if(!valueAccountsAccount["Status"].isNull())
			accountsObject.status = valueAccountsAccount["Status"].asString();
		if(!valueAccountsAccount["Type"].isNull())
			accountsObject.type = valueAccountsAccount["Type"].asString();
		if(!valueAccountsAccount["DisplayName"].isNull())
			accountsObject.displayName = valueAccountsAccount["DisplayName"].asString();
		if(!valueAccountsAccount["FolderId"].isNull())
			accountsObject.folderId = valueAccountsAccount["FolderId"].asString();
		if(!valueAccountsAccount["ResourceDirectoryId"].isNull())
			accountsObject.resourceDirectoryId = valueAccountsAccount["ResourceDirectoryId"].asString();
		if(!valueAccountsAccount["JoinTime"].isNull())
			accountsObject.joinTime = valueAccountsAccount["JoinTime"].asString();
		if(!valueAccountsAccount["AccountId"].isNull())
			accountsObject.accountId = valueAccountsAccount["AccountId"].asString();
		if(!valueAccountsAccount["JoinMethod"].isNull())
			accountsObject.joinMethod = valueAccountsAccount["JoinMethod"].asString();
		if(!valueAccountsAccount["ModifyTime"].isNull())
			accountsObject.modifyTime = valueAccountsAccount["ModifyTime"].asString();
		auto allTagsNode = valueAccountsAccount["Tags"]["Tag"];
		for (auto valueAccountsAccountTagsTag : allTagsNode)
		{
			Account::Tag tagsObject;
			if(!valueAccountsAccountTagsTag["Key"].isNull())
				tagsObject.key = valueAccountsAccountTagsTag["Key"].asString();
			if(!valueAccountsAccountTagsTag["Value"].isNull())
				tagsObject.value = valueAccountsAccountTagsTag["Value"].asString();
			accountsObject.tags.push_back(tagsObject);
		}
		accounts_.push_back(accountsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListAccountsForParentResult::getTotalCount()const
{
	return totalCount_;
}

int ListAccountsForParentResult::getPageSize()const
{
	return pageSize_;
}

int ListAccountsForParentResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAccountsForParentResult::Account> ListAccountsForParentResult::getAccounts()const
{
	return accounts_;
}

