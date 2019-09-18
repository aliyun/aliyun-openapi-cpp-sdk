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

#include <alibabacloud/emr/model/QueryAlarmHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

QueryAlarmHistoryResult::QueryAlarmHistoryResult() :
	ServiceResult()
{}

QueryAlarmHistoryResult::QueryAlarmHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAlarmHistoryResult::~QueryAlarmHistoryResult()
{}

void QueryAlarmHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlarmHistoryList = value["AlarmHistoryList"]["EmrAlarmHistory"];
	for (auto value : allAlarmHistoryList)
	{
		EmrAlarmHistory alarmHistoryListObject;
		if(!value["ClusterId"].isNull())
			alarmHistoryListObject.clusterId = value["ClusterId"].asString();
		if(!value["Role"].isNull())
			alarmHistoryListObject.role = value["Role"].asString();
		if(!value["InstanceId"].isNull())
			alarmHistoryListObject.instanceId = value["InstanceId"].asString();
		if(!value["Name"].isNull())
			alarmHistoryListObject.name = value["Name"].asString();
		if(!value["MetricName"].isNull())
			alarmHistoryListObject.metricName = value["MetricName"].asString();
		if(!value["AlarmTime"].isNull())
			alarmHistoryListObject.alarmTime = std::stol(value["AlarmTime"].asString());
		if(!value["LastTime"].isNull())
			alarmHistoryListObject.lastTime = std::stol(value["LastTime"].asString());
		if(!value["State"].isNull())
			alarmHistoryListObject.state = value["State"].asString();
		if(!value["Status"].isNull())
			alarmHistoryListObject.status = std::stoi(value["Status"].asString());
		if(!value["ContactGroups"].isNull())
			alarmHistoryListObject.contactGroups = value["ContactGroups"].asString();
		alarmHistoryList_.push_back(alarmHistoryListObject);
	}
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["Cursor"].isNull())
		cursor_ = value["Cursor"].asString();

}

std::vector<QueryAlarmHistoryResult::EmrAlarmHistory> QueryAlarmHistoryResult::getAlarmHistoryList()const
{
	return alarmHistoryList_;
}

std::string QueryAlarmHistoryResult::getTotal()const
{
	return total_;
}

std::string QueryAlarmHistoryResult::getCursor()const
{
	return cursor_;
}

