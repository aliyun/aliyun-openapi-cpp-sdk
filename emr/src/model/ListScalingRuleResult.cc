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

#include <alibabacloud/emr/model/ListScalingRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingRuleResult::ListScalingRuleResult() :
	ServiceResult()
{}

ListScalingRuleResult::ListScalingRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingRuleResult::~ListScalingRuleResult()
{}

void ListScalingRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRuleList = value["RuleList"]["Rule"];
	for (auto value : allRuleList)
	{
		Rule ruleListObject;
		if(!value["Id"].isNull())
			ruleListObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			ruleListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			ruleListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["RuleName"].isNull())
			ruleListObject.ruleName = value["RuleName"].asString();
		if(!value["RuleCategory"].isNull())
			ruleListObject.ruleCategory = value["RuleCategory"].asString();
		if(!value["AdjustmentType"].isNull())
			ruleListObject.adjustmentType = value["AdjustmentType"].asString();
		if(!value["AdjustmentValue"].isNull())
			ruleListObject.adjustmentValue = std::stoi(value["AdjustmentValue"].asString());
		if(!value["Cooldown"].isNull())
			ruleListObject.cooldown = std::stoi(value["Cooldown"].asString());
		if(!value["Status"].isNull())
			ruleListObject.status = value["Status"].asString();
		auto schedulerTriggerNode = value["SchedulerTrigger"];
		if(!schedulerTriggerNode["LaunchTime"].isNull())
			ruleListObject.schedulerTrigger.launchTime = std::stol(schedulerTriggerNode["LaunchTime"].asString());
		if(!schedulerTriggerNode["LaunchExpirationTime"].isNull())
			ruleListObject.schedulerTrigger.launchExpirationTime = std::stoi(schedulerTriggerNode["LaunchExpirationTime"].asString());
		if(!schedulerTriggerNode["RecurrenceType"].isNull())
			ruleListObject.schedulerTrigger.recurrenceType = schedulerTriggerNode["RecurrenceType"].asString();
		if(!schedulerTriggerNode["RecurrenceValue"].isNull())
			ruleListObject.schedulerTrigger.recurrenceValue = schedulerTriggerNode["RecurrenceValue"].asString();
		if(!schedulerTriggerNode["RecurrenceEndTime"].isNull())
			ruleListObject.schedulerTrigger.recurrenceEndTime = std::stol(schedulerTriggerNode["RecurrenceEndTime"].asString());
		auto cloudWatchTriggerNode = value["CloudWatchTrigger"];
		if(!cloudWatchTriggerNode["MetricName"].isNull())
			ruleListObject.cloudWatchTrigger.metricName = cloudWatchTriggerNode["MetricName"].asString();
		if(!cloudWatchTriggerNode["Period"].isNull())
			ruleListObject.cloudWatchTrigger.period = std::stoi(cloudWatchTriggerNode["Period"].asString());
		if(!cloudWatchTriggerNode["Statistics"].isNull())
			ruleListObject.cloudWatchTrigger.statistics = cloudWatchTriggerNode["Statistics"].asString();
		if(!cloudWatchTriggerNode["ComparisonOperator"].isNull())
			ruleListObject.cloudWatchTrigger.comparisonOperator = cloudWatchTriggerNode["ComparisonOperator"].asString();
		if(!cloudWatchTriggerNode["Threshold"].isNull())
			ruleListObject.cloudWatchTrigger.threshold = cloudWatchTriggerNode["Threshold"].asString();
		if(!cloudWatchTriggerNode["EvaluationCount"].isNull())
			ruleListObject.cloudWatchTrigger.evaluationCount = cloudWatchTriggerNode["EvaluationCount"].asString();
		if(!cloudWatchTriggerNode["Unit"].isNull())
			ruleListObject.cloudWatchTrigger.unit = cloudWatchTriggerNode["Unit"].asString();
		if(!cloudWatchTriggerNode["MetricDisplayName"].isNull())
			ruleListObject.cloudWatchTrigger.metricDisplayName = cloudWatchTriggerNode["MetricDisplayName"].asString();
		ruleList_.push_back(ruleListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListScalingRuleResult::Rule> ListScalingRuleResult::getRuleList()const
{
	return ruleList_;
}

int ListScalingRuleResult::getPageSize()const
{
	return pageSize_;
}

int ListScalingRuleResult::getPageNumber()const
{
	return pageNumber_;
}

int ListScalingRuleResult::getTotal()const
{
	return total_;
}

