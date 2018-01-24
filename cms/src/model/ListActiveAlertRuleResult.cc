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

#include <alibabacloud/cms/model/ListActiveAlertRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListActiveAlertRuleResult::ListActiveAlertRuleResult() :
	ServiceResult()
{}

ListActiveAlertRuleResult::ListActiveAlertRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListActiveAlertRuleResult::~ListActiveAlertRuleResult()
{}

void ListActiveAlertRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDatapoints = value["Datapoints"]["Alarm"];
	for (auto value : allDatapoints)
	{
		Alarm datapointsObject;
		if(!value["Uuid"].isNull())
			datapointsObject.uuid = value["Uuid"].asString();
		if(!value["Name"].isNull())
			datapointsObject.name = value["Name"].asString();
		if(!value["Namespace"].isNull())
			datapointsObject._namespace = value["Namespace"].asString();
		if(!value["MetricName"].isNull())
			datapointsObject.metricName = value["MetricName"].asString();
		if(!value["Period"].isNull())
			datapointsObject.period = value["Period"].asString();
		if(!value["Statistics"].isNull())
			datapointsObject.statistics = value["Statistics"].asString();
		if(!value["ComparisonOperator"].isNull())
			datapointsObject.comparisonOperator = value["ComparisonOperator"].asString();
		if(!value["Threshold"].isNull())
			datapointsObject.threshold = value["Threshold"].asString();
		if(!value["EvaluationCount"].isNull())
			datapointsObject.evaluationCount = value["EvaluationCount"].asString();
		if(!value["StartTime"].isNull())
			datapointsObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			datapointsObject.endTime = value["EndTime"].asString();
		if(!value["SilenceTime"].isNull())
			datapointsObject.silenceTime = value["SilenceTime"].asString();
		if(!value["NotifyType"].isNull())
			datapointsObject.notifyType = value["NotifyType"].asString();
		if(!value["Enable"].isNull())
			datapointsObject.enable = value["Enable"].asString();
		if(!value["State"].isNull())
			datapointsObject.state = value["State"].asString();
		if(!value["ContactGroups"].isNull())
			datapointsObject.contactGroups = value["ContactGroups"].asString();
		if(!value["Webhook"].isNull())
			datapointsObject.webhook = value["Webhook"].asString();
		if(!value["RuleName"].isNull())
			datapointsObject.ruleName = value["RuleName"].asString();
		datapoints_.push_back(datapointsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListActiveAlertRuleResult::getMessage()const
{
	return message_;
}

std::vector<ListActiveAlertRuleResult::Alarm> ListActiveAlertRuleResult::getDatapoints()const
{
	return datapoints_;
}

std::string ListActiveAlertRuleResult::getCode()const
{
	return code_;
}

bool ListActiveAlertRuleResult::getSuccess()const
{
	return success_;
}

