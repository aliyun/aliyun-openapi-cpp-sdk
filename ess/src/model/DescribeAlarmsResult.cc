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

#include <alibabacloud/ess/model/DescribeAlarmsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeAlarmsResult::DescribeAlarmsResult() :
	ServiceResult()
{}

DescribeAlarmsResult::DescribeAlarmsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmsResult::~DescribeAlarmsResult()
{}

void DescribeAlarmsResult::parse(const std::string &payload)
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
		if(!value["AlarmTaskId"].isNull())
			alarmListObject.alarmTaskId = value["AlarmTaskId"].asString();
		if(!value["Name"].isNull())
			alarmListObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			alarmListObject.description = value["Description"].asString();
		if(!value["MetricType"].isNull())
			alarmListObject.metricType = value["MetricType"].asString();
		if(!value["MetricName"].isNull())
			alarmListObject.metricName = value["MetricName"].asString();
		if(!value["Period"].isNull())
			alarmListObject.period = std::stoi(value["Period"].asString());
		if(!value["Statistics"].isNull())
			alarmListObject.statistics = value["Statistics"].asString();
		if(!value["ComparisonOperator"].isNull())
			alarmListObject.comparisonOperator = value["ComparisonOperator"].asString();
		if(!value["Threshold"].isNull())
			alarmListObject.threshold = std::stof(value["Threshold"].asString());
		if(!value["EvaluationCount"].isNull())
			alarmListObject.evaluationCount = std::stoi(value["EvaluationCount"].asString());
		if(!value["State"].isNull())
			alarmListObject.state = value["State"].asString();
		if(!value["ScalingGroupId"].isNull())
			alarmListObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["Enable"].isNull())
			alarmListObject.enable = value["Enable"].asString() == "true";
		auto allDimensions = value["Dimensions"]["Dimension"];
		for (auto value : allDimensions)
		{
			Alarm::Dimension dimensionsObject;
			if(!value["DimensionKey"].isNull())
				dimensionsObject.dimensionKey = value["DimensionKey"].asString();
			if(!value["DimensionValue"].isNull())
				dimensionsObject.dimensionValue = value["DimensionValue"].asString();
			alarmListObject.dimensions.push_back(dimensionsObject);
		}
		auto allAlarmActions = value["AlarmActions"]["AlarmAction"];
		for (auto value : allAlarmActions)
			alarmListObject.alarmActions.push_back(value.asString());
		alarmList_.push_back(alarmListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeAlarmsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAlarmsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAlarmsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAlarmsResult::Alarm> DescribeAlarmsResult::getAlarmList()const
{
	return alarmList_;
}

