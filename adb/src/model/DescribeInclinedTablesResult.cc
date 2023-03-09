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

#include <alibabacloud/adb/model/DescribeInclinedTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeInclinedTablesResult::DescribeInclinedTablesResult() :
	ServiceResult()
{}

DescribeInclinedTablesResult::DescribeInclinedTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInclinedTablesResult::~DescribeInclinedTablesResult()
{}

void DescribeInclinedTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Table"];
	for (auto valueItemsTable : allItemsNode)
	{
		Table itemsObject;
		if(!valueItemsTable["Type"].isNull())
			itemsObject.type = valueItemsTable["Type"].asString();
		if(!valueItemsTable["Schema"].isNull())
			itemsObject.schema = valueItemsTable["Schema"].asString();
		if(!valueItemsTable["Size"].isNull())
			itemsObject.size = std::stol(valueItemsTable["Size"].asString());
		if(!valueItemsTable["Name"].isNull())
			itemsObject.name = valueItemsTable["Name"].asString();
		if(!valueItemsTable["IsIncline"].isNull())
			itemsObject.isIncline = valueItemsTable["IsIncline"].asString() == "true";
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeInclinedTablesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeInclinedTablesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeInclinedTablesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInclinedTablesResult::Table> DescribeInclinedTablesResult::getItems()const
{
	return items_;
}

