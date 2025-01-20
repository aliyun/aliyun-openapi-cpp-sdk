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

#include <alibabacloud/polardb/model/DescribeScheduleTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeScheduleTasksResult::DescribeScheduleTasksResult() :
	ServiceResult()
{}

DescribeScheduleTasksResult::DescribeScheduleTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScheduleTasksResult::~DescribeScheduleTasksResult()
{}

void DescribeScheduleTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalRecordCount"].isNull())
		data_.totalRecordCount = std::stoi(dataNode["TotalRecordCount"].asString());
	auto allTimerInfosNode = dataNode["TimerInfos"]["timerInfosItem"];
	for (auto dataNodeTimerInfostimerInfosItem : allTimerInfosNode)
	{
		Data::TimerInfosItem timerInfosItemObject;
		if(!dataNodeTimerInfostimerInfosItem["Action"].isNull())
			timerInfosItemObject.action = dataNodeTimerInfostimerInfosItem["Action"].asString();
		if(!dataNodeTimerInfostimerInfosItem["CrontabJobId"].isNull())
			timerInfosItemObject.crontabJobId = dataNodeTimerInfostimerInfosItem["CrontabJobId"].asString();
		if(!dataNodeTimerInfostimerInfosItem["DBClusterId"].isNull())
			timerInfosItemObject.dBClusterId = dataNodeTimerInfostimerInfosItem["DBClusterId"].asString();
		if(!dataNodeTimerInfostimerInfosItem["DbClusterDescription"].isNull())
			timerInfosItemObject.dbClusterDescription = dataNodeTimerInfostimerInfosItem["DbClusterDescription"].asString();
		if(!dataNodeTimerInfostimerInfosItem["DbClusterStatus"].isNull())
			timerInfosItemObject.dbClusterStatus = dataNodeTimerInfostimerInfosItem["DbClusterStatus"].asString();
		if(!dataNodeTimerInfostimerInfosItem["OrderId"].isNull())
			timerInfosItemObject.orderId = dataNodeTimerInfostimerInfosItem["OrderId"].asString();
		if(!dataNodeTimerInfostimerInfosItem["PlannedEndTime"].isNull())
			timerInfosItemObject.plannedEndTime = dataNodeTimerInfostimerInfosItem["PlannedEndTime"].asString();
		if(!dataNodeTimerInfostimerInfosItem["PlannedFlashingOffTime"].isNull())
			timerInfosItemObject.plannedFlashingOffTime = dataNodeTimerInfostimerInfosItem["PlannedFlashingOffTime"].asString();
		if(!dataNodeTimerInfostimerInfosItem["PlannedStartTime"].isNull())
			timerInfosItemObject.plannedStartTime = dataNodeTimerInfostimerInfosItem["PlannedStartTime"].asString();
		if(!dataNodeTimerInfostimerInfosItem["PlannedTime"].isNull())
			timerInfosItemObject.plannedTime = dataNodeTimerInfostimerInfosItem["PlannedTime"].asString();
		if(!dataNodeTimerInfostimerInfosItem["Region"].isNull())
			timerInfosItemObject.region = dataNodeTimerInfostimerInfosItem["Region"].asString();
		if(!dataNodeTimerInfostimerInfosItem["Status"].isNull())
			timerInfosItemObject.status = dataNodeTimerInfostimerInfosItem["Status"].asString();
		if(!dataNodeTimerInfostimerInfosItem["TaskCancel"].isNull())
			timerInfosItemObject.taskCancel = dataNodeTimerInfostimerInfosItem["TaskCancel"].asString() == "true";
		if(!dataNodeTimerInfostimerInfosItem["TaskId"].isNull())
			timerInfosItemObject.taskId = dataNodeTimerInfostimerInfosItem["TaskId"].asString();
		data_.timerInfos.push_back(timerInfosItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeScheduleTasksResult::getMessage()const
{
	return message_;
}

DescribeScheduleTasksResult::Data DescribeScheduleTasksResult::getData()const
{
	return data_;
}

std::string DescribeScheduleTasksResult::getCode()const
{
	return code_;
}

bool DescribeScheduleTasksResult::getSuccess()const
{
	return success_;
}

