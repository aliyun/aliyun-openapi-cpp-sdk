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

#include <alibabacloud/dms-enterprise/model/ListTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTablesResult::ListTablesResult() :
	ServiceResult()
{}

ListTablesResult::ListTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTablesResult::~ListTablesResult()
{}

void ListTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTableListNode = value["TableList"]["Table"];
	for (auto valueTableListTable : allTableListNode)
	{
		Table tableListObject;
		if(!valueTableListTable["DatabaseId"].isNull())
			tableListObject.databaseId = valueTableListTable["DatabaseId"].asString();
		if(!valueTableListTable["TableName"].isNull())
			tableListObject.tableName = valueTableListTable["TableName"].asString();
		if(!valueTableListTable["StoreCapacity"].isNull())
			tableListObject.storeCapacity = std::stol(valueTableListTable["StoreCapacity"].asString());
		if(!valueTableListTable["Description"].isNull())
			tableListObject.description = valueTableListTable["Description"].asString();
		if(!valueTableListTable["Encoding"].isNull())
			tableListObject.encoding = valueTableListTable["Encoding"].asString();
		if(!valueTableListTable["TableSchemaName"].isNull())
			tableListObject.tableSchemaName = valueTableListTable["TableSchemaName"].asString();
		if(!valueTableListTable["TableType"].isNull())
			tableListObject.tableType = valueTableListTable["TableType"].asString();
		if(!valueTableListTable["TableGuid"].isNull())
			tableListObject.tableGuid = valueTableListTable["TableGuid"].asString();
		if(!valueTableListTable["Engine"].isNull())
			tableListObject.engine = valueTableListTable["Engine"].asString();
		if(!valueTableListTable["NumRows"].isNull())
			tableListObject.numRows = std::stol(valueTableListTable["NumRows"].asString());
		if(!valueTableListTable["TableId"].isNull())
			tableListObject.tableId = valueTableListTable["TableId"].asString();
		auto allOwnerIdList = value["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			tableListObject.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = value["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			tableListObject.ownerNameList.push_back(value.asString());
		tableList_.push_back(tableListObject);
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

long ListTablesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListTablesResult::Table> ListTablesResult::getTableList()const
{
	return tableList_;
}

std::string ListTablesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTablesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTablesResult::getSuccess()const
{
	return success_;
}

