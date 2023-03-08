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

#include <alibabacloud/adb/model/DescribeApsActionLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeApsActionLogsResult::DescribeApsActionLogsResult() :
	ServiceResult()
{}

DescribeApsActionLogsResult::DescribeApsActionLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApsActionLogsResult::~DescribeApsActionLogsResult()
{}

void DescribeApsActionLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActionLogsNode = value["ActionLogs"]["SlowLogRecord"];
	for (auto valueActionLogsSlowLogRecord : allActionLogsNode)
	{
		SlowLogRecord actionLogsObject;
		if(!valueActionLogsSlowLogRecord["Time"].isNull())
			actionLogsObject.time = valueActionLogsSlowLogRecord["Time"].asString();
		if(!valueActionLogsSlowLogRecord["Stage"].isNull())
			actionLogsObject.stage = valueActionLogsSlowLogRecord["Stage"].asString();
		if(!valueActionLogsSlowLogRecord["State"].isNull())
			actionLogsObject.state = valueActionLogsSlowLogRecord["State"].asString();
		if(!valueActionLogsSlowLogRecord["Context"].isNull())
			actionLogsObject.context = valueActionLogsSlowLogRecord["Context"].asString();
		actionLogs_.push_back(actionLogsObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["WorkloadId"].isNull())
		workloadId_ = value["WorkloadId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeApsActionLogsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeApsActionLogsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeApsActionLogsResult::getWorkloadId()const
{
	return workloadId_;
}

std::string DescribeApsActionLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeApsActionLogsResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeApsActionLogsResult::SlowLogRecord> DescribeApsActionLogsResult::getActionLogs()const
{
	return actionLogs_;
}

