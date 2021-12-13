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

#include <alibabacloud/gpdb/model/DescribeSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

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
		if(!valueItemsSQLSlowRecord["ExecutionStartTime"].isNull())
			itemsObject.executionStartTime = valueItemsSQLSlowRecord["ExecutionStartTime"].asString();
		if(!valueItemsSQLSlowRecord["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSQLSlowRecord["HostAddress"].asString();
		if(!valueItemsSQLSlowRecord["QueryTimes"].isNull())
			itemsObject.queryTimes = std::stol(valueItemsSQLSlowRecord["QueryTimes"].asString());
		if(!valueItemsSQLSlowRecord["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQLSlowRecord["SQLText"].asString();
		if(!valueItemsSQLSlowRecord["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsSQLSlowRecord["ReturnRowCounts"].asString());
		if(!valueItemsSQLSlowRecord["ParseRowCounts"].isNull())
			itemsObject.parseRowCounts = std::stol(valueItemsSQLSlowRecord["ParseRowCounts"].asString());
		if(!valueItemsSQLSlowRecord["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLSlowRecord["DBName"].asString();
		if(!valueItemsSQLSlowRecord["LockTimes"].isNull())
			itemsObject.lockTimes = std::stol(valueItemsSQLSlowRecord["LockTimes"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

int DescribeSlowLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSlowLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
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

