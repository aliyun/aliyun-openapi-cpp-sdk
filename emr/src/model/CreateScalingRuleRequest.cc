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
{
	setMethod(HttpRequest::Method::Post);
}

CreateScalingRuleRequest::~CreateScalingRuleRequest()
{}

long CreateScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateScalingRuleRequest::getRuleName()const
{
	return ruleName_;
}

void CreateScalingRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string CreateScalingRuleRequest::getRecurrenceEndTime()const
{
	return recurrenceEndTime_;
}

void CreateScalingRuleRequest::setRecurrenceEndTime(const std::string& recurrenceEndTime)
{
	recurrenceEndTime_ = recurrenceEndTime;
	setParameter("RecurrenceEndTime", recurrenceEndTime);
}

std::vector<CreateScalingRuleRequest::CloudWatchTrigger> CreateScalingRuleRequest::getCloudWatchTrigger()const
{
	return cloudWatchTrigger_;
}

void CreateScalingRuleRequest::setCloudWatchTrigger(const std::vector<CloudWatchTrigger>& cloudWatchTrigger)
{
	cloudWatchTrigger_ = cloudWatchTrigger;
	for(int dep1 = 0; dep1!= cloudWatchTrigger.size(); dep1++) {
		auto cloudWatchTriggerObj = cloudWatchTrigger.at(dep1);
		std::string cloudWatchTriggerObjStr = "CloudWatchTrigger." + std::to_string(dep1 + 1);
		setParameter(cloudWatchTriggerObjStr + ".Period", std::to_string(cloudWatchTriggerObj.period));
		setParameter(cloudWatchTriggerObjStr + ".EvaluationCount", cloudWatchTriggerObj.evaluationCount);
		setParameter(cloudWatchTriggerObjStr + ".Threshold", cloudWatchTriggerObj.threshold);
		setParameter(cloudWatchTriggerObjStr + ".MetricName", cloudWatchTriggerObj.metricName);
		setParameter(cloudWatchTriggerObjStr + ".ComparisonOperator", cloudWatchTriggerObj.comparisonOperator);
		setParameter(cloudWatchTriggerObjStr + ".Statistics", cloudWatchTriggerObj.statistics);
	}
}

std::string CreateScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateScalingRuleRequest::getCooldown()const
{
	return cooldown_;
}

void CreateScalingRuleRequest::setCooldown(int cooldown)
{
	cooldown_ = cooldown;
	setParameter("Cooldown", std::to_string(cooldown));
}

std::string CreateScalingRuleRequest::getLaunchTime()const
{
	return launchTime_;
}

void CreateScalingRuleRequest::setLaunchTime(const std::string& launchTime)
{
	launchTime_ = launchTime;
	setParameter("LaunchTime", launchTime);
}

std::string CreateScalingRuleRequest::getRuleCategory()const
{
	return ruleCategory_;
}

void CreateScalingRuleRequest::setRuleCategory(const std::string& ruleCategory)
{
	ruleCategory_ = ruleCategory;
	setParameter("RuleCategory", ruleCategory);
}

int CreateScalingRuleRequest::getAdjustmentValue()const
{
	return adjustmentValue_;
}

void CreateScalingRuleRequest::setAdjustmentValue(int adjustmentValue)
{
	adjustmentValue_ = adjustmentValue;
	setParameter("AdjustmentValue", std::to_string(adjustmentValue));
}

std::string CreateScalingRuleRequest::getAdjustmentType()const
{
	return adjustmentType_;
}

void CreateScalingRuleRequest::setAdjustmentType(const std::string& adjustmentType)
{
	adjustmentType_ = adjustmentType;
	setParameter("AdjustmentType", adjustmentType);
}

std::string CreateScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void CreateScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int CreateScalingRuleRequest::getLaunchExpirationTime()const
{
	return launchExpirationTime_;
}

void CreateScalingRuleRequest::setLaunchExpirationTime(int launchExpirationTime)
{
	launchExpirationTime_ = launchExpirationTime;
	setParameter("LaunchExpirationTime", std::to_string(launchExpirationTime));
}

std::string CreateScalingRuleRequest::getRecurrenceValue()const
{
	return recurrenceValue_;
}

void CreateScalingRuleRequest::setRecurrenceValue(const std::string& recurrenceValue)
{
	recurrenceValue_ = recurrenceValue;
	setParameter("RecurrenceValue", recurrenceValue);
}

std::string CreateScalingRuleRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void CreateScalingRuleRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::vector<CreateScalingRuleRequest::SchedulerTrigger> CreateScalingRuleRequest::getSchedulerTrigger()const
{
	return schedulerTrigger_;
}

void CreateScalingRuleRequest::setSchedulerTrigger(const std::vector<SchedulerTrigger>& schedulerTrigger)
{
	schedulerTrigger_ = schedulerTrigger;
	for(int dep1 = 0; dep1!= schedulerTrigger.size(); dep1++) {
		auto schedulerTriggerObj = schedulerTrigger.at(dep1);
		std::string schedulerTriggerObjStr = "SchedulerTrigger." + std::to_string(dep1 + 1);
		setParameter(schedulerTriggerObjStr + ".LaunchTime", schedulerTriggerObj.launchTime);
		setParameter(schedulerTriggerObjStr + ".LaunchExpirationTime", std::to_string(schedulerTriggerObj.launchExpirationTime));
		setParameter(schedulerTriggerObjStr + ".RecurrenceValue", schedulerTriggerObj.recurrenceValue);
		setParameter(schedulerTriggerObjStr + ".RecurrenceEndTime", schedulerTriggerObj.recurrenceEndTime);
		setParameter(schedulerTriggerObjStr + ".RecurrenceType", schedulerTriggerObj.recurrenceType);
	}
}

std::string CreateScalingRuleRequest::getRecurrenceType()const
{
	return recurrenceType_;
}

void CreateScalingRuleRequest::setRecurrenceType(const std::string& recurrenceType)
{
	recurrenceType_ = recurrenceType;
	setParameter("RecurrenceType", recurrenceType);
}

