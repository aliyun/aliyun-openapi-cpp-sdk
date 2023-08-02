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

#include <alibabacloud/gpdb/model/DescribeDBInstanceDataBloatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstanceDataBloatResult::DescribeDBInstanceDataBloatResult() :
	ServiceResult()
{}

DescribeDBInstanceDataBloatResult::DescribeDBInstanceDataBloatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceDataBloatResult::~DescribeDBInstanceDataBloatResult()
{}

void DescribeDBInstanceDataBloatResult::parse(const std::string &payload)
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
		if(!valueItemsItemsItem["StorageType"].isNull())
			itemsObject.storageType = valueItemsItemsItem["StorageType"].asString();
		if(!valueItemsItemsItem["ExpectTableSize"].isNull())
			itemsObject.expectTableSize = valueItemsItemsItem["ExpectTableSize"].asString();
		if(!valueItemsItemsItem["RealTableSize"].isNull())
			itemsObject.realTableSize = valueItemsItemsItem["RealTableSize"].asString();
		if(!valueItemsItemsItem["BloatSize"].isNull())
			itemsObject.bloatSize = valueItemsItemsItem["BloatSize"].asString();
		if(!valueItemsItemsItem["BloatCeoff"].isNull())
			itemsObject.bloatCeoff = valueItemsItemsItem["BloatCeoff"].asString();
		if(!valueItemsItemsItem["SuggestedAction"].isNull())
			itemsObject.suggestedAction = valueItemsItemsItem["SuggestedAction"].asString();
		if(!valueItemsItemsItem["TimeLastVacuumed"].isNull())
			itemsObject.timeLastVacuumed = valueItemsItemsItem["TimeLastVacuumed"].asString();
		if(!valueItemsItemsItem["TimeLastUpdated"].isNull())
			itemsObject.timeLastUpdated = valueItemsItemsItem["TimeLastUpdated"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDBInstanceDataBloatResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDBInstanceDataBloatResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstanceDataBloatResult::ItemsItem> DescribeDBInstanceDataBloatResult::getItems()const
{
	return items_;
}

