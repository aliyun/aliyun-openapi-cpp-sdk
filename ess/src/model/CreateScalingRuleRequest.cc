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

#include <alibabacloud/ess/model/CreateScalingRuleRequest.h>

using AlibabaCloud::Ess::Model::CreateScalingRuleRequest;

CreateScalingRuleRequest::CreateScalingRuleRequest() :
	RpcServiceRequest("ess", "2014-08-28", "CreateScalingRule")
{}

CreateScalingRuleRequest::~CreateScalingRuleRequest()
{}

std::string CreateScalingRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScalingRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
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

std::vector<CreateScalingRuleRequest::StepAdjustment> CreateScalingRuleRequest::getStepAdjustment()const
{
	return stepAdjustment_;
}

void CreateScalingRuleRequest::setStepAdjustment(const std::vector<StepAdjustment>& stepAdjustment)
{
	stepAdjustment_ = stepAdjustment;
	int i = 0;
	for(int i = 0; i!= stepAdjustment.size(); i++)	{
		auto obj = stepAdjustment.at(i);
		std::string str ="StepAdjustment."+ std::to_string(i);
		setCoreParameter(str + ".MetricIntervalLowerBound", std::to_string(obj.metricIntervalLowerBound));
		setCoreParameter(str + ".MetricIntervalUpperBound", std::to_string(obj.metricIntervalUpperBound));
		setCoreParameter(str + ".ScalingAdjustment", std::to_string(obj.scalingAdjustment));
	}
}

std::string CreateScalingRuleRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateScalingRuleRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

int CreateScalingRuleRequest::getEstimatedInstanceWarmup()const
{
	return estimatedInstanceWarmup_;
}

void CreateScalingRuleRequest::setEstimatedInstanceWarmup(int estimatedInstanceWarmup)
{
	estimatedInstanceWarmup_ = estimatedInstanceWarmup;
	setCoreParameter("EstimatedInstanceWarmup", std::to_string(estimatedInstanceWarmup));
}

std::string CreateScalingRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScalingRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
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

bool CreateScalingRuleRequest::getDisableScaleIn()const
{
	return disableScaleIn_;
}

void CreateScalingRuleRequest::setDisableScaleIn(bool disableScaleIn)
{
	disableScaleIn_ = disableScaleIn;
	setCoreParameter("DisableScaleIn", disableScaleIn ? "true" : "false");
}

long CreateScalingRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScalingRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
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

std::string CreateScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void CreateScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setCoreParameter("ScalingRuleName", scalingRuleName);
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

int CreateScalingRuleRequest::getMinAdjustmentMagnitude()const
{
	return minAdjustmentMagnitude_;
}

void CreateScalingRuleRequest::setMinAdjustmentMagnitude(int minAdjustmentMagnitude)
{
	minAdjustmentMagnitude_ = minAdjustmentMagnitude;
	setCoreParameter("MinAdjustmentMagnitude", std::to_string(minAdjustmentMagnitude));
}

float CreateScalingRuleRequest::getTargetValue()const
{
	return targetValue_;
}

void CreateScalingRuleRequest::setTargetValue(float targetValue)
{
	targetValue_ = targetValue;
	setCoreParameter("TargetValue", std::to_string(targetValue));
}

std::string CreateScalingRuleRequest::getScalingRuleType()const
{
	return scalingRuleType_;
}

void CreateScalingRuleRequest::setScalingRuleType(const std::string& scalingRuleType)
{
	scalingRuleType_ = scalingRuleType;
	setCoreParameter("ScalingRuleType", scalingRuleType);
}

std::string CreateScalingRuleRequest::getMetricName()const
{
	return metricName_;
}

void CreateScalingRuleRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

