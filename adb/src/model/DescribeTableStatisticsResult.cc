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

#include <alibabacloud/adb/model/DescribeTableStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeTableStatisticsResult::DescribeTableStatisticsResult() :
	ServiceResult()
{}

DescribeTableStatisticsResult::DescribeTableStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTableStatisticsResult::~DescribeTableStatisticsResult()
{}

void DescribeTableStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["TableStatisticRecords"];
	for (auto valueItemsTableStatisticRecords : allItemsNode)
	{
		TableStatisticRecords itemsObject;
		if(!valueItemsTableStatisticRecords["SchemaName"].isNull())
			itemsObject.schemaName = valueItemsTableStatisticRecords["SchemaName"].asString();
		if(!valueItemsTableStatisticRecords["TableName"].isNull())
			itemsObject.tableName = valueItemsTableStatisticRecords["TableName"].asString();
		if(!valueItemsTableStatisticRecords["RowCount"].isNull())
			itemsObject.rowCount = std::stol(valueItemsTableStatisticRecords["RowCount"].asString());
		if(!valueItemsTableStatisticRecords["DataSize"].isNull())
			itemsObject.dataSize = std::stol(valueItemsTableStatisticRecords["DataSize"].asString());
		if(!valueItemsTableStatisticRecords["IndexSize"].isNull())
			itemsObject.indexSize = std::stol(valueItemsTableStatisticRecords["IndexSize"].asString());
		if(!valueItemsTableStatisticRecords["PrimaryKeyIndexSize"].isNull())
			itemsObject.primaryKeyIndexSize = std::stol(valueItemsTableStatisticRecords["PrimaryKeyIndexSize"].asString());
		if(!valueItemsTableStatisticRecords["PartitionCount"].isNull())
			itemsObject.partitionCount = std::stol(valueItemsTableStatisticRecords["PartitionCount"].asString());
		if(!valueItemsTableStatisticRecords["ColdDataSize"].isNull())
			itemsObject.coldDataSize = std::stol(valueItemsTableStatisticRecords["ColdDataSize"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeTableStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeTableStatisticsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeTableStatisticsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeTableStatisticsResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeTableStatisticsResult::TableStatisticRecords> DescribeTableStatisticsResult::getItems()const
{
	return items_;
}

