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

#include <alibabacloud/dms-enterprise/model/SearchDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

SearchDatabaseResult::SearchDatabaseResult() :
	ServiceResult()
{}

SearchDatabaseResult::SearchDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchDatabaseResult::~SearchDatabaseResult()
{}

void SearchDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSearchDatabaseListNode = value["SearchDatabaseList"]["SearchDatabase"];
	for (auto valueSearchDatabaseListSearchDatabase : allSearchDatabaseListNode)
	{
		SearchDatabase searchDatabaseListObject;
		if(!valueSearchDatabaseListSearchDatabase["DatabaseId"].isNull())
			searchDatabaseListObject.databaseId = valueSearchDatabaseListSearchDatabase["DatabaseId"].asString();
		if(!valueSearchDatabaseListSearchDatabase["Host"].isNull())
			searchDatabaseListObject.host = valueSearchDatabaseListSearchDatabase["Host"].asString();
		if(!valueSearchDatabaseListSearchDatabase["DbaId"].isNull())
			searchDatabaseListObject.dbaId = valueSearchDatabaseListSearchDatabase["DbaId"].asString();
		if(!valueSearchDatabaseListSearchDatabase["SchemaName"].isNull())
			searchDatabaseListObject.schemaName = valueSearchDatabaseListSearchDatabase["SchemaName"].asString();
		if(!valueSearchDatabaseListSearchDatabase["Logic"].isNull())
			searchDatabaseListObject.logic = valueSearchDatabaseListSearchDatabase["Logic"].asString() == "true";
		if(!valueSearchDatabaseListSearchDatabase["DatalinkName"].isNull())
			searchDatabaseListObject.datalinkName = valueSearchDatabaseListSearchDatabase["DatalinkName"].asString();
		if(!valueSearchDatabaseListSearchDatabase["Port"].isNull())
			searchDatabaseListObject.port = std::stoi(valueSearchDatabaseListSearchDatabase["Port"].asString());
		if(!valueSearchDatabaseListSearchDatabase["EnvType"].isNull())
			searchDatabaseListObject.envType = valueSearchDatabaseListSearchDatabase["EnvType"].asString();
		if(!valueSearchDatabaseListSearchDatabase["Sid"].isNull())
			searchDatabaseListObject.sid = valueSearchDatabaseListSearchDatabase["Sid"].asString();
		if(!valueSearchDatabaseListSearchDatabase["Encoding"].isNull())
			searchDatabaseListObject.encoding = valueSearchDatabaseListSearchDatabase["Encoding"].asString();
		if(!valueSearchDatabaseListSearchDatabase["DbType"].isNull())
			searchDatabaseListObject.dbType = valueSearchDatabaseListSearchDatabase["DbType"].asString();
		if(!valueSearchDatabaseListSearchDatabase["SearchName"].isNull())
			searchDatabaseListObject.searchName = valueSearchDatabaseListSearchDatabase["SearchName"].asString();
		if(!valueSearchDatabaseListSearchDatabase["Alias"].isNull())
			searchDatabaseListObject.alias = valueSearchDatabaseListSearchDatabase["Alias"].asString();
		if(!valueSearchDatabaseListSearchDatabase["CatalogName"].isNull())
			searchDatabaseListObject.catalogName = valueSearchDatabaseListSearchDatabase["CatalogName"].asString();
		auto allOwnerIdList = value["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			searchDatabaseListObject.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = value["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			searchDatabaseListObject.ownerNameList.push_back(value.asString());
		searchDatabaseList_.push_back(searchDatabaseListObject);
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

long SearchDatabaseResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<SearchDatabaseResult::SearchDatabase> SearchDatabaseResult::getSearchDatabaseList()const
{
	return searchDatabaseList_;
}

std::string SearchDatabaseResult::getErrorCode()const
{
	return errorCode_;
}

std::string SearchDatabaseResult::getErrorMessage()const
{
	return errorMessage_;
}

bool SearchDatabaseResult::getSuccess()const
{
	return success_;
}

