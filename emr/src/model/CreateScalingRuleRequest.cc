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

#include <alibabacloud/emr/model/CreateScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::CreateScalingRuleRequest;

CreateScalingRuleRequest::CreateScalingRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateScalingRule")
{}

CreateScalingRuleRequest::~CreateScalingRuleRequest()
{}

std::string CreateScalingRuleRequest::getLaunchTime()const
{
	return launchTime_;
}

void CreateScalingRuleRequest::setLaunchTime(const std::string& launchTime)
{
	launchTime_ = launchTime;
	setCoreParameter("LaunchTime", launchTime);
}

long CreateScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateScalingRuleRequest::getRuleCategory()const
{
	return ruleCategory_;
}

void CreateScalingRuleRequest::setRuleCategory(const std::string& ruleCategory)
{
	ruleCategory_ = ruleCategory;
	setCoreParameter("RuleCategory", ruleCategory);
}

int CreateScalingRuleRequest::getAdjustmentValue()const
{
	return adjustmentValue_;
}

void CreateScalingRuleRequest::setAdjustmentValue(int adjustmentValue)
{
	adjustmentValue_ = adjustmentValue;
	setCoreParameter("AdjustmentValue", std::to_string(adjustmentValue));
}

std::string CreateScalingRuleRequest::getAdjustmentType()const
{
	return adjustmentType_;
}

void CreateScalingRuleRequest::setAdjustmentType(const std::string& adjustmentType)
{
	adjustmentType_ = adjustmentType;
	setCoreParameter("AdjustmentType", adjustmentType);
}

std::string CreateScalingRuleRequest::getRuleName()const
{
	return ruleName_;
}

void CreateScalingRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::string CreateScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void CreateScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int CreateScalingRuleRequest::getLaunchExpirationTime()const
{
	return launchExpirationTime_;
}

void CreateScalingRuleRequest::setLaunchExpirationTime(int launchExpirationTime)
{
	launchExpirationTime_ = launchExpirationTime;
	setCoreParameter("LaunchExpirationTime", std::to_string(launchExpirationTime));
}

std::string CreateScalingRuleRequest::getRecurrenceValue()const
{
	return recurrenceValue_;
}

void CreateScalingRuleRequest::setRecurrenceValue(const std::string& recurrenceValue)
{
	recurrenceValue_ = recurrenceValue;
	setCoreParameter("RecurrenceValue", recurrenceValue);
}

std::string CreateScalingRuleRequest::getRecurrenceEndTime()const
{
	return recurrenceEndTime_;
}

void CreateScalingRuleRequest::setRecurrenceEndTime(const std::string& recurrenceEndTime)
{
	recurrenceEndTime_ = recurrenceEndTime;
	setCoreParameter("RecurrenceEndTime", recurrenceEndTime);
}

std::vector<CreateScalingRuleRequest::CloudWatchTrigger> CreateScalingRuleRequest::getCloudWatchTrigger()const
{
	return cloudWatchTrigger_;
}

void CreateScalingRuleRequest::setCloudWatchTrigger(const std::vector<CloudWatchTrigger>& cloudWatchTrigger)
{
	cloudWatchTrigger_ = cloudWatchTrigger;
	int i = 0;
	for(int i = 0; i!= cloudWatchTrigger.size(); i++)	{
		auto obj = cloudWatchTrigger.at(i);
		std::string str ="CloudWatchTrigger."+ std::to_string(i);
		setCoreParameter(str + ".Period", std::to_string(obj.period));
		setCoreParameter(str + ".EvaluationCount", obj.evaluationCount);
		setCoreParameter(str + ".Threshold", obj.threshold);
		setCoreParameter(str + ".MetricName", obj.metricName);
		setCoreParameter(str + ".ComparisonOperator", obj.comparisonOperator);
		setCoreParameter(str + ".Statistics", obj.statistics);
	}
}

std::string CreateScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateScalingRuleRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void CreateScalingRuleRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setCoreParameter("HostGroupId", hostGroupId);
}

std::vector<CreateScalingRuleRequest::SchedulerTrigger> CreateScalingRuleRequest::getSchedulerTrigger()const
{
	return schedulerTrigger_;
}

void CreateScalingRuleRequest::setSchedulerTrigger(const std::vector<SchedulerTrigger>& schedulerTrigger)
{
	schedulerTrigger_ = schedulerTrigger;
	int i = 0;
	for(int i = 0; i!= schedulerTrigger.size(); i++)	{
		auto obj = schedulerTrigger.at(i);
		std::string str ="SchedulerTrigger."+ std::to_string(i);
		setCoreParameter(str + ".LaunchTime", obj.launchTime);
		setCoreParameter(str + ".LaunchExpirationTime", std::to_string(obj.launchExpirationTime));
		setCoreParameter(str + ".RecurrenceValue", obj.recurrenceValue);
		setCoreParameter(str + ".RecurrenceEndTime", obj.recurrenceEndTime);
		setCoreParameter(str + ".RecurrenceType", obj.recurrenceType);
	}
}

int CreateScalingRuleRequest::getCooldown()const
{
	return cooldown_;
}

void CreateScalingRuleRequest::setCooldown(int cooldown)
{
	cooldown_ = cooldown;
	setCoreParameter("Cooldown", std::to_string(cooldown));
}

std::string CreateScalingRuleRequest::getRecurrenceType()const
{
	return recurrenceType_;
}

void CreateScalingRuleRequest::setRecurrenceType(const std::string& recurrenceType)
{
	recurrenceType_ = recurrenceType;
	setCoreParameter("RecurrenceType", recurrenceType);
}

