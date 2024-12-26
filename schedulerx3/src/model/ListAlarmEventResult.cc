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

#include <alibabacloud/schedulerx3/model/ListAlarmEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListAlarmEventResult::ListAlarmEventResult() :
	ServiceResult()
{}

ListAlarmEventResult::ListAlarmEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlarmEventResult::~ListAlarmEventResult()
{}

void ListAlarmEventResult::parse(const std::string &payload)
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
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allRecordsNode = dataNode["Records"]["record"];
	for (auto dataNodeRecordsrecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsrecord["AppName"].isNull())
			recordObject.appName = dataNodeRecordsrecord["AppName"].asString();
		if(!dataNodeRecordsrecord["JobName"].isNull())
			recordObject.jobName = dataNodeRecordsrecord["JobName"].asString();
		if(!dataNodeRecordsrecord["AlarmType"].isNull())
			recordObject.alarmType = dataNodeRecordsrecord["AlarmType"].asString();
		if(!dataNodeRecordsrecord["AlarmChannel"].isNull())
			recordObject.alarmChannel = dataNodeRecordsrecord["AlarmChannel"].asString();
		if(!dataNodeRecordsrecord["AlarmContacts"].isNull())
			recordObject.alarmContacts = dataNodeRecordsrecord["AlarmContacts"].asString();
		if(!dataNodeRecordsrecord["AlarmStatus"].isNull())
			recordObject.alarmStatus = dataNodeRecordsrecord["AlarmStatus"].asString();
		if(!dataNodeRecordsrecord["AlarmMessage"].isNull())
			recordObject.alarmMessage = dataNodeRecordsrecord["AlarmMessage"].asString();
		if(!dataNodeRecordsrecord["Time"].isNull())
			recordObject.time = dataNodeRecordsrecord["Time"].asString();
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAlarmEventResult::getMessage()const
{
	return message_;
}

ListAlarmEventResult::Data ListAlarmEventResult::getData()const
{
	return data_;
}

int ListAlarmEventResult::getCode()const
{
	return code_;
}

bool ListAlarmEventResult::getSuccess()const
{
	return success_;
}

