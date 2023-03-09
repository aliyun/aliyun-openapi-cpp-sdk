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

#include <alibabacloud/adb/model/DescribeColumnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeColumnsResult::DescribeColumnsResult() :
	ServiceResult()
{}

DescribeColumnsResult::DescribeColumnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeColumnsResult::~DescribeColumnsResult()
{}

void DescribeColumnsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Column"];
	for (auto valueItemsColumn : allItemsNode)
	{
		Column itemsObject;
		if(!valueItemsColumn["Type"].isNull())
			itemsObject.type = valueItemsColumn["Type"].asString();
		if(!valueItemsColumn["ColumnName"].isNull())
			itemsObject.columnName = valueItemsColumn["ColumnName"].asString();
		if(!valueItemsColumn["TableName"].isNull())
			itemsObject.tableName = valueItemsColumn["TableName"].asString();
		if(!valueItemsColumn["AutoIncrementColumn"].isNull())
			itemsObject.autoIncrementColumn = valueItemsColumn["AutoIncrementColumn"].asString() == "true";
		if(!valueItemsColumn["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsColumn["DBClusterId"].asString();
		if(!valueItemsColumn["PrimaryKey"].isNull())
			itemsObject.primaryKey = valueItemsColumn["PrimaryKey"].asString() == "true";
		if(!valueItemsColumn["SchemaName"].isNull())
			itemsObject.schemaName = valueItemsColumn["SchemaName"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeColumnsResult::Column> DescribeColumnsResult::getItems()const
{
	return items_;
}

