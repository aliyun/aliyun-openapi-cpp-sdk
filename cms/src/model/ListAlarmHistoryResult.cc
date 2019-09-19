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

#include <alibabacloud/cms/model/ListAlarmHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListAlarmHistoryResult::ListAlarmHistoryResult() :
	ServiceResult()
{}

ListAlarmHistoryResult::ListAlarmHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlarmHistoryResult::~ListAlarmHistoryResult()
{}

void ListAlarmHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlarmHistoryListNode = value["AlarmHistoryList"]["AlarmHistory"];
	for (auto valueAlarmHistoryListAlarmHistory : allAlarmHistoryListNode)
	{
		AlarmHistory alarmHistoryListObject;
		if(!valueAlarmHistoryListAlarmHistory["Id"].isNull())
			alarmHistoryListObject.id = valueAlarmHistoryListAlarmHistory["Id"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Name"].isNull())
			alarmHistoryListObject.name = valueAlarmHistoryListAlarmHistory["Name"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Namespace"].isNull())
			alarmHistoryListObject._namespace = valueAlarmHistoryListAlarmHistory["Namespace"].asString();
		if(!valueAlarmHistoryListAlarmHistory["MetricName"].isNull())
			alarmHistoryListObject.metricName = valueAlarmHistoryListAlarmHistory["MetricName"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Dimension"].isNull())
			alarmHistoryListObject.dimension = valueAlarmHistoryListAlarmHistory["Dimension"].asString();
		if(!valueAlarmHistoryListAlarmHistory["EvaluationCount"].isNull())
			alarmHistoryListObject.evaluationCount = std::stoi(valueAlarmHistoryListAlarmHistory["EvaluationCount"].asString());
		if(!valueAlarmHistoryListAlarmHistory["Value"].isNull())
			alarmHistoryListObject.value = valueAlarmHistoryListAlarmHistory["Value"].asString();
		if(!valueAlarmHistoryListAlarmHistory["AlarmTime"].isNull())
			alarmHistoryListObject.alarmTime = std::stol(valueAlarmHistoryListAlarmHistory["AlarmTime"].asString());
		if(!valueAlarmHistoryListAlarmHistory["LastTime"].isNull())
			alarmHistoryListObject.lastTime = std::stol(valueAlarmHistoryListAlarmHistory["LastTime"].asString());
		if(!valueAlarmHistoryListAlarmHistory["State"].isNull())
			alarmHistoryListObject.state = valueAlarmHistoryListAlarmHistory["State"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Status"].isNull())
			alarmHistoryListObject.status = std::stoi(valueAlarmHistoryListAlarmHistory["Status"].asString());
		if(!valueAlarmHistoryListAlarmHistory["ContactGroups"].isNull())
			alarmHistoryListObject.contactGroups = valueAlarmHistoryListAlarmHistory["ContactGroups"].asString();
		if(!valueAlarmHistoryListAlarmHistory["InstanceName"].isNull())
			alarmHistoryListObject.instanceName = valueAlarmHistoryListAlarmHistory["InstanceName"].asString();
		alarmHistoryList_.push_back(alarmHistoryListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Cursor"].isNull())
		cursor_ = value["Cursor"].asString();

}

std::vector<ListAlarmHistoryResult::AlarmHistory> ListAlarmHistoryResult::getAlarmHistoryList()const
{
	return alarmHistoryList_;
}

std::string ListAlarmHistoryResult::getMessage()const
{
	return message_;
}

std::string ListAlarmHistoryResult::getCursor()const
{
	return cursor_;
}

std::string ListAlarmHistoryResult::getCode()const
{
	return code_;
}

bool ListAlarmHistoryResult::getSuccess()const
{
	return success_;
}

