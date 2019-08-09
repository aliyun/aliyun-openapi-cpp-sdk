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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["SQLSlowLog"];
	for (auto value : allItems)
	{
		SQLSlowLog itemsObject;
		if(!value["SlowLogId"].isNull())
			itemsObject.slowLogId = std::stol(value["SlowLogId"].asString());
		if(!value["SQLHASH"].isNull())
			itemsObject.sQLHASH = value["SQLHASH"].asString();
		if(!value["SQLIdStr"].isNull())
			itemsObject.sQLIdStr = value["SQLIdStr"].asString();
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["SQLText"].isNull())
			itemsObject.sQLText = value["SQLText"].asString();
		if(!value["MySQLTotalExecutionCounts"].isNull())
			itemsObject.mySQLTotalExecutionCounts = std::stol(value["MySQLTotalExecutionCounts"].asString());
		if(!value["MySQLTotalExecutionTimes"].isNull())
			itemsObject.mySQLTotalExecutionTimes = std::stol(value["MySQLTotalExecutionTimes"].asString());
		if(!value["TotalLockTimes"].isNull())
			itemsObject.totalLockTimes = std::stol(value["TotalLockTimes"].asString());
		if(!value["MaxLockTime"].isNull())
			itemsObject.maxLockTime = std::stol(value["MaxLockTime"].asString());
		if(!value["ParseTotalRowCounts"].isNull())
			itemsObject.parseTotalRowCounts = std::stol(value["ParseTotalRowCounts"].asString());
		if(!value["ParseMaxRowCount"].isNull())
			itemsObject.parseMaxRowCount = std::stol(value["ParseMaxRowCount"].asString());
		if(!value["ReturnTotalRowCounts"].isNull())
			itemsObject.returnTotalRowCounts = std::stol(value["ReturnTotalRowCounts"].asString());
		if(!value["ReturnMaxRowCount"].isNull())
			itemsObject.returnMaxRowCount = std::stol(value["ReturnMaxRowCount"].asString());
		if(!value["CreateTime"].isNull())
			itemsObject.createTime = value["CreateTime"].asString();
		if(!value["SQLServerTotalExecutionCounts"].isNull())
			itemsObject.sQLServerTotalExecutionCounts = std::stol(value["SQLServerTotalExecutionCounts"].asString());
		if(!value["SQLServerTotalExecutionTimes"].isNull())
			itemsObject.sQLServerTotalExecutionTimes = std::stol(value["SQLServerTotalExecutionTimes"].asString());
		if(!value["TotalLogicalReadCounts"].isNull())
			itemsObject.totalLogicalReadCounts = std::stol(value["TotalLogicalReadCounts"].asString());
		if(!value["TotalPhysicalReadCounts"].isNull())
			itemsObject.totalPhysicalReadCounts = std::stol(value["TotalPhysicalReadCounts"].asString());
		if(!value["ReportTime"].isNull())
			itemsObject.reportTime = value["ReportTime"].asString();
		if(!value["MaxExecutionTime"].isNull())
			itemsObject.maxExecutionTime = std::stol(value["MaxExecutionTime"].asString());
		if(!value["AvgExecutionTime"].isNull())
			itemsObject.avgExecutionTime = std::stol(value["AvgExecutionTime"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

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

std::string DescribeSlowLogsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeSlowLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSlowLogsResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeSlowLogsResult::SQLSlowLog> DescribeSlowLogsResult::getItems()const
{
	return items_;
}

std::string DescribeSlowLogsResult::getEngine()const
{
	return engine_;
}

