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

#include <alibabacloud/dms-enterprise/model/ListLogicTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListLogicTablesResult::ListLogicTablesResult() :
	ServiceResult()
{}

ListLogicTablesResult::ListLogicTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLogicTablesResult::~ListLogicTablesResult()
{}

void ListLogicTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogicTableListNode = value["LogicTableList"]["LogicTable"];
	for (auto valueLogicTableListLogicTable : allLogicTableListNode)
	{
		LogicTable logicTableListObject;
		if(!valueLogicTableListLogicTable["DatabaseId"].isNull())
			logicTableListObject.databaseId = valueLogicTableListLogicTable["DatabaseId"].asString();
		if(!valueLogicTableListLogicTable["TableName"].isNull())
			logicTableListObject.tableName = valueLogicTableListLogicTable["TableName"].asString();
		if(!valueLogicTableListLogicTable["TableCount"].isNull())
			logicTableListObject.tableCount = valueLogicTableListLogicTable["TableCount"].asString();
		if(!valueLogicTableListLogicTable["SchemaName"].isNull())
			logicTableListObject.schemaName = valueLogicTableListLogicTable["SchemaName"].asString();
		if(!valueLogicTableListLogicTable["Logic"].isNull())
			logicTableListObject.logic = valueLogicTableListLogicTable["Logic"].asString() == "true";
		if(!valueLogicTableListLogicTable["TableExpr"].isNull())
			logicTableListObject.tableExpr = valueLogicTableListLogicTable["TableExpr"].asString();
		if(!valueLogicTableListLogicTable["TableGuid"].isNull())
			logicTableListObject.tableGuid = valueLogicTableListLogicTable["TableGuid"].asString();
		if(!valueLogicTableListLogicTable["TableId"].isNull())
			logicTableListObject.tableId = valueLogicTableListLogicTable["TableId"].asString();
		auto allOwnerIdList = value["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			logicTableListObject.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = value["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			logicTableListObject.ownerNameList.push_back(value.asString());
		logicTableList_.push_back(logicTableListObject);
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

long ListLogicTablesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListLogicTablesResult::LogicTable> ListLogicTablesResult::getLogicTableList()const
{
	return logicTableList_;
}

std::string ListLogicTablesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLogicTablesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListLogicTablesResult::getSuccess()const
{
	return success_;
}

