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

#include <alibabacloud/emr/model/DescribeScalingRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeScalingRuleResult::DescribeScalingRuleResult() :
	ServiceResult()
{}

DescribeScalingRuleResult::DescribeScalingRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingRuleResult::~DescribeScalingRuleResult()
{}

void DescribeScalingRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto schedulerTriggerNode = value["SchedulerTrigger"];
	if(!schedulerTriggerNode["LaunchTime"].isNull())
		schedulerTrigger_.launchTime = std::stol(schedulerTriggerNode["LaunchTime"].asString());
	if(!schedulerTriggerNode["LaunchExpirationTime"].isNull())
		schedulerTrigger_.launchExpirationTime = std::stoi(schedulerTriggerNode["LaunchExpirationTime"].asString());
	if(!schedulerTriggerNode["RecurrenceType"].isNull())
		schedulerTrigger_.recurrenceType = schedulerTriggerNode["RecurrenceType"].asString();
	if(!schedulerTriggerNode["RecurrenceValue"].isNull())
		schedulerTrigger_.recurrenceValue = schedulerTriggerNode["RecurrenceValue"].asString();
	if(!schedulerTriggerNode["RecurrenceEndTime"].isNull())
		schedulerTrigger_.recurrenceEndTime = std::stol(schedulerTriggerNode["RecurrenceEndTime"].asString());
	auto cloudWatchTriggerNode = value["CloudWatchTrigger"];
	if(!cloudWatchTriggerNode["MetricName"].isNull())
		cloudWatchTrigger_.metricName = cloudWatchTriggerNode["MetricName"].asString();
	if(!cloudWatchTriggerNode["Period"].isNull())
		cloudWatchTrigger_.period = std::stoi(cloudWatchTriggerNode["Period"].asString());
	if(!cloudWatchTriggerNode["Statistics"].isNull())
		cloudWatchTrigger_.statistics = cloudWatchTriggerNode["Statistics"].asString();
	if(!cloudWatchTriggerNode["ComparisonOperator"].isNull())
		cloudWatchTrigger_.comparisonOperator = cloudWatchTriggerNode["ComparisonOperator"].asString();
	if(!cloudWatchTriggerNode["Threshold"].isNull())
		cloudWatchTrigger_.threshold = cloudWatchTriggerNode["Threshold"].asString();
	if(!cloudWatchTriggerNode["EvaluationCount"].isNull())
		cloudWatchTrigger_.evaluationCount = cloudWatchTriggerNode["EvaluationCount"].asString();
	if(!cloudWatchTriggerNode["Unit"].isNull())
		cloudWatchTrigger_.unit = cloudWatchTriggerNode["Unit"].asString();
	if(!cloudWatchTriggerNode["MetricDisplayName"].isNull())
		cloudWatchTrigger_.metricDisplayName = cloudWatchTriggerNode["MetricDisplayName"].asString();
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = value["GmtCreate"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["RuleName"].isNull())
		ruleName_ = value["RuleName"].asString();
	if(!value["RuleCategory"].isNull())
		ruleCategory_ = value["RuleCategory"].asString();
	if(!value["AdjustmentType"].isNull())
		adjustmentType_ = value["AdjustmentType"].asString();
	if(!value["AdjustmentValue"].isNull())
		adjustmentValue_ = std::stoi(value["AdjustmentValue"].asString());
	if(!value["Cooldown"].isNull())
		cooldown_ = std::stoi(value["Cooldown"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeScalingRuleResult::getStatus()const
{
	return status_;
}

std::string DescribeScalingRuleResult::getGmtCreate()const
{
	return gmtCreate_;
}

int DescribeScalingRuleResult::getAdjustmentValue()const
{
	return adjustmentValue_;
}

DescribeScalingRuleResult::SchedulerTrigger DescribeScalingRuleResult::getSchedulerTrigger()const
{
	return schedulerTrigger_;
}

DescribeScalingRuleResult::CloudWatchTrigger DescribeScalingRuleResult::getCloudWatchTrigger()const
{
	return cloudWatchTrigger_;
}

int DescribeScalingRuleResult::getCooldown()const
{
	return cooldown_;
}

std::string DescribeScalingRuleResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeScalingRuleResult::getId()const
{
	return id_;
}

std::string DescribeScalingRuleResult::getRuleName()const
{
	return ruleName_;
}

std::string DescribeScalingRuleResult::getRuleCategory()const
{
	return ruleCategory_;
}

std::string DescribeScalingRuleResult::getAdjustmentType()const
{
	return adjustmentType_;
}

