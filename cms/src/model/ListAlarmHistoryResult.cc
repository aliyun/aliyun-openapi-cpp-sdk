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
	auto allAlarmHistoryList = value["AlarmHistoryList"]["AlarmHistory"];
	for (auto value : allAlarmHistoryList)
	{
		AlarmHistory alarmHistoryListObject;
		if(!value["Id"].isNull())
			alarmHistoryListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			alarmHistoryListObject.name = value["Name"].asString();
		if(!value["Namespace"].isNull())
			alarmHistoryListObject._namespace = value["Namespace"].asString();
		if(!value["MetricName"].isNull())
			alarmHistoryListObject.metricName = value["MetricName"].asString();
		if(!value["Dimension"].isNull())
			alarmHistoryListObject.dimension = value["Dimension"].asString();
		if(!value["EvaluationCount"].isNull())
			alarmHistoryListObject.evaluationCount = std::stoi(value["EvaluationCount"].asString());
		if(!value["Value"].isNull())
			alarmHistoryListObject.value = value["Value"].asString();
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

