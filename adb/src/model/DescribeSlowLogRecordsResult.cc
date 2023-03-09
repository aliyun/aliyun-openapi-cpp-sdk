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

#include <alibabacloud/adb/model/DescribeSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

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
	auto allItemsNode = value["Items"]["SlowLogRecord"];
	for (auto valueItemsSlowLogRecord : allItemsNode)
	{
		SlowLogRecord itemsObject;
		if(!valueItemsSlowLogRecord["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSlowLogRecord["HostAddress"].asString();
		if(!valueItemsSlowLogRecord["ScanTime"].isNull())
			itemsObject.scanTime = std::stol(valueItemsSlowLogRecord["ScanTime"].asString());
		if(!valueItemsSlowLogRecord["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSlowLogRecord["SQLText"].asString();
		if(!valueItemsSlowLogRecord["OutputSize"].isNull())
			itemsObject.outputSize = valueItemsSlowLogRecord["OutputSize"].asString();
		if(!valueItemsSlowLogRecord["PeakMemoryUsage"].isNull())
			itemsObject.peakMemoryUsage = valueItemsSlowLogRecord["PeakMemoryUsage"].asString();
		if(!valueItemsSlowLogRecord["State"].isNull())
			itemsObject.state = valueItemsSlowLogRecord["State"].asString();
		if(!valueItemsSlowLogRecord["WallTime"].isNull())
			itemsObject.wallTime = std::stol(valueItemsSlowLogRecord["WallTime"].asString());
		if(!valueItemsSlowLogRecord["ScanSize"].isNull())
			itemsObject.scanSize = valueItemsSlowLogRecord["ScanSize"].asString();
		if(!valueItemsSlowLogRecord["ExecutionStartTime"].isNull())
			itemsObject.executionStartTime = valueItemsSlowLogRecord["ExecutionStartTime"].asString();
		if(!valueItemsSlowLogRecord["QueryTime"].isNull())
			itemsObject.queryTime = std::stol(valueItemsSlowLogRecord["QueryTime"].asString());
		if(!valueItemsSlowLogRecord["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsSlowLogRecord["ReturnRowCounts"].asString());
		if(!valueItemsSlowLogRecord["ScanRows"].isNull())
			itemsObject.scanRows = std::stol(valueItemsSlowLogRecord["ScanRows"].asString());
		if(!valueItemsSlowLogRecord["ParseRowCounts"].isNull())
			itemsObject.parseRowCounts = std::stol(valueItemsSlowLogRecord["ParseRowCounts"].asString());
		if(!valueItemsSlowLogRecord["DBName"].isNull())
			itemsObject.dBName = valueItemsSlowLogRecord["DBName"].asString();
		if(!valueItemsSlowLogRecord["PlanningTime"].isNull())
			itemsObject.planningTime = std::stol(valueItemsSlowLogRecord["PlanningTime"].asString());
		if(!valueItemsSlowLogRecord["QueueTime"].isNull())
			itemsObject.queueTime = std::stol(valueItemsSlowLogRecord["QueueTime"].asString());
		if(!valueItemsSlowLogRecord["UserName"].isNull())
			itemsObject.userName = valueItemsSlowLogRecord["UserName"].asString();
		if(!valueItemsSlowLogRecord["ProcessID"].isNull())
			itemsObject.processID = valueItemsSlowLogRecord["ProcessID"].asString();
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

std::string DescribeSlowLogRecordsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeSlowLogRecordsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeSlowLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSlowLogRecordsResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeSlowLogRecordsResult::SlowLogRecord> DescribeSlowLogRecordsResult::getItems()const
{
	return items_;
}

