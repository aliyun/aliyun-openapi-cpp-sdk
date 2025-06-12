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

#include <alibabacloud/clickhouse/model/DescribeAllDataSourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeAllDataSourcesResult::DescribeAllDataSourcesResult() :
	ServiceResult()
{}

DescribeAllDataSourcesResult::DescribeAllDataSourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAllDataSourcesResult::~DescribeAllDataSourcesResult()
{}

void DescribeAllDataSourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTablesNode = value["Tables"]["Table"];
	for (auto valueTablesTable : allTablesNode)
	{
		Table tablesObject;
		if(!valueTablesTable["TableName"].isNull())
			tablesObject.tableName = valueTablesTable["TableName"].asString();
		if(!valueTablesTable["DBClusterId"].isNull())
			tablesObject.dBClusterId = valueTablesTable["DBClusterId"].asString();
		if(!valueTablesTable["SchemaName"].isNull())
			tablesObject.schemaName = valueTablesTable["SchemaName"].asString();
		tables_.push_back(tablesObject);
	}
	auto allColumnsNode = value["Columns"]["Column"];
	for (auto valueColumnsColumn : allColumnsNode)
	{
		Column columnsObject;
		if(!valueColumnsColumn["Type"].isNull())
			columnsObject.type = valueColumnsColumn["Type"].asString();
		if(!valueColumnsColumn["ColumnName"].isNull())
			columnsObject.columnName = valueColumnsColumn["ColumnName"].asString();
		if(!valueColumnsColumn["TableName"].isNull())
			columnsObject.tableName = valueColumnsColumn["TableName"].asString();
		if(!valueColumnsColumn["AutoIncrementColumn"].isNull())
			columnsObject.autoIncrementColumn = valueColumnsColumn["AutoIncrementColumn"].asString() == "true";
		if(!valueColumnsColumn["DBClusterId"].isNull())
			columnsObject.dBClusterId = valueColumnsColumn["DBClusterId"].asString();
		if(!valueColumnsColumn["PrimaryKey"].isNull())
			columnsObject.primaryKey = valueColumnsColumn["PrimaryKey"].asString() == "true";
		if(!valueColumnsColumn["SchemaName"].isNull())
			columnsObject.schemaName = valueColumnsColumn["SchemaName"].asString();
		columns_.push_back(columnsObject);
	}
	auto allSchemasNode = value["Schemas"]["Schema"];
	for (auto valueSchemasSchema : allSchemasNode)
	{
		Schema schemasObject;
		if(!valueSchemasSchema["DBClusterId"].isNull())
			schemasObject.dBClusterId = valueSchemasSchema["DBClusterId"].asString();
		if(!valueSchemasSchema["SchemaName"].isNull())
			schemasObject.schemaName = valueSchemasSchema["SchemaName"].asString();
		schemas_.push_back(schemasObject);
	}

}

std::vector<DescribeAllDataSourcesResult::Table> DescribeAllDataSourcesResult::getTables()const
{
	return tables_;
}

std::vector<DescribeAllDataSourcesResult::Column> DescribeAllDataSourcesResult::getColumns()const
{
	return columns_;
}

std::vector<DescribeAllDataSourcesResult::Schema> DescribeAllDataSourcesResult::getSchemas()const
{
	return schemas_;
}

