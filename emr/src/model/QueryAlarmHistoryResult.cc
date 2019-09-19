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
	auto allAlarmHistoryListNode = value["AlarmHistoryList"]["EmrAlarmHistory"];
	for (auto valueAlarmHistoryListEmrAlarmHistory : allAlarmHistoryListNode)
	{
		EmrAlarmHistory alarmHistoryListObject;
		if(!valueAlarmHistoryListEmrAlarmHistory["ClusterId"].isNull())
			alarmHistoryListObject.clusterId = valueAlarmHistoryListEmrAlarmHistory["ClusterId"].asString();
		if(!valueAlarmHistoryListEmrAlarmHistory["Role"].isNull())
			alarmHistoryListObject.role = valueAlarmHistoryListEmrAlarmHistory["Role"].asString();
		if(!valueAlarmHistoryListEmrAlarmHistory["InstanceId"].isNull())
			alarmHistoryListObject.instanceId = valueAlarmHistoryListEmrAlarmHistory["InstanceId"].asString();
		if(!valueAlarmHistoryListEmrAlarmHistory["Name"].isNull())
			alarmHistoryListObject.name = valueAlarmHistoryListEmrAlarmHistory["Name"].asString();
		if(!valueAlarmHistoryListEmrAlarmHistory["MetricName"].isNull())
			alarmHistoryListObject.metricName = valueAlarmHistoryListEmrAlarmHistory["MetricName"].asString();
		if(!valueAlarmHistoryListEmrAlarmHistory["AlarmTime"].isNull())
			alarmHistoryListObject.alarmTime = std::stol(valueAlarmHistoryListEmrAlarmHistory["AlarmTime"].asString());
		if(!valueAlarmHistoryListEmrAlarmHistory["LastTime"].isNull())
			alarmHistoryListObject.lastTime = std::stol(valueAlarmHistoryListEmrAlarmHistory["LastTime"].asString());
		if(!valueAlarmHistoryListEmrAlarmHistory["State"].isNull())
			alarmHistoryListObject.state = valueAlarmHistoryListEmrAlarmHistory["State"].asString();
		if(!valueAlarmHistoryListEmrAlarmHistory["Status"].isNull())
			alarmHistoryListObject.status = std::stoi(valueAlarmHistoryListEmrAlarmHistory["Status"].asString());
		if(!valueAlarmHistoryListEmrAlarmHistory["ContactGroups"].isNull())
			alarmHistoryListObject.contactGroups = valueAlarmHistoryListEmrAlarmHistory["ContactGroups"].asString();
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

