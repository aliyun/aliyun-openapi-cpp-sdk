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
	auto allItems = value["Items"]["SQLSlowRecord"];
	for (auto value : allItems)
	{
		SQLSlowRecord sQLSlowRecordObject;
		sQLSlowRecordObject.hostAddress = value["HostAddress"].asString();
		sQLSlowRecordObject.dBName = value["DBName"].asString();
		sQLSlowRecordObject.sQLText = value["SQLText"].asString();
		sQLSlowRecordObject.queryTimes = std::stol(value["QueryTimes"].asString());
		sQLSlowRecordObject.lockTimes = std::stol(value["LockTimes"].asString());
		sQLSlowRecordObject.parseRowCounts = std::stol(value["ParseRowCounts"].asString());
		sQLSlowRecordObject.returnRowCounts = std::stol(value["ReturnRowCounts"].asString());
		sQLSlowRecordObject.executionStartTime = value["ExecutionStartTime"].asString();
		items_.push_back(sQLSlowRecordObject);
	}
	engine_ = value["Engine"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSlowLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeSlowLogRecordsResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeSlowLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeSlowLogRecordsResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeSlowLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSlowLogRecordsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeSlowLogRecordsResult::getEngine()const
{
	return engine_;
}

void DescribeSlowLogRecordsResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

