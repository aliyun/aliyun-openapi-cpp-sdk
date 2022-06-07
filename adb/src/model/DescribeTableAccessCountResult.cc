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

#include <alibabacloud/adb/model/DescribeTableAccessCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeTableAccessCountResult::DescribeTableAccessCountResult() :
	ServiceResult()
{}

DescribeTableAccessCountResult::DescribeTableAccessCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTableAccessCountResult::~DescribeTableAccessCountResult()
{}

void DescribeTableAccessCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["ReportDate"].isNull())
			itemsObject.reportDate = valueItemsItemsItem["ReportDate"].asString();
		if(!valueItemsItemsItem["TableSchema"].isNull())
			itemsObject.tableSchema = valueItemsItemsItem["TableSchema"].asString();
		if(!valueItemsItemsItem["AccessCount"].isNull())
			itemsObject.accessCount = valueItemsItemsItem["AccessCount"].asString();
		if(!valueItemsItemsItem["TableName"].isNull())
			itemsObject.tableName = valueItemsItemsItem["TableName"].asString();
		if(!valueItemsItemsItem["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsItemsItem["InstanceName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTableAccessCountResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTableAccessCountResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTableAccessCountResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTableAccessCountResult::ItemsItem> DescribeTableAccessCountResult::getItems()const
{
	return items_;
}

