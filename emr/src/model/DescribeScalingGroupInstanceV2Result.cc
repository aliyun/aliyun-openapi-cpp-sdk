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

#include <alibabacloud/emr/model/DescribeScalingGroupInstanceV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeScalingGroupInstanceV2Result::DescribeScalingGroupInstanceV2Result() :
	ServiceResult()
{}

DescribeScalingGroupInstanceV2Result::DescribeScalingGroupInstanceV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingGroupInstanceV2Result::~DescribeScalingGroupInstanceV2Result()
{}

void DescribeScalingGroupInstanceV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingRuleListNode = value["ScalingRuleList"]["ScalingRule"];
	for (auto valueScalingRuleListScalingRule : allScalingRuleListNode)
	{
		ScalingRule scalingRuleListObject;
		if(!valueScalingRuleListScalingRule["RuleCategory"].isNull())
			scalingRuleListObject.ruleCategory = valueScalingRuleListScalingRule["RuleCategory"].asString();
		if(!valueScalingRuleListScalingRule["EssScalingRuleId"].isNull())
			scalingRuleListObject.essScalingRuleId = valueScalingRuleListScalingRule["EssScalingRuleId"].asString();
		if(!valueScalingRuleListScalingRule["ScalingGroupId"].isNull())
			scalingRuleListObject.scalingGroupId = std::stol(valueScalingRuleListScalingRule["ScalingGroupId"].asString());
		if(!valueScalingRuleListScalingRule["RuleName"].isNull())
			scalingRuleListObject.ruleName = valueScalingRuleListScalingRule["RuleName"].asString();
		if(!valueScalingRuleListScalingRule["AdjustmentType"].isNull())
			scalingRuleListObject.adjustmentType = valueScalingRuleListScalingRule["AdjustmentType"].asString();
		if(!valueScalingRuleListScalingRule["AdjustmentValue"].isNull())
			scalingRuleListObject.adjustmentValue = std::stoi(valueScalingRuleListScalingRule["AdjustmentValue"].asString());
		if(!valueScalingRuleListScalingRule["Cooldown"].isNull())
			scalingRuleListObject.cooldown = std::stoi(valueScalingRuleListScalingRule["Cooldown"].asString());
		if(!valueScalingRuleListScalingRule["Status"].isNull())
			scalingRuleListObject.status = valueScalingRuleListScalingRule["Status"].asString();
		if(!valueScalingRuleListScalingRule["LaunchTime"].isNull())
			scalingRuleListObject.launchTime = valueScalingRuleListScalingRule["LaunchTime"].asString();
		if(!valueScalingRuleListScalingRule["LaunchExpirationTime"].isNull())
			scalingRuleListObject.launchExpirationTime = std::stoi(valueScalingRuleListScalingRule["LaunchExpirationTime"].asString());
		if(!valueScalingRuleListScalingRule["RecurrenceType"].isNull())
			scalingRuleListObject.recurrenceType = valueScalingRuleListScalingRule["RecurrenceType"].asString();
		if(!valueScalingRuleListScalingRule["RecurrenceValue"].isNull())
			scalingRuleListObject.recurrenceValue = valueScalingRuleListScalingRule["RecurrenceValue"].asString();
		if(!valueScalingRuleListScalingRule["RecurrenceEndTime"].isNull())
			scalingRuleListObject.recurrenceEndTime = valueScalingRuleListScalingRule["RecurrenceEndTime"].asString();
		if(!valueScalingRuleListScalingRule["WithGrace"].isNull())
			scalingRuleListObject.withGrace = valueScalingRuleListScalingRule["WithGrace"].asString() == "true";
		if(!valueScalingRuleListScalingRule["TimeoutWithGrace"].isNull())
			scalingRuleListObject.timeoutWithGrace = std::stol(valueScalingRuleListScalingRule["TimeoutWithGrace"].asString());
		auto schedulerTriggerNode = value["SchedulerTrigger"];
		if(!schedulerTriggerNode["LaunchTime"].isNull())
			scalingRuleListObject.schedulerTrigger.launchTime = std::stol(schedulerTriggerNode["LaunchTime"].asString());
		if(!schedulerTriggerNode["LaunchExpirationTime"].isNull())
			scalingRuleListObject.schedulerTrigger.launchExpirationTime = std::stoi(schedulerTriggerNode["LaunchExpirationTime"].asString());
		if(!schedulerTriggerNode["RecurrenceType"].isNull())
			scalingRuleListObject.schedulerTrigger.recurrenceType = schedulerTriggerNode["RecurrenceType"].asString();
		if(!schedulerTriggerNode["RecurrenceValue"].isNull())
			scalingRuleListObject.schedulerTrigger.recurrenceValue = schedulerTriggerNode["RecurrenceValue"].asString();
		if(!schedulerTriggerNode["RecurrenceEndTime"].isNull())
			scalingRuleListObject.schedulerTrigger.recurrenceEndTime = std::stol(schedulerTriggerNode["RecurrenceEndTime"].asString());
		auto cloudWatchTriggerNode = value["CloudWatchTrigger"];
		if(!cloudWatchTriggerNode["MetricName"].isNull())
			scalingRuleListObject.cloudWatchTrigger.metricName = cloudWatchTriggerNode["MetricName"].asString();
		if(!cloudWatchTriggerNode["Period"].isNull())
			scalingRuleListObject.cloudWatchTrigger.period = std::stoi(cloudWatchTriggerNode["Period"].asString());
		if(!cloudWatchTriggerNode["Statistics"].isNull())
			scalingRuleListObject.cloudWatchTrigger.statistics = cloudWatchTriggerNode["Statistics"].asString();
		if(!cloudWatchTriggerNode["ComparisonOperator"].isNull())
			scalingRuleListObject.cloudWatchTrigger.comparisonOperator = cloudWatchTriggerNode["ComparisonOperator"].asString();
		if(!cloudWatchTriggerNode["Threshold"].isNull())
			scalingRuleListObject.cloudWatchTrigger.threshold = cloudWatchTriggerNode["Threshold"].asString();
		if(!cloudWatchTriggerNode["EvaluationCount"].isNull())
			scalingRuleListObject.cloudWatchTrigger.evaluationCount = cloudWatchTriggerNode["EvaluationCount"].asString();
		if(!cloudWatchTriggerNode["Unit"].isNull())
			scalingRuleListObject.cloudWatchTrigger.unit = cloudWatchTriggerNode["Unit"].asString();
		if(!cloudWatchTriggerNode["MetricDisplayName"].isNull())
			scalingRuleListObject.cloudWatchTrigger.metricDisplayName = cloudWatchTriggerNode["MetricDisplayName"].asString();
		scalingRuleList_.push_back(scalingRuleListObject);
	}
	auto scalingConfigNode = value["ScalingConfig"];
	if(!scalingConfigNode["SpotStrategy"].isNull())
		scalingConfig_.spotStrategy = scalingConfigNode["SpotStrategy"].asString();
	if(!scalingConfigNode["PayType"].isNull())
		scalingConfig_.payType = scalingConfigNode["PayType"].asString();
	if(!scalingConfigNode["DataDiskCategory"].isNull())
		scalingConfig_.dataDiskCategory = scalingConfigNode["DataDiskCategory"].asString();
	if(!scalingConfigNode["DataDiskSize"].isNull())
		scalingConfig_.dataDiskSize = std::stoi(scalingConfigNode["DataDiskSize"].asString());
	if(!scalingConfigNode["DataDiskCount"].isNull())
		scalingConfig_.dataDiskCount = std::stoi(scalingConfigNode["DataDiskCount"].asString());
	if(!scalingConfigNode["SysDiskCategory"].isNull())
		scalingConfig_.sysDiskCategory = scalingConfigNode["SysDiskCategory"].asString();
	if(!scalingConfigNode["SysDiskSize"].isNull())
		scalingConfig_.sysDiskSize = std::stoi(scalingConfigNode["SysDiskSize"].asString());
	auto allSpotPriceLimitsNode = scalingConfigNode["SpotPriceLimits"]["SpotPriceLimit"];
	for (auto scalingConfigNodeSpotPriceLimitsSpotPriceLimit : allSpotPriceLimitsNode)
	{
		ScalingConfig::SpotPriceLimit spotPriceLimitObject;
		if(!scalingConfigNodeSpotPriceLimitsSpotPriceLimit["InstanceType"].isNull())
			spotPriceLimitObject.instanceType = scalingConfigNodeSpotPriceLimitsSpotPriceLimit["InstanceType"].asString();
		if(!scalingConfigNodeSpotPriceLimitsSpotPriceLimit["PriceLimit"].isNull())
			spotPriceLimitObject.priceLimit = std::stof(scalingConfigNodeSpotPriceLimitsSpotPriceLimit["PriceLimit"].asString());
		scalingConfig_.spotPriceLimits.push_back(spotPriceLimitObject);
	}
		auto allInstanceTypeList = scalingConfigNode["InstanceTypeList"]["InstanceType"];
		for (auto value : allInstanceTypeList)
			scalingConfig_.instanceTypeList.push_back(value.asString());
	if(!value["HostGroupId"].isNull())
		hostGroupId_ = value["HostGroupId"].asString();
	if(!value["ScalingGroupId"].isNull())
		scalingGroupId_ = value["ScalingGroupId"].asString();
	if(!value["MinSize"].isNull())
		minSize_ = std::stoi(value["MinSize"].asString());
	if(!value["MaxSize"].isNull())
		maxSize_ = std::stoi(value["MaxSize"].asString());
	if(!value["DefaultCooldown"].isNull())
		defaultCooldown_ = std::stoi(value["DefaultCooldown"].asString());
	if(!value["ActiveRuleCategory"].isNull())
		activeRuleCategory_ = value["ActiveRuleCategory"].asString();
	if(!value["WithGrace"].isNull())
		withGrace_ = value["WithGrace"].asString() == "true";
	if(!value["TimeoutWithGrace"].isNull())
		timeoutWithGrace_ = std::stol(value["TimeoutWithGrace"].asString());
	if(!value["MultiAvailablePolicy"].isNull())
		multiAvailablePolicy_ = value["MultiAvailablePolicy"].asString();
	if(!value["MultiAvailablePolicyParam"].isNull())
		multiAvailablePolicyParam_ = value["MultiAvailablePolicyParam"].asString();

}

int DescribeScalingGroupInstanceV2Result::getMinSize()const
{
	return minSize_;
}

int DescribeScalingGroupInstanceV2Result::getDefaultCooldown()const
{
	return defaultCooldown_;
}

DescribeScalingGroupInstanceV2Result::ScalingConfig DescribeScalingGroupInstanceV2Result::getScalingConfig()const
{
	return scalingConfig_;
}

std::string DescribeScalingGroupInstanceV2Result::getHostGroupId()const
{
	return hostGroupId_;
}

std::string DescribeScalingGroupInstanceV2Result::getActiveRuleCategory()const
{
	return activeRuleCategory_;
}

long DescribeScalingGroupInstanceV2Result::getTimeoutWithGrace()const
{
	return timeoutWithGrace_;
}

std::string DescribeScalingGroupInstanceV2Result::getScalingGroupId()const
{
	return scalingGroupId_;
}

bool DescribeScalingGroupInstanceV2Result::getWithGrace()const
{
	return withGrace_;
}

std::vector<DescribeScalingGroupInstanceV2Result::ScalingRule> DescribeScalingGroupInstanceV2Result::getScalingRuleList()const
{
	return scalingRuleList_;
}

int DescribeScalingGroupInstanceV2Result::getMaxSize()const
{
	return maxSize_;
}

std::string DescribeScalingGroupInstanceV2Result::getMultiAvailablePolicy()const
{
	return multiAvailablePolicy_;
}

std::string DescribeScalingGroupInstanceV2Result::getMultiAvailablePolicyParam()const
{
	return multiAvailablePolicyParam_;
}

