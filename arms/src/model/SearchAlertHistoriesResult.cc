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

#include <alibabacloud/arms/model/SearchAlertHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchAlertHistoriesResult::SearchAlertHistoriesResult() :
	ServiceResult()
{}

SearchAlertHistoriesResult::SearchAlertHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAlertHistoriesResult::~SearchAlertHistoriesResult()
{}

void SearchAlertHistoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	auto allAlarmHistoriesNode = pageBeanNode["AlarmHistories"]["AlarmHistory"];
	for (auto pageBeanNodeAlarmHistoriesAlarmHistory : allAlarmHistoriesNode)
	{
		PageBean::AlarmHistory alarmHistoryObject;
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["AlarmTime"].isNull())
			alarmHistoryObject.alarmTime = std::stol(pageBeanNodeAlarmHistoriesAlarmHistory["AlarmTime"].asString());
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["StrategyId"].isNull())
			alarmHistoryObject.strategyId = pageBeanNodeAlarmHistoriesAlarmHistory["StrategyId"].asString();
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["AlarmResponseCode"].isNull())
			alarmHistoryObject.alarmResponseCode = std::stoi(pageBeanNodeAlarmHistoriesAlarmHistory["AlarmResponseCode"].asString());
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["Emails"].isNull())
			alarmHistoryObject.emails = pageBeanNodeAlarmHistoriesAlarmHistory["Emails"].asString();
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["UserId"].isNull())
			alarmHistoryObject.userId = pageBeanNodeAlarmHistoriesAlarmHistory["UserId"].asString();
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["AlarmSources"].isNull())
			alarmHistoryObject.alarmSources = pageBeanNodeAlarmHistoriesAlarmHistory["AlarmSources"].asString();
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["AlarmContent"].isNull())
			alarmHistoryObject.alarmContent = pageBeanNodeAlarmHistoriesAlarmHistory["AlarmContent"].asString();
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["Phones"].isNull())
			alarmHistoryObject.phones = pageBeanNodeAlarmHistoriesAlarmHistory["Phones"].asString();
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["AlarmType"].isNull())
			alarmHistoryObject.alarmType = std::stoi(pageBeanNodeAlarmHistoriesAlarmHistory["AlarmType"].asString());
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["Target"].isNull())
			alarmHistoryObject.target = pageBeanNodeAlarmHistoriesAlarmHistory["Target"].asString();
		if(!pageBeanNodeAlarmHistoriesAlarmHistory["Id"].isNull())
			alarmHistoryObject.id = std::stol(pageBeanNodeAlarmHistoriesAlarmHistory["Id"].asString());
		pageBean_.alarmHistories.push_back(alarmHistoryObject);
	}

}

SearchAlertHistoriesResult::PageBean SearchAlertHistoriesResult::getPageBean()const
{
	return pageBean_;
}

