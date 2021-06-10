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

#include <alibabacloud/dms-enterprise/model/SearchTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

SearchTableResult::SearchTableResult() :
	ServiceResult()
{}

SearchTableResult::SearchTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTableResult::~SearchTableResult()
{}

void SearchTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSearchTableListNode = value["SearchTableList"]["SearchTable"];
	for (auto valueSearchTableListSearchTable : allSearchTableListNode)
	{
		SearchTable searchTableListObject;
		if(!valueSearchTableListSearchTable["DatabaseId"].isNull())
			searchTableListObject.databaseId = valueSearchTableListSearchTable["DatabaseId"].asString();
		if(!valueSearchTableListSearchTable["TableName"].isNull())
			searchTableListObject.tableName = valueSearchTableListSearchTable["TableName"].asString();
		if(!valueSearchTableListSearchTable["DBSearchName"].isNull())
			searchTableListObject.dBSearchName = valueSearchTableListSearchTable["DBSearchName"].asString();
		if(!valueSearchTableListSearchTable["Logic"].isNull())
			searchTableListObject.logic = valueSearchTableListSearchTable["Logic"].asString() == "true";
		if(!valueSearchTableListSearchTable["EnvType"].isNull())
			searchTableListObject.envType = valueSearchTableListSearchTable["EnvType"].asString();
		if(!valueSearchTableListSearchTable["DbName"].isNull())
			searchTableListObject.dbName = valueSearchTableListSearchTable["DbName"].asString();
		if(!valueSearchTableListSearchTable["Description"].isNull())
			searchTableListObject.description = valueSearchTableListSearchTable["Description"].asString();
		if(!valueSearchTableListSearchTable["Encoding"].isNull())
			searchTableListObject.encoding = valueSearchTableListSearchTable["Encoding"].asString();
		if(!valueSearchTableListSearchTable["DbType"].isNull())
			searchTableListObject.dbType = valueSearchTableListSearchTable["DbType"].asString();
		if(!valueSearchTableListSearchTable["TableSchemaName"].isNull())
			searchTableListObject.tableSchemaName = valueSearchTableListSearchTable["TableSchemaName"].asString();
		if(!valueSearchTableListSearchTable["TableGuid"].isNull())
			searchTableListObject.tableGuid = valueSearchTableListSearchTable["TableGuid"].asString();
		if(!valueSearchTableListSearchTable["Engine"].isNull())
			searchTableListObject.engine = valueSearchTableListSearchTable["Engine"].asString();
		if(!valueSearchTableListSearchTable["TableId"].isNull())
			searchTableListObject.tableId = valueSearchTableListSearchTable["TableId"].asString();
		auto allOwnerIdList = value["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			searchTableListObject.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = value["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			searchTableListObject.ownerNameList.push_back(value.asString());
		searchTableList_.push_back(searchTableListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<SearchTableResult::SearchTable> SearchTableResult::getSearchTableList()const
{
	return searchTableList_;
}

long SearchTableResult::getTotalCount()const
{
	return totalCount_;
}

std::string SearchTableResult::getErrorCode()const
{
	return errorCode_;
}

std::string SearchTableResult::getErrorMessage()const
{
	return errorMessage_;
}

bool SearchTableResult::getSuccess()const
{
	return success_;
}

