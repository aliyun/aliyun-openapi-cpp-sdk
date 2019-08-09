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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAlarmList = value["AlarmList"]["Alarm"];
	for (auto value : allAlarmList)
	{
		Alarm alarmListObject;
		if(!value["Id"].isNull())
			alarmListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			alarmListObject.name = value["Name"].asString();
		if(!value["Namespace"].isNull())
			alarmListObject._namespace = value["Namespace"].asString();
		if(!value["MetricName"].isNull())
			alarmListObject.metricName = value["MetricName"].asString();
		if(!value["Dimensions"].isNull())
			alarmListObject.dimensions = value["Dimensions"].asString();
		if(!value["Period"].isNull())
			alarmListObject.period = std::stoi(value["Period"].asString());
		if(!value["Statistics"].isNull())
			alarmListObject.statistics = value["Statistics"].asString();
		if(!value["ComparisonOperator"].isNull())
			alarmListObject.comparisonOperator = value["ComparisonOperator"].asString();
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
		if(!value["ContactGroups"].isNull())
			alarmListObject.contactGroups = value["ContactGroups"].asString();
		if(!value["Webhook"].isNull())
			alarmListObject.webhook = value["Webhook"].asString();
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

