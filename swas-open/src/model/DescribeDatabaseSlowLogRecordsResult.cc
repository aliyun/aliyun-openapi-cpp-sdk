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

#include <alibabacloud/swas-open/model/DescribeDatabaseSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeDatabaseSlowLogRecordsResult::DescribeDatabaseSlowLogRecordsResult() :
	ServiceResult()
{}

DescribeDatabaseSlowLogRecordsResult::DescribeDatabaseSlowLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatabaseSlowLogRecordsResult::~DescribeDatabaseSlowLogRecordsResult()
{}

void DescribeDatabaseSlowLogRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlowLogsNode = value["SlowLogs"]["SlowLog"];
	for (auto valueSlowLogsSlowLog : allSlowLogsNode)
	{
		SlowLog slowLogsObject;
		if(!valueSlowLogsSlowLog["HostAddress"].isNull())
			slowLogsObject.hostAddress = valueSlowLogsSlowLog["HostAddress"].asString();
		if(!valueSlowLogsSlowLog["QueryTimes"].isNull())
			slowLogsObject.queryTimes = std::stol(valueSlowLogsSlowLog["QueryTimes"].asString());
		if(!valueSlowLogsSlowLog["SQLText"].isNull())
			slowLogsObject.sQLText = valueSlowLogsSlowLog["SQLText"].asString();
		if(!valueSlowLogsSlowLog["QueryTimeMS"].isNull())
			slowLogsObject.queryTimeMS = std::stol(valueSlowLogsSlowLog["QueryTimeMS"].asString());
		if(!valueSlowLogsSlowLog["LockTimes"].isNull())
			slowLogsObject.lockTimes = std::stol(valueSlowLogsSlowLog["LockTimes"].asString());
		if(!valueSlowLogsSlowLog["ExecutionStartTime"].isNull())
			slowLogsObject.executionStartTime = valueSlowLogsSlowLog["ExecutionStartTime"].asString();
		if(!valueSlowLogsSlowLog["ReturnRowCounts"].isNull())
			slowLogsObject.returnRowCounts = std::stol(valueSlowLogsSlowLog["ReturnRowCounts"].asString());
		if(!valueSlowLogsSlowLog["ParseRowCounts"].isNull())
			slowLogsObject.parseRowCounts = std::stol(valueSlowLogsSlowLog["ParseRowCounts"].asString());
		if(!valueSlowLogsSlowLog["DBName"].isNull())
			slowLogsObject.dBName = valueSlowLogsSlowLog["DBName"].asString();
		slowLogs_.push_back(slowLogsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PhysicalIORead"].isNull())
		physicalIORead_ = std::stol(value["PhysicalIORead"].asString());
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

int DescribeDatabaseSlowLogRecordsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDatabaseSlowLogRecordsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDatabaseSlowLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

long DescribeDatabaseSlowLogRecordsResult::getPhysicalIORead()const
{
	return physicalIORead_;
}

std::vector<DescribeDatabaseSlowLogRecordsResult::SlowLog> DescribeDatabaseSlowLogRecordsResult::getSlowLogs()const
{
	return slowLogs_;
}

std::string DescribeDatabaseSlowLogRecordsResult::getEngine()const
{
	return engine_;
}

