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

#include <alibabacloud/schedulerx3/model/ListJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListJobsResult::ListJobsResult() :
	ServiceResult()
{}

ListJobsResult::ListJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobsResult::~ListJobsResult()
{}

void ListJobsResult::parse(const std::string &payload)
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
	auto allRecordsNode = dataNode["Records"]["Record"];
	for (auto dataNodeRecordsRecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsRecord["JobId"].isNull())
			recordObject.jobId = std::stol(dataNodeRecordsRecord["JobId"].asString());
		if(!dataNodeRecordsRecord["Name"].isNull())
			recordObject.name = dataNodeRecordsRecord["Name"].asString();
		if(!dataNodeRecordsRecord["Description"].isNull())
			recordObject.description = dataNodeRecordsRecord["Description"].asString();
		if(!dataNodeRecordsRecord["JobType"].isNull())
			recordObject.jobType = dataNodeRecordsRecord["JobType"].asString();
		if(!dataNodeRecordsRecord["Status"].isNull())
			recordObject.status = std::stoi(dataNodeRecordsRecord["Status"].asString());
		if(!dataNodeRecordsRecord["Parameters"].isNull())
			recordObject.parameters = dataNodeRecordsRecord["Parameters"].asString();
		if(!dataNodeRecordsRecord["MaxConcurrency"].isNull())
			recordObject.maxConcurrency = std::stoi(dataNodeRecordsRecord["MaxConcurrency"].asString());
		if(!dataNodeRecordsRecord["MaxAttempt"].isNull())
			recordObject.maxAttempt = std::stoi(dataNodeRecordsRecord["MaxAttempt"].asString());
		if(!dataNodeRecordsRecord["AttemptInterval"].isNull())
			recordObject.attemptInterval = std::stoi(dataNodeRecordsRecord["AttemptInterval"].asString());
		if(!dataNodeRecordsRecord["JobHandler"].isNull())
			recordObject.jobHandler = dataNodeRecordsRecord["JobHandler"].asString();
		if(!dataNodeRecordsRecord["Priority"].isNull())
			recordObject.priority = std::stoi(dataNodeRecordsRecord["Priority"].asString());
		if(!dataNodeRecordsRecord["TimeType"].isNull())
			recordObject.timeType = std::stoi(dataNodeRecordsRecord["TimeType"].asString());
		if(!dataNodeRecordsRecord["TimeExpression"].isNull())
			recordObject.timeExpression = dataNodeRecordsRecord["TimeExpression"].asString();
		if(!dataNodeRecordsRecord["TimeZone"].isNull())
			recordObject.timeZone = dataNodeRecordsRecord["TimeZone"].asString();
		if(!dataNodeRecordsRecord["Calendar"].isNull())
			recordObject.calendar = dataNodeRecordsRecord["Calendar"].asString();
		if(!dataNodeRecordsRecord["DataOffset"].isNull())
			recordObject.dataOffset = std::stoi(dataNodeRecordsRecord["DataOffset"].asString());
		if(!dataNodeRecordsRecord["CleanMode"].isNull())
			recordObject.cleanMode = dataNodeRecordsRecord["CleanMode"].asString();
		if(!dataNodeRecordsRecord["Creator"].isNull())
			recordObject.creator = dataNodeRecordsRecord["Creator"].asString();
		if(!dataNodeRecordsRecord["Updater"].isNull())
			recordObject.updater = dataNodeRecordsRecord["Updater"].asString();
		if(!dataNodeRecordsRecord["Xattrs"].isNull())
			recordObject.xattrs = dataNodeRecordsRecord["Xattrs"].asString();
		if(!dataNodeRecordsRecord["NoticeConfig"].isNull())
			recordObject.noticeConfig = dataNodeRecordsRecord["NoticeConfig"].asString();
		if(!dataNodeRecordsRecord["NoticeContacts"].isNull())
			recordObject.noticeContacts = dataNodeRecordsRecord["NoticeContacts"].asString();
		if(!dataNodeRecordsRecord["RouteStrategy"].isNull())
			recordObject.routeStrategy = std::stoi(dataNodeRecordsRecord["RouteStrategy"].asString());
		if(!dataNodeRecordsRecord["AppName"].isNull())
			recordObject.appName = dataNodeRecordsRecord["AppName"].asString();
		if(!dataNodeRecordsRecord["StartTime"].isNull())
			recordObject.startTime = std::stol(dataNodeRecordsRecord["StartTime"].asString());
		if(!dataNodeRecordsRecord["Timezone"].isNull())
			recordObject.timezone = dataNodeRecordsRecord["Timezone"].asString();
		if(!dataNodeRecordsRecord["ExecutorBlockStrategy"].isNull())
			recordObject.executorBlockStrategy = dataNodeRecordsRecord["ExecutorBlockStrategy"].asString();
		if(!dataNodeRecordsRecord["LastExecuteEndTime"].isNull())
			recordObject.lastExecuteEndTime = dataNodeRecordsRecord["LastExecuteEndTime"].asString();
		if(!dataNodeRecordsRecord["LastExecuteStatus"].isNull())
			recordObject.lastExecuteStatus = std::stoi(dataNodeRecordsRecord["LastExecuteStatus"].asString());
		if(!dataNodeRecordsRecord["CurrentExecuteStatus"].isNull())
			recordObject.currentExecuteStatus = std::stoi(dataNodeRecordsRecord["CurrentExecuteStatus"].asString());
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListJobsResult::getMessage()const
{
	return message_;
}

ListJobsResult::Data ListJobsResult::getData()const
{
	return data_;
}

int ListJobsResult::getCode()const
{
	return code_;
}

bool ListJobsResult::getSuccess()const
{
	return success_;
}

