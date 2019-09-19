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

#include <alibabacloud/cms/model/ListAlarmResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListAlarmResult::ListAlarmResult() :
	ServiceResult()
{}

ListAlarmResult::ListAlarmResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlarmResult::~ListAlarmResult()
{}

void ListAlarmResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlarmListNode = value["AlarmList"]["Alarm"];
	for (auto valueAlarmListAlarm : allAlarmListNode)
	{
		Alarm alarmListObject;
		if(!valueAlarmListAlarm["Id"].isNull())
			alarmListObject.id = valueAlarmListAlarm["Id"].asString();
		if(!valueAlarmListAlarm["Name"].isNull())
			alarmListObject.name = valueAlarmListAlarm["Name"].asString();
		if(!valueAlarmListAlarm["Namespace"].isNull())
			alarmListObject._namespace = valueAlarmListAlarm["Namespace"].asString();
		if(!valueAlarmListAlarm["MetricName"].isNull())
			alarmListObject.metricName = valueAlarmListAlarm["MetricName"].asString();
		if(!valueAlarmListAlarm["Dimensions"].isNull())
			alarmListObject.dimensions = valueAlarmListAlarm["Dimensions"].asString();
		if(!valueAlarmListAlarm["Period"].isNull())
			alarmListObject.period = std::stoi(valueAlarmListAlarm["Period"].asString());
		if(!valueAlarmListAlarm["Statistics"].isNull())
			alarmListObject.statistics = valueAlarmListAlarm["Statistics"].asString();
		if(!valueAlarmListAlarm["ComparisonOperator"].isNull())
			alarmListObject.comparisonOperator = valueAlarmListAlarm["ComparisonOperator"].asString();
		if(!valueAlarmListAlarm["Threshold"].isNull())
			alarmListObject.threshold = valueAlarmListAlarm["Threshold"].asString();
		if(!valueAlarmListAlarm["EvaluationCount"].isNull())
			alarmListObject.evaluationCount = std::stoi(valueAlarmListAlarm["EvaluationCount"].asString());
		if(!valueAlarmListAlarm["StartTime"].isNull())
			alarmListObject.startTime = std::stoi(valueAlarmListAlarm["StartTime"].asString());
		if(!valueAlarmListAlarm["EndTime"].isNull())
			alarmListObject.endTime = std::stoi(valueAlarmListAlarm["EndTime"].asString());
		if(!valueAlarmListAlarm["SilenceTime"].isNull())
			alarmListObject.silenceTime = std::stoi(valueAlarmListAlarm["SilenceTime"].asString());
		if(!valueAlarmListAlarm["NotifyType"].isNull())
			alarmListObject.notifyType = std::stoi(valueAlarmListAlarm["NotifyType"].asString());
		if(!valueAlarmListAlarm["Enable"].isNull())
			alarmListObject.enable = valueAlarmListAlarm["Enable"].asString() == "true";
		if(!valueAlarmListAlarm["State"].isNull())
			alarmListObject.state = valueAlarmListAlarm["State"].asString();
		if(!valueAlarmListAlarm["ContactGroups"].isNull())
			alarmListObject.contactGroups = valueAlarmListAlarm["ContactGroups"].asString();
		if(!valueAlarmListAlarm["Webhook"].isNull())
			alarmListObject.webhook = valueAlarmListAlarm["Webhook"].asString();
		alarmList_.push_back(alarmListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = std::stoi(value["NextToken"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string ListAlarmResult::getMessage()const
{
	return message_;
}

int ListAlarmResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListAlarmResult::Alarm> ListAlarmResult::getAlarmList()const
{
	return alarmList_;
}

int ListAlarmResult::getTotal()const
{
	return total_;
}

std::string ListAlarmResult::getCode()const
{
	return code_;
}

bool ListAlarmResult::getSuccess()const
{
	return success_;
}

