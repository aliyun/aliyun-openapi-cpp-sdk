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

#include <alibabacloud/emr/model/CreateScalingTaskGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateScalingTaskGroupRequest;

CreateScalingTaskGroupRequest::CreateScalingTaskGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateScalingTaskGroup")
{}

CreateScalingTaskGroupRequest::~CreateScalingTaskGroupRequest()
{}

long CreateScalingTaskGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateScalingTaskGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateScalingTaskGroupRequest::getDataDiskCategory()const
{
	return dataDiskCategory_;
}

void CreateScalingTaskGroupRequest::setDataDiskCategory(const std::string& dataDiskCategory)
{
	dataDiskCategory_ = dataDiskCategory;
	setCoreParameter("DataDiskCategory", dataDiskCategory);
}

std::string CreateScalingTaskGroupRequest::getClusterId()const
{
	return clusterId_;
}

void CreateScalingTaskGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int CreateScalingTaskGroupRequest::getMinSize()const
{
	return minSize_;
}

void CreateScalingTaskGroupRequest::setMinSize(int minSize)
{
	minSize_ = minSize;
	setCoreParameter("MinSize", std::to_string(minSize));
}

std::string CreateScalingTaskGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingTaskGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateScalingTaskGroupRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateScalingTaskGroupRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

int CreateScalingTaskGroupRequest::getDataDiskSize()const
{
	return dataDiskSize_;
}

void CreateScalingTaskGroupRequest::setDataDiskSize(int dataDiskSize)
{
	dataDiskSize_ = dataDiskSize;
	setCoreParameter("DataDiskSize", std::to_string(dataDiskSize));
}

std::vector<CreateScalingTaskGroupRequest::SpotPriceLimits> CreateScalingTaskGroupRequest::getSpotPriceLimits()const
{
	return spotPriceLimits_;
}

void CreateScalingTaskGroupRequest::setSpotPriceLimits(const std::vector<SpotPriceLimits>& spotPriceLimits)
{
	spotPriceLimits_ = spotPriceLimits;
	int i = 0;
	for(int i = 0; i!= spotPriceLimits.size(); i++)	{
		auto obj = spotPriceLimits.at(i);
		std::string str ="SpotPriceLimits."+ std::to_string(i);
		setCoreParameter(str + ".InstanceType", obj.instanceType);
		setCoreParameter(str + ".PriceLimit", std::to_string(obj.priceLimit));
	}
}

std::string CreateScalingTaskGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingTaskGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<CreateScalingTaskGroupRequest::ScalingRule> CreateScalingTaskGroupRequest::getScalingRule()const
{
	return scalingRule_;
}

void CreateScalingTaskGroupRequest::setScalingRule(const std::vector<ScalingRule>& scalingRule)
{
	scalingRule_ = scalingRule;
	int i = 0;
	for(int i = 0; i!= scalingRule.size(); i++)	{
		auto obj = scalingRule.at(i);
		std::string str ="ScalingRule."+ std::to_string(i);
		setCoreParameter(str + ".LaunchTime", obj.launchTime);
		setCoreParameter(str + ".RuleCategory", obj.ruleCategory);
		setCoreParameter(str + ".AdjustmentValue", std::to_string(obj.adjustmentValue));
		setCoreParameter(str + ".SchedulerTrigger", std::to_string(obj.schedulerTrigger));
		setCoreParameter(str + ".AdjustmentType", obj.adjustmentType);
		setCoreParameter(str + ".Cooldown", std::to_string(obj.cooldown));
		setCoreParameter(str + ".RuleName", obj.ruleName);
		setCoreParameter(str + ".LaunchExpirationTime", std::to_string(obj.launchExpirationTime));
		setCoreParameter(str + ".RecurrenceValue", obj.recurrenceValue);
		setCoreParameter(str + ".RecurrenceEndTime", obj.recurrenceEndTime);
		setCoreParameter(str + ".CloudWatchTrigger", std::to_string(obj.cloudWatchTrigger));
		setCoreParameter(str + ".RecurrenceType", obj.recurrenceType);
	}
}

std::string CreateScalingTaskGroupRequest::getActiveRuleCategory()const
{
	return activeRuleCategory_;
}

void CreateScalingTaskGroupRequest::setActiveRuleCategory(const std::string& activeRuleCategory)
{
	activeRuleCategory_ = activeRuleCategory;
	setCoreParameter("ActiveRuleCategory", activeRuleCategory);
}

int CreateScalingTaskGroupRequest::getMaxSize()const
{
	return maxSize_;
}

void CreateScalingTaskGroupRequest::setMaxSize(int maxSize)
{
	maxSize_ = maxSize;
	setCoreParameter("MaxSize", std::to_string(maxSize));
}

int CreateScalingTaskGroupRequest::getDataDiskCount()const
{
	return dataDiskCount_;
}

void CreateScalingTaskGroupRequest::setDataDiskCount(int dataDiskCount)
{
	dataDiskCount_ = dataDiskCount;
	setCoreParameter("DataDiskCount", std::to_string(dataDiskCount));
}

int CreateScalingTaskGroupRequest::getDefaultCooldown()const
{
	return defaultCooldown_;
}

void CreateScalingTaskGroupRequest::setDefaultCooldown(int defaultCooldown)
{
	defaultCooldown_ = defaultCooldown;
	setCoreParameter("DefaultCooldown", std::to_string(defaultCooldown));
}

std::string CreateScalingTaskGroupRequest::getPayType()const
{
	return payType_;
}

void CreateScalingTaskGroupRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::vector<std::string> CreateScalingTaskGroupRequest::getInstanceTypeList()const
{
	return instanceTypeList_;
}

void CreateScalingTaskGroupRequest::setInstanceTypeList(const std::vector<std::string>& instanceTypeList)
{
	instanceTypeList_ = instanceTypeList;
	for(int i = 0; i!= instanceTypeList.size(); i++)
		setCoreParameter("InstanceTypeList."+ std::to_string(i), instanceTypeList.at(i));
}

