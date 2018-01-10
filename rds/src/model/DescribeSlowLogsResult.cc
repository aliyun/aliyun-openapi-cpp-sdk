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

#include <alibabacloud/rds/model/DescribeSlowLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allItems = value["Items"]["SQLSlowLog"];
	for (auto value : allItems)
	{
		SQLSlowLog sQLSlowLogObject;
		sQLSlowLogObject.slowLogId = std::stol(value["SlowLogId"].asString());
		sQLSlowLogObject.sQLId = std::stol(value["SQLId"].asString());
		sQLSlowLogObject.dBName = value["DBName"].asString();
		sQLSlowLogObject.sQLText = value["SQLText"].asString();
		sQLSlowLogObject.mySQLTotalExecutionCounts = std::stol(value["MySQLTotalExecutionCounts"].asString());
		sQLSlowLogObject.mySQLTotalExecutionTimes = std::stol(value["MySQLTotalExecutionTimes"].asString());
		sQLSlowLogObject.totalLockTimes = std::stol(value["TotalLockTimes"].asString());
		sQLSlowLogObject.maxLockTime = std::stol(value["MaxLockTime"].asString());
		sQLSlowLogObject.parseTotalRowCounts = std::stol(value["ParseTotalRowCounts"].asString());
		sQLSlowLogObject.parseMaxRowCount = std::stol(value["ParseMaxRowCount"].asString());
		sQLSlowLogObject.returnTotalRowCounts = std::stol(value["ReturnTotalRowCounts"].asString());
		sQLSlowLogObject.returnMaxRowCount = std::stol(value["ReturnMaxRowCount"].asString());
		sQLSlowLogObject.createTime = value["CreateTime"].asString();
		sQLSlowLogObject.sQLServerTotalExecutionCounts = std::stol(value["SQLServerTotalExecutionCounts"].asString());
		sQLSlowLogObject.sQLServerTotalExecutionTimes = std::stol(value["SQLServerTotalExecutionTimes"].asString());
		sQLSlowLogObject.totalLogicalReadCounts = std::stol(value["TotalLogicalReadCounts"].asString());
		sQLSlowLogObject.totalPhysicalReadCounts = std::stol(value["TotalPhysicalReadCounts"].asString());
		sQLSlowLogObject.reportTime = value["ReportTime"].asString();
		sQLSlowLogObject.maxExecutionTime = std::stol(value["MaxExecutionTime"].asString());
		sQLSlowLogObject.avgExecutionTime = std::stol(value["AvgExecutionTime"].asString());
		items_.push_back(sQLSlowLogObject);
	}
	engine_ = value["Engine"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSlowLogsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeSlowLogsResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeSlowLogsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeSlowLogsResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

std::string DescribeSlowLogsResult::getEndTime()const
{
	return endTime_;
}

void DescribeSlowLogsResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

int DescribeSlowLogsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSlowLogsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeSlowLogsResult::getStartTime()const
{
	return startTime_;
}

void DescribeSlowLogsResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::string DescribeSlowLogsResult::getEngine()const
{
	return engine_;
}

void DescribeSlowLogsResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

