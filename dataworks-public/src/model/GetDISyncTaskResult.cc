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

#include <alibabacloud/dataworks-public/model/GetDISyncTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDISyncTaskResult::GetDISyncTaskResult() :
	ServiceResult()
{}

GetDISyncTaskResult::GetDISyncTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDISyncTaskResult::~GetDISyncTaskResult()
{}

void GetDISyncTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Code"].isNull())
		data_.code = dataNode["Code"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	auto allAlarmListNode = dataNode["AlarmList"]["alarmListItem"];
	for (auto dataNodeAlarmListalarmListItem : allAlarmListNode)
	{
		Data::AlarmListItem alarmListItemObject;
		if(!dataNodeAlarmListalarmListItem["Id"].isNull())
			alarmListItemObject.id = std::stol(dataNodeAlarmListalarmListItem["Id"].asString());
		if(!dataNodeAlarmListalarmListItem["Enabled"].isNull())
			alarmListItemObject.enabled = dataNodeAlarmListalarmListItem["Enabled"].asString() == "true";
		if(!dataNodeAlarmListalarmListItem["RuleName"].isNull())
			alarmListItemObject.ruleName = dataNodeAlarmListalarmListItem["RuleName"].asString();
		if(!dataNodeAlarmListalarmListItem["Metric"].isNull())
			alarmListItemObject.metric = dataNodeAlarmListalarmListItem["Metric"].asString();
		if(!dataNodeAlarmListalarmListItem["Description"].isNull())
			alarmListItemObject.description = dataNodeAlarmListalarmListItem["Description"].asString();
		auto allAlarmRuleListNode = dataNodeAlarmListalarmListItem["AlarmRuleList"]["alarmRuleListItem"];
		for (auto dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem : allAlarmRuleListNode)
		{
			Data::AlarmListItem::AlarmRuleListItem alarmRuleListObject;
			if(!dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Level"].isNull())
				alarmRuleListObject.level = dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Level"].asString();
			if(!dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Comparator"].isNull())
				alarmRuleListObject.comparator = dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Comparator"].asString();
			if(!dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Threshold"].isNull())
				alarmRuleListObject.threshold = std::stol(dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Threshold"].asString());
			if(!dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Duration"].isNull())
				alarmRuleListObject.duration = std::stol(dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Duration"].asString());
			if(!dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Aggregator"].isNull())
				alarmRuleListObject.aggregator = dataNodeAlarmListalarmListItemAlarmRuleListalarmRuleListItem["Aggregator"].asString();
			alarmListItemObject.alarmRuleList.push_back(alarmRuleListObject);
		}
		auto notifyRuleNode = value["NotifyRule"];
		if(!notifyRuleNode["Interval"].isNull())
			alarmListItemObject.notifyRule.interval = std::stol(notifyRuleNode["Interval"].asString());
			auto allWarning = notifyRuleNode["Warning"]["warning"];
			for (auto value : allWarning)
				alarmListItemObject.notifyRule.warning.push_back(value.asString());
			auto allCritical = notifyRuleNode["Critical"]["critical"];
			for (auto value : allCritical)
				alarmListItemObject.notifyRule.critical.push_back(value.asString());
		data_.alarmList.push_back(alarmListItemObject);
	}
	auto solutionDetailNode = dataNode["SolutionDetail"];
	if(!solutionDetailNode["Status"].isNull())
		data_.solutionDetail.status = solutionDetailNode["Status"].asString();
	if(!solutionDetailNode["Type"].isNull())
		data_.solutionDetail.type = solutionDetailNode["Type"].asString();
	if(!solutionDetailNode["StartTime"].isNull())
		data_.solutionDetail.startTime = solutionDetailNode["StartTime"].asString();
	if(!solutionDetailNode["CreatorName"].isNull())
		data_.solutionDetail.creatorName = solutionDetailNode["CreatorName"].asString();
	if(!solutionDetailNode["ProjectId"].isNull())
		data_.solutionDetail.projectId = std::stol(solutionDetailNode["ProjectId"].asString());
	if(!solutionDetailNode["SourceType"].isNull())
		data_.solutionDetail.sourceType = solutionDetailNode["SourceType"].asString();
	if(!solutionDetailNode["ProcessContent"].isNull())
		data_.solutionDetail.processContent = solutionDetailNode["ProcessContent"].asString();
	if(!solutionDetailNode["Name"].isNull())
		data_.solutionDetail.name = solutionDetailNode["Name"].asString();
	if(!solutionDetailNode["ProcessExtra"].isNull())
		data_.solutionDetail.processExtra = solutionDetailNode["ProcessExtra"].asString();
	if(!solutionDetailNode["SubmitTime"].isNull())
		data_.solutionDetail.submitTime = solutionDetailNode["SubmitTime"].asString();
	if(!solutionDetailNode["Id"].isNull())
		data_.solutionDetail.id = std::stol(solutionDetailNode["Id"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDISyncTaskResult::Data GetDISyncTaskResult::getData()const
{
	return data_;
}

bool GetDISyncTaskResult::getSuccess()const
{
	return success_;
}

