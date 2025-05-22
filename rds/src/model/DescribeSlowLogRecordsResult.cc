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

#include <alibabacloud/rds/model/DescribeSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSlowLogRecordsResult::DescribeSlowLogRecordsResult() :
	ServiceResult()
{}

DescribeSlowLogRecordsResult::DescribeSlowLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowLogRecordsResult::~DescribeSlowLogRecordsResult()
{}

void DescribeSlowLogRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SQLSlowRecord"];
	for (auto valueItemsSQLSlowRecord : allItemsNode)
	{
		SQLSlowRecord itemsObject;
		if(!valueItemsSQLSlowRecord["ApplicationName"].isNull())
			itemsObject.applicationName = valueItemsSQLSlowRecord["ApplicationName"].asString();
		if(!valueItemsSQLSlowRecord["ClientHostName"].isNull())
			itemsObject.clientHostName = valueItemsSQLSlowRecord["ClientHostName"].asString();
		if(!valueItemsSQLSlowRecord["CpuTime"].isNull())
			itemsObject.cpuTime = std::stol(valueItemsSQLSlowRecord["CpuTime"].asString());
		if(!valueItemsSQLSlowRecord["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLSlowRecord["DBName"].asString();
		if(!valueItemsSQLSlowRecord["ExecutionStartTime"].isNull())
			itemsObject.executionStartTime = valueItemsSQLSlowRecord["ExecutionStartTime"].asString();
		if(!valueItemsSQLSlowRecord["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSQLSlowRecord["HostAddress"].asString();
		if(!valueItemsSQLSlowRecord["LastRowsAffectedCount"].isNull())
			itemsObject.lastRowsAffectedCount = std::stol(valueItemsSQLSlowRecord["LastRowsAffectedCount"].asString());
		if(!valueItemsSQLSlowRecord["LockTimes"].isNull())
			itemsObject.lockTimes = std::stol(valueItemsSQLSlowRecord["LockTimes"].asString());
		if(!valueItemsSQLSlowRecord["LogicalIORead"].isNull())
			itemsObject.logicalIORead = std::stol(valueItemsSQLSlowRecord["LogicalIORead"].asString());
		if(!valueItemsSQLSlowRecord["ParseRowCounts"].isNull())
			itemsObject.parseRowCounts = std::stol(valueItemsSQLSlowRecord["ParseRowCounts"].asString());
		if(!valueItemsSQLSlowRecord["PhysicalIORead"].isNull())
			itemsObject.physicalIORead = std::stol(valueItemsSQLSlowRecord["PhysicalIORead"].asString());
		if(!valueItemsSQLSlowRecord["QueryTimeMS"].isNull())
			itemsObject.queryTimeMS = std::stol(valueItemsSQLSlowRecord["QueryTimeMS"].asString());
		if(!valueItemsSQLSlowRecord["QueryTimes"].isNull())
			itemsObject.queryTimes = std::stol(valueItemsSQLSlowRecord["QueryTimes"].asString());
		if(!valueItemsSQLSlowRecord["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsSQLSlowRecord["ReturnRowCounts"].asString());
		if(!valueItemsSQLSlowRecord["RowsAffectedCount"].isNull())
			itemsObject.rowsAffectedCount = std::stol(valueItemsSQLSlowRecord["RowsAffectedCount"].asString());
		if(!valueItemsSQLSlowRecord["SQLHash"].isNull())
			itemsObject.sQLHash = valueItemsSQLSlowRecord["SQLHash"].asString();
		if(!valueItemsSQLSlowRecord["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQLSlowRecord["SQLText"].asString();
		if(!valueItemsSQLSlowRecord["UserName"].isNull())
			itemsObject.userName = valueItemsSQLSlowRecord["UserName"].asString();
		if(!valueItemsSQLSlowRecord["WriteIOCount"].isNull())
			itemsObject.writeIOCount = std::stol(valueItemsSQLSlowRecord["WriteIOCount"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["CPUTime"].isNull())
		cPUTime_ = std::stol(value["CPUTime"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["LastRowsAffectedCount"].isNull())
		lastRowsAffectedCount_ = std::stol(value["LastRowsAffectedCount"].asString());
	if(!value["LogicalIORead"].isNull())
		logicalIORead_ = std::stol(value["LogicalIORead"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PhysicalIORead"].isNull())
		physicalIORead_ = std::stol(value["PhysicalIORead"].asString());
	if(!value["RowsAffectedCount"].isNull())
		rowsAffectedCount_ = std::stol(value["RowsAffectedCount"].asString());
	if(!value["SQLHash"].isNull())
		sQLHash_ = value["SQLHash"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["WritesIOCount"].isNull())
		writesIOCount_ = std::stol(value["WritesIOCount"].asString());

}

int DescribeSlowLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSlowLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeSlowLogRecordsResult::getUserName()const
{
	return userName_;
}

long DescribeSlowLogRecordsResult::getLastRowsAffectedCount()const
{
	return lastRowsAffectedCount_;
}

long DescribeSlowLogRecordsResult::getRowsAffectedCount()const
{
	return rowsAffectedCount_;
}

long DescribeSlowLogRecordsResult::getPhysicalIORead()const
{
	return physicalIORead_;
}

long DescribeSlowLogRecordsResult::getWritesIOCount()const
{
	return writesIOCount_;
}

long DescribeSlowLogRecordsResult::getLogicalIORead()const
{
	return logicalIORead_;
}

long DescribeSlowLogRecordsResult::getCPUTime()const
{
	return cPUTime_;
}

std::string DescribeSlowLogRecordsResult::getSQLHash()const
{
	return sQLHash_;
}

std::string DescribeSlowLogRecordsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeSlowLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSlowLogRecordsResult::SQLSlowRecord> DescribeSlowLogRecordsResult::getItems()const
{
	return items_;
}

std::string DescribeSlowLogRecordsResult::getEngine()const
{
	return engine_;
}

