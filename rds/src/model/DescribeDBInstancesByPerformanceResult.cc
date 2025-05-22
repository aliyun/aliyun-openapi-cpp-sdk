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

#include <alibabacloud/rds/model/DescribeDBInstancesByPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstancesByPerformanceResult::DescribeDBInstancesByPerformanceResult() :
	ServiceResult()
{}

DescribeDBInstancesByPerformanceResult::DescribeDBInstancesByPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesByPerformanceResult::~DescribeDBInstancesByPerformanceResult()
{}

void DescribeDBInstancesByPerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstancePerformance"];
	for (auto valueItemsDBInstancePerformance : allItemsNode)
	{
		DBInstancePerformance itemsObject;
		if(!valueItemsDBInstancePerformance["CPUUsage"].isNull())
			itemsObject.cPUUsage = valueItemsDBInstancePerformance["CPUUsage"].asString();
		if(!valueItemsDBInstancePerformance["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstancePerformance["DBInstanceDescription"].asString();
		if(!valueItemsDBInstancePerformance["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstancePerformance["DBInstanceId"].asString();
		if(!valueItemsDBInstancePerformance["DiskUsage"].isNull())
			itemsObject.diskUsage = valueItemsDBInstancePerformance["DiskUsage"].asString();
		if(!valueItemsDBInstancePerformance["IOPSUsage"].isNull())
			itemsObject.iOPSUsage = valueItemsDBInstancePerformance["IOPSUsage"].asString();
		if(!valueItemsDBInstancePerformance["SessionUsage"].isNull())
			itemsObject.sessionUsage = valueItemsDBInstancePerformance["SessionUsage"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeDBInstancesByPerformanceResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBInstancesByPerformanceResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBInstancesByPerformanceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstancesByPerformanceResult::DBInstancePerformance> DescribeDBInstancesByPerformanceResult::getItems()const
{
	return items_;
}

