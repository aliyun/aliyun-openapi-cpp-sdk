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
	auto allItems = value["Items"]["DBInstancePerformance"];
	for (auto value : allItems)
	{
		DBInstancePerformance dBInstancePerformanceObject;
		dBInstancePerformanceObject.cPUUsage = value["CPUUsage"].asString();
		dBInstancePerformanceObject.iOPSUsage = value["IOPSUsage"].asString();
		dBInstancePerformanceObject.diskUsage = value["DiskUsage"].asString();
		dBInstancePerformanceObject.sessionUsage = value["SessionUsage"].asString();
		dBInstancePerformanceObject.dBInstanceId = value["DBInstanceId"].asString();
		dBInstancePerformanceObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		items_.push_back(dBInstancePerformanceObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeDBInstancesByPerformanceResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeDBInstancesByPerformanceResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeDBInstancesByPerformanceResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeDBInstancesByPerformanceResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeDBInstancesByPerformanceResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBInstancesByPerformanceResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

