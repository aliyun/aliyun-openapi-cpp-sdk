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

#include <alibabacloud/schedulerx3/model/ListJobExecutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListJobExecutionsResult::ListJobExecutionsResult() :
	ServiceResult()
{}

ListJobExecutionsResult::ListJobExecutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobExecutionsResult::~ListJobExecutionsResult()
{}

void ListJobExecutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allRecordsNode = dataNode["Records"]["record"];
	for (auto dataNodeRecordsrecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsrecord["JobExecutionId"].isNull())
			recordObject.jobExecutionId = dataNodeRecordsrecord["JobExecutionId"].asString();
		if(!dataNodeRecordsrecord["JobId"].isNull())
			recordObject.jobId = std::stol(dataNodeRecordsrecord["JobId"].asString());
		if(!dataNodeRecordsrecord["JobName"].isNull())
			recordObject.jobName = dataNodeRecordsrecord["JobName"].asString();
		if(!dataNodeRecordsrecord["JobType"].isNull())
			recordObject.jobType = dataNodeRecordsrecord["JobType"].asString();
		if(!dataNodeRecordsrecord["Parameters"].isNull())
			recordObject.parameters = dataNodeRecordsrecord["Parameters"].asString();
		if(!dataNodeRecordsrecord["ScheduleTime"].isNull())
			recordObject.scheduleTime = dataNodeRecordsrecord["ScheduleTime"].asString();
		if(!dataNodeRecordsrecord["DataTime"].isNull())
			recordObject.dataTime = dataNodeRecordsrecord["DataTime"].asString();
		if(!dataNodeRecordsrecord["StartTime"].isNull())
			recordObject.startTime = dataNodeRecordsrecord["StartTime"].asString();
		if(!dataNodeRecordsrecord["EndTime"].isNull())
			recordObject.endTime = dataNodeRecordsrecord["EndTime"].asString();
		if(!dataNodeRecordsrecord["Duration"].isNull())
			recordObject.duration = std::stol(dataNodeRecordsrecord["Duration"].asString());
		if(!dataNodeRecordsrecord["Executor"].isNull())
			recordObject.executor = dataNodeRecordsrecord["Executor"].asString();
		if(!dataNodeRecordsrecord["Result"].isNull())
			recordObject.result = dataNodeRecordsrecord["Result"].asString();
		if(!dataNodeRecordsrecord["Status"].isNull())
			recordObject.status = std::stoi(dataNodeRecordsrecord["Status"].asString());
		if(!dataNodeRecordsrecord["TimeType"].isNull())
			recordObject.timeType = std::stoi(dataNodeRecordsrecord["TimeType"].asString());
		if(!dataNodeRecordsrecord["Attempt"].isNull())
			recordObject.attempt = std::stoi(dataNodeRecordsrecord["Attempt"].asString());
		if(!dataNodeRecordsrecord["WorkAddr"].isNull())
			recordObject.workAddr = dataNodeRecordsrecord["WorkAddr"].asString();
		if(!dataNodeRecordsrecord["AppName"].isNull())
			recordObject.appName = dataNodeRecordsrecord["AppName"].asString();
		if(!dataNodeRecordsrecord["RouteStrategy"].isNull())
			recordObject.routeStrategy = std::stoi(dataNodeRecordsrecord["RouteStrategy"].asString());
		if(!dataNodeRecordsrecord["ServerIp"].isNull())
			recordObject.serverIp = dataNodeRecordsrecord["ServerIp"].asString();
		if(!dataNodeRecordsrecord["TriggerType"].isNull())
			recordObject.triggerType = std::stoi(dataNodeRecordsrecord["TriggerType"].asString());
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListJobExecutionsResult::getMessage()const
{
	return message_;
}

ListJobExecutionsResult::Data ListJobExecutionsResult::getData()const
{
	return data_;
}

int ListJobExecutionsResult::getCode()const
{
	return code_;
}

bool ListJobExecutionsResult::getSuccess()const
{
	return success_;
}

