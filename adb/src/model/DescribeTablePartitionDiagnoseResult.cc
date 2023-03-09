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

#include <alibabacloud/adb/model/DescribeTablePartitionDiagnoseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeTablePartitionDiagnoseResult::DescribeTablePartitionDiagnoseResult() :
	ServiceResult()
{}

DescribeTablePartitionDiagnoseResult::DescribeTablePartitionDiagnoseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTablePartitionDiagnoseResult::~DescribeTablePartitionDiagnoseResult()
{}

void DescribeTablePartitionDiagnoseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["TablePartitionDiagnose"];
	for (auto valueItemsTablePartitionDiagnose : allItemsNode)
	{
		TablePartitionDiagnose itemsObject;
		if(!valueItemsTablePartitionDiagnose["TableName"].isNull())
			itemsObject.tableName = valueItemsTablePartitionDiagnose["TableName"].asString();
		if(!valueItemsTablePartitionDiagnose["PartitionDetail"].isNull())
			itemsObject.partitionDetail = valueItemsTablePartitionDiagnose["PartitionDetail"].asString();
		if(!valueItemsTablePartitionDiagnose["SchemaName"].isNull())
			itemsObject.schemaName = valueItemsTablePartitionDiagnose["SchemaName"].asString();
		if(!valueItemsTablePartitionDiagnose["PartitionNumber"].isNull())
			itemsObject.partitionNumber = std::stoi(valueItemsTablePartitionDiagnose["PartitionNumber"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["SuggestMaxRecordsPerPartition"].isNull())
		suggestMaxRecordsPerPartition_ = std::stol(value["SuggestMaxRecordsPerPartition"].asString());
	if(!value["SuggestMinRecordsPerPartition"].isNull())
		suggestMinRecordsPerPartition_ = std::stol(value["SuggestMinRecordsPerPartition"].asString());

}

int DescribeTablePartitionDiagnoseResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTablePartitionDiagnoseResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTablePartitionDiagnoseResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeTablePartitionDiagnoseResult::getDBClusterId()const
{
	return dBClusterId_;
}

long DescribeTablePartitionDiagnoseResult::getSuggestMaxRecordsPerPartition()const
{
	return suggestMaxRecordsPerPartition_;
}

std::vector<DescribeTablePartitionDiagnoseResult::TablePartitionDiagnose> DescribeTablePartitionDiagnoseResult::getItems()const
{
	return items_;
}

long DescribeTablePartitionDiagnoseResult::getSuggestMinRecordsPerPartition()const
{
	return suggestMinRecordsPerPartition_;
}

