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

#include <alibabacloud/dataworks-public/model/ListTableWithPermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListTableWithPermissionResult::ListTableWithPermissionResult() :
	ServiceResult()
{}

ListTableWithPermissionResult::ListTableWithPermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTableWithPermissionResult::~ListTableWithPermissionResult()
{}

void ListTableWithPermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tablesNode = value["Tables"];
	if(!tablesNode["PageNumber"].isNull())
		tables_.pageNumber = std::stoi(tablesNode["PageNumber"].asString());
	if(!tablesNode["PageSize"].isNull())
		tables_.pageSize = std::stoi(tablesNode["PageSize"].asString());
	if(!tablesNode["TotalCount"].isNull())
		tables_.totalCount = std::stoi(tablesNode["TotalCount"].asString());
	auto allTableListNode = tablesNode["TableList"]["TableListItem"];
	for (auto tablesNodeTableListTableListItem : allTableListNode)
	{
		Tables::TableListItem tableListItemObject;
		if(!tablesNodeTableListTableListItem["ProjectGuid"].isNull())
			tableListItemObject.projectGuid = tablesNodeTableListTableListItem["ProjectGuid"].asString();
		if(!tablesNodeTableListTableListItem["Guid"].isNull())
			tableListItemObject.guid = tablesNodeTableListTableListItem["Guid"].asString();
		if(!tablesNodeTableListTableListItem["Name"].isNull())
			tableListItemObject.name = tablesNodeTableListTableListItem["Name"].asString();
		if(!tablesNodeTableListTableListItem["NameCn"].isNull())
			tableListItemObject.nameCn = tablesNodeTableListTableListItem["NameCn"].asString();
		if(!tablesNodeTableListTableListItem["Comment"].isNull())
			tableListItemObject.comment = tablesNodeTableListTableListItem["Comment"].asString();
		if(!tablesNodeTableListTableListItem["Owner"].isNull())
			tableListItemObject.owner = tablesNodeTableListTableListItem["Owner"].asString();
		auto allAction = value["Action"]["Action"];
		for (auto value : allAction)
			tableListItemObject.action.push_back(value.asString());
		tables_.tableList.push_back(tableListItemObject);
	}

}

ListTableWithPermissionResult::Tables ListTableWithPermissionResult::getTables()const
{
	return tables_;
}

