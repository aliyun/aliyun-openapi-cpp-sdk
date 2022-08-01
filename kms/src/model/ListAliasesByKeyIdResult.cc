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

#include <alibabacloud/kms/model/ListAliasesByKeyIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListAliasesByKeyIdResult::ListAliasesByKeyIdResult() :
	ServiceResult()
{}

ListAliasesByKeyIdResult::ListAliasesByKeyIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAliasesByKeyIdResult::~ListAliasesByKeyIdResult()
{}

void ListAliasesByKeyIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAliasesNode = value["Aliases"]["Alias"];
	for (auto valueAliasesAlias : allAliasesNode)
	{
		Alias aliasesObject;
		if(!valueAliasesAlias["KeyId"].isNull())
			aliasesObject.keyId = valueAliasesAlias["KeyId"].asString();
		if(!valueAliasesAlias["AliasArn"].isNull())
			aliasesObject.aliasArn = valueAliasesAlias["AliasArn"].asString();
		if(!valueAliasesAlias["AliasName"].isNull())
			aliasesObject.aliasName = valueAliasesAlias["AliasName"].asString();
		aliases_.push_back(aliasesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListAliasesByKeyIdResult::getTotalCount()const
{
	return totalCount_;
}

int ListAliasesByKeyIdResult::getPageSize()const
{
	return pageSize_;
}

int ListAliasesByKeyIdResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAliasesByKeyIdResult::Alias> ListAliasesByKeyIdResult::getAliases()const
{
	return aliases_;
}

