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

#include <alibabacloud/gpdb/model/DescribeDataShareInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDataShareInstancesResult::DescribeDataShareInstancesResult() :
	ServiceResult()
{}

DescribeDataShareInstancesResult::DescribeDataShareInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataShareInstancesResult::~DescribeDataShareInstancesResult()
{}

void DescribeDataShareInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstance"];
	for (auto valueItemsDBInstance : allItemsNode)
	{
		DBInstance itemsObject;
		if(!valueItemsDBInstance["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstance["RegionId"].asString();
		if(!valueItemsDBInstance["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstance["ZoneId"].asString();
		if(!valueItemsDBInstance["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstance["DBInstanceId"].asString();
		if(!valueItemsDBInstance["DBInstanceMode"].isNull())
			itemsObject.dBInstanceMode = valueItemsDBInstance["DBInstanceMode"].asString();
		if(!valueItemsDBInstance["Description"].isNull())
			itemsObject.description = valueItemsDBInstance["Description"].asString();
		if(!valueItemsDBInstance["DataShareStatus"].isNull())
			itemsObject.dataShareStatus = valueItemsDBInstance["DataShareStatus"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDataShareInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDataShareInstancesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDataShareInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDataShareInstancesResult::DBInstance> DescribeDataShareInstancesResult::getItems()const
{
	return items_;
}

