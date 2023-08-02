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

#include <alibabacloud/gpdb/model/DescribeDBInstanceIndexUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstanceIndexUsageResult::DescribeDBInstanceIndexUsageResult() :
	ServiceResult()
{}

DescribeDBInstanceIndexUsageResult::DescribeDBInstanceIndexUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceIndexUsageResult::~DescribeDBInstanceIndexUsageResult()
{}

void DescribeDBInstanceIndexUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["DatabaseName"].isNull())
			itemsObject.databaseName = valueItemsItemsItem["DatabaseName"].asString();
		if(!valueItemsItemsItem["SchemaName"].isNull())
			itemsObject.schemaName = valueItemsItemsItem["SchemaName"].asString();
		if(!valueItemsItemsItem["TableName"].isNull())
			itemsObject.tableName = valueItemsItemsItem["TableName"].asString();
		if(!valueItemsItemsItem["IsPartitionTable"].isNull())
			itemsObject.isPartitionTable = valueItemsItemsItem["IsPartitionTable"].asString() == "true";
		if(!valueItemsItemsItem["ParentTableName"].isNull())
			itemsObject.parentTableName = valueItemsItemsItem["ParentTableName"].asString();
		if(!valueItemsItemsItem["IndexName"].isNull())
			itemsObject.indexName = valueItemsItemsItem["IndexName"].asString();
		if(!valueItemsItemsItem["IndexSize"].isNull())
			itemsObject.indexSize = valueItemsItemsItem["IndexSize"].asString();
		if(!valueItemsItemsItem["IndexScanTimes"].isNull())
			itemsObject.indexScanTimes = std::stoi(valueItemsItemsItem["IndexScanTimes"].asString());
		if(!valueItemsItemsItem["IndexDef"].isNull())
			itemsObject.indexDef = valueItemsItemsItem["IndexDef"].asString();
		if(!valueItemsItemsItem["TimeLastUpdated"].isNull())
			itemsObject.timeLastUpdated = valueItemsItemsItem["TimeLastUpdated"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDBInstanceIndexUsageResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDBInstanceIndexUsageResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstanceIndexUsageResult::ItemsItem> DescribeDBInstanceIndexUsageResult::getItems()const
{
	return items_;
}

