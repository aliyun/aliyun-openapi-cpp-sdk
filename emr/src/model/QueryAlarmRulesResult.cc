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

#include <alibabacloud/emr/model/QueryAlarmRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

QueryAlarmRulesResult::QueryAlarmRulesResult() :
	ServiceResult()
{}

QueryAlarmRulesResult::QueryAlarmRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAlarmRulesResult::~QueryAlarmRulesResult()
{}

void QueryAlarmRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAlarmList = value["AlarmList"]["Alarm"];
	for (auto value : allAlarmList)
	{
		Alarm alarmListObject;
		if(!value["Name"].isNull())
			alarmListObject.name = value["Name"].asString();
		if(!value["MetricName"].isNull())
			alarmListObject.metricName = value["MetricName"].asString();
		if(!value["Period"].isNull())
			alarmListObject.period = std::stoi(value["Period"].asString());
		if(!value["Threshold"].isNull())
			alarmListObject.threshold = value["Threshold"].asString();
		if(!value["EvaluationCount"].isNull())
			alarmListObject.evaluationCount = std::stoi(value["EvaluationCount"].asString());
		if(!value["StartTime"].isNull())
			alarmListObject.startTime = std::stoi(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			alarmListObject.endTime = std::stoi(value["EndTime"].asString());
		if(!value["SilenceTime"].isNull())
			alarmListObject.silenceTime = std::stoi(value["SilenceTime"].asString());
		if(!value["NotifyType"].isNull())
			alarmListObject.notifyType = std::stoi(value["NotifyType"].asString());
		if(!value["Enable"].isNull())
			alarmListObject.enable = value["Enable"].asString() == "true";
		if(!value["State"].isNull())
			alarmListObject.state = value["State"].asString();
		if(!value["ComparisonOperator"].isNull())
			alarmListObject.comparisonOperator = value["ComparisonOperator"].asString();
		if(!value["ContactGroups"].isNull())
			alarmListObject.contactGroups = value["ContactGroups"].asString();
		alarmList_.push_back(alarmListObject);
	}

}

std::vector<QueryAlarmRulesResult::Alarm> QueryAlarmRulesResult::getAlarmList()const
{
	return alarmList_;
}

