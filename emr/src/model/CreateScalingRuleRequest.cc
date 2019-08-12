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
	setCoreParameter("LaunchTime", std::to_string(launchTime));
}

long CreateScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateScalingRuleRequest::getRuleCategory()const
{
	return ruleCategory_;
}

void CreateScalingRuleRequest::setRuleCategory(const std::string& ruleCategory)
{
	ruleCategory_ = ruleCategory;
	setCoreParameter("RuleCategory", std::to_string(ruleCategory));
}

int CreateScalingRuleRequest::getAdjustmentValue()const
{
	return adjustmentValue_;
}

void CreateScalingRuleRequest::setAdjustmentValue(int adjustmentValue)
{
	adjustmentValue_ = adjustmentValue;
	setCoreParameter("AdjustmentValue", adjustmentValue);
}

std::string CreateScalingRuleRequest::getAdjustmentType()const
{
	return adjustmentType_;
}

void CreateScalingRuleRequest::setAdjustmentType(const std::string& adjustmentType)
{
	adjustmentType_ = adjustmentType;
	setCoreParameter("AdjustmentType", std::to_string(adjustmentType));
}

std::string CreateScalingRuleRequest::getRuleName()const
{
	return ruleName_;
}

void CreateScalingRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", std::to_string(ruleName));
}

std::string CreateScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void CreateScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

int CreateScalingRuleRequest::getLaunchExpirationTime()const
{
	return launchExpirationTime_;
}

void CreateScalingRuleRequest::setLaunchExpirationTime(int launchExpirationTime)
{
	launchExpirationTime_ = launchExpirationTime;
	setCoreParameter("LaunchExpirationTime", launchExpirationTime);
}

std::string CreateScalingRuleRequest::getRecurrenceValue()const
{
	return recurrenceValue_;
}

void CreateScalingRuleRequest::setRecurrenceValue(const std::string& recurrenceValue)
{
	recurrenceValue_ = recurrenceValue;
	setCoreParameter("RecurrenceValue", std::to_string(recurrenceValue));
}

std::string CreateScalingRuleRequest::getRecurrenceEndTime()const
{
	return recurrenceEndTime_;
}

void CreateScalingRuleRequest::setRecurrenceEndTime(const std::string& recurrenceEndTime)
{
	recurrenceEndTime_ = recurrenceEndTime;
	setCoreParameter("RecurrenceEndTime", std::to_string(recurrenceEndTime));
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
		setCoreParameter(str + ".Period", obj.period);
		setCoreParameter(str + ".EvaluationCount", std::to_string(obj.evaluationCount));
		setCoreParameter(str + ".Threshold", std::to_string(obj.threshold));
		setCoreParameter(str + ".MetricName", std::to_string(obj.metricName));
		setCoreParameter(str + ".ComparisonOperator", std::to_string(obj.comparisonOperator));
		setCoreParameter(str + ".Statistics", std::to_string(obj.statistics));
	}
}

std::string CreateScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateScalingRuleRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void CreateScalingRuleRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setCoreParameter("HostGroupId", std::to_string(hostGroupId));
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
		setCoreParameter(str + ".LaunchTime", std::to_string(obj.launchTime));
		setCoreParameter(str + ".LaunchExpirationTime", obj.launchExpirationTime);
		setCoreParameter(str + ".RecurrenceValue", std::to_string(obj.recurrenceValue));
		setCoreParameter(str + ".RecurrenceEndTime", std::to_string(obj.recurrenceEndTime));
		setCoreParameter(str + ".RecurrenceType", std::to_string(obj.recurrenceType));
	}
}

int CreateScalingRuleRequest::getCooldown()const
{
	return cooldown_;
}

void CreateScalingRuleRequest::setCooldown(int cooldown)
{
	cooldown_ = cooldown;
	setCoreParameter("Cooldown", cooldown);
}

std::string CreateScalingRuleRequest::getRecurrenceType()const
{
	return recurrenceType_;
}

void CreateScalingRuleRequest::setRecurrenceType(const std::string& recurrenceType)
{
	recurrenceType_ = recurrenceType;
	setCoreParameter("RecurrenceType", std::to_string(recurrenceType));
}

