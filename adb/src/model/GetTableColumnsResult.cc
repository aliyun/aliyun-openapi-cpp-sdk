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

#include <alibabacloud/adb/model/GetTableColumnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetTableColumnsResult::GetTableColumnsResult() :
	ServiceResult()
{}

GetTableColumnsResult::GetTableColumnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableColumnsResult::~GetTableColumnsResult()
{}

void GetTableColumnsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto tableNode = dataNode["Table"];
	if(!tableNode["SchemaName"].isNull())
		data_.table.schemaName = tableNode["SchemaName"].asString();
	if(!tableNode["TableName"].isNull())
		data_.table.tableName = tableNode["TableName"].asString();
	if(!tableNode["TableType"].isNull())
		data_.table.tableType = tableNode["TableType"].asString();
	if(!tableNode["CreateTime"].isNull())
		data_.table.createTime = tableNode["CreateTime"].asString();
	if(!tableNode["UpdateTime"].isNull())
		data_.table.updateTime = tableNode["UpdateTime"].asString();
	if(!tableNode["Description"].isNull())
		data_.table.description = tableNode["Description"].asString();
	if(!tableNode["Owner"].isNull())
		data_.table.owner = tableNode["Owner"].asString();
	if(!tableNode["Catalog"].isNull())
		data_.table.catalog = tableNode["Catalog"].asString();
	auto allColumnsNode = tableNode["Columns"]["ColumnsItem"];
	for (auto tableNodeColumnsColumnsItem : allColumnsNode)
	{
		Data::Table::ColumnsItem columnsItemObject;
		if(!tableNodeColumnsColumnsItem["ColumnName"].isNull())
			columnsItemObject.columnName = tableNodeColumnsColumnsItem["ColumnName"].asString();
		if(!tableNodeColumnsColumnsItem["Type"].isNull())
			columnsItemObject.type = tableNodeColumnsColumnsItem["Type"].asString();
		if(!tableNodeColumnsColumnsItem["Description"].isNull())
			columnsItemObject.description = tableNodeColumnsColumnsItem["Description"].asString();
		if(!tableNodeColumnsColumnsItem["SchemaName"].isNull())
			columnsItemObject.schemaName = tableNodeColumnsColumnsItem["SchemaName"].asString();
		if(!tableNodeColumnsColumnsItem["TableName"].isNull())
			columnsItemObject.tableName = tableNodeColumnsColumnsItem["TableName"].asString();
		if(!tableNodeColumnsColumnsItem["CreateTime"].isNull())
			columnsItemObject.createTime = tableNodeColumnsColumnsItem["CreateTime"].asString();
		if(!tableNodeColumnsColumnsItem["UpdateTime"].isNull())
			columnsItemObject.updateTime = tableNodeColumnsColumnsItem["UpdateTime"].asString();
		if(!tableNodeColumnsColumnsItem["PartitionKey"].isNull())
			columnsItemObject.partitionKey = tableNodeColumnsColumnsItem["PartitionKey"].asString() == "true";
		if(!tableNodeColumnsColumnsItem["Nullable"].isNull())
			columnsItemObject.nullable = tableNodeColumnsColumnsItem["Nullable"].asString() == "true";
		if(!tableNodeColumnsColumnsItem["PrimaryKey"].isNull())
			columnsItemObject.primaryKey = tableNodeColumnsColumnsItem["PrimaryKey"].asString() == "true";
		if(!tableNodeColumnsColumnsItem["DistributeKey"].isNull())
			columnsItemObject.distributeKey = tableNodeColumnsColumnsItem["DistributeKey"].asString() == "true";
		data_.table.columns.push_back(columnsItemObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long GetTableColumnsResult::getTotalCount()const
{
	return totalCount_;
}

long GetTableColumnsResult::getPageSize()const
{
	return pageSize_;
}

long GetTableColumnsResult::getPageNumber()const
{
	return pageNumber_;
}

GetTableColumnsResult::Data GetTableColumnsResult::getData()const
{
	return data_;
}

