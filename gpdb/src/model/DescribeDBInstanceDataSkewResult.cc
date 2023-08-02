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

#include <alibabacloud/gpdb/model/DescribeDBInstanceDataSkewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstanceDataSkewResult::DescribeDBInstanceDataSkewResult() :
	ServiceResult()
{}

DescribeDBInstanceDataSkewResult::DescribeDBInstanceDataSkewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceDataSkewResult::~DescribeDBInstanceDataSkewResult()
{}

void DescribeDBInstanceDataSkewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Sequence"].isNull())
			itemsObject.sequence = std::stoi(valueItemsItemsItem["Sequence"].asString());
		if(!valueItemsItemsItem["DatabaseName"].isNull())
			itemsObject.databaseName = valueItemsItemsItem["DatabaseName"].asString();
		if(!valueItemsItemsItem["SchemaName"].isNull())
			itemsObject.schemaName = valueItemsItemsItem["SchemaName"].asString();
		if(!valueItemsItemsItem["TableName"].isNull())
			itemsObject.tableName = valueItemsItemsItem["TableName"].asString();
		if(!valueItemsItemsItem["Owner"].isNull())
			itemsObject.owner = valueItemsItemsItem["Owner"].asString();
		if(!valueItemsItemsItem["TableSize"].isNull())
			itemsObject.tableSize = valueItemsItemsItem["TableSize"].asString();
		if(!valueItemsItemsItem["TableSkew"].isNull())
			itemsObject.tableSkew = valueItemsItemsItem["TableSkew"].asString();
		if(!valueItemsItemsItem["DistributeKey"].isNull())
			itemsObject.distributeKey = valueItemsItemsItem["DistributeKey"].asString();
		if(!valueItemsItemsItem["TimeLastUpdated"].isNull())
			itemsObject.timeLastUpdated = valueItemsItemsItem["TimeLastUpdated"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDBInstanceDataSkewResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDBInstanceDataSkewResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstanceDataSkewResult::ItemsItem> DescribeDBInstanceDataSkewResult::getItems()const
{
	return items_;
}

