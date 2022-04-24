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

#include <alibabacloud/polardb/model/DescribeSlowLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeSlowLogsResult::DescribeSlowLogsResult() :
	ServiceResult()
{}

DescribeSlowLogsResult::DescribeSlowLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowLogsResult::~DescribeSlowLogsResult()
{}

void DescribeSlowLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SQLSlowLog"];
	for (auto valueItemsSQLSlowLog : allItemsNode)
	{
		SQLSlowLog itemsObject;
		if(!valueItemsSQLSlowLog["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQLSlowLog["SQLText"].asString();
		if(!valueItemsSQLSlowLog["ReturnMaxRowCount"].isNull())
			itemsObject.returnMaxRowCount = std::stol(valueItemsSQLSlowLog["ReturnMaxRowCount"].asString());
		if(!valueItemsSQLSlowLog["CreateTime"].isNull())
			itemsObject.createTime = valueItemsSQLSlowLog["CreateTime"].asString();
		if(!valueItemsSQLSlowLog["MaxExecutionTime"].isNull())
			itemsObject.maxExecutionTime = std::stol(valueItemsSQLSlowLog["MaxExecutionTime"].asString());
		if(!valueItemsSQLSlowLog["ParseTotalRowCounts"].isNull())
			itemsObject.parseTotalRowCounts = std::stol(valueItemsSQLSlowLog["ParseTotalRowCounts"].asString());
		if(!valueItemsSQLSlowLog["TotalLockTimes"].isNull())
			itemsObject.totalLockTimes = std::stol(valueItemsSQLSlowLog["TotalLockTimes"].asString());
		if(!valueItemsSQLSlowLog["TotalExecutionTimes"].isNull())
			itemsObject.totalExecutionTimes = std::stol(valueItemsSQLSlowLog["TotalExecutionTimes"].asString());
		if(!valueItemsSQLSlowLog["DBNodeId"].isNull())
			itemsObject.dBNodeId = valueItemsSQLSlowLog["DBNodeId"].asString();
		if(!valueItemsSQLSlowLog["SQLHASH"].isNull())
			itemsObject.sQLHASH = valueItemsSQLSlowLog["SQLHASH"].asString();
		if(!valueItemsSQLSlowLog["ParseMaxRowCount"].isNull())
			itemsObject.parseMaxRowCount = std::stol(valueItemsSQLSlowLog["ParseMaxRowCount"].asString());
		if(!valueItemsSQLSlowLog["MaxLockTime"].isNull())
			itemsObject.maxLockTime = std::stol(valueItemsSQLSlowLog["MaxLockTime"].asString());
		if(!valueItemsSQLSlowLog["ReturnTotalRowCounts"].isNull())
			itemsObject.returnTotalRowCounts = std::stol(valueItemsSQLSlowLog["ReturnTotalRowCounts"].asString());
		if(!valueItemsSQLSlowLog["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLSlowLog["DBName"].asString();
		if(!valueItemsSQLSlowLog["TotalExecutionCounts"].isNull())
			itemsObject.totalExecutionCounts = std::stol(valueItemsSQLSlowLog["TotalExecutionCounts"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

int DescribeSlowLogsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSlowLogsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeSlowLogsResult::getEndTime()const
{
	return endTime_;
}

int DescribeSlowLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSlowLogsResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeSlowLogsResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeSlowLogsResult::SQLSlowLog> DescribeSlowLogsResult::getItems()const
{
	return items_;
}

std::string DescribeSlowLogsResult::getEngine()const
{
	return engine_;
}

