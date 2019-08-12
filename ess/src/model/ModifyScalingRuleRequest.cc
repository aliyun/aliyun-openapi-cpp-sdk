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

#include <alibabacloud/ess/model/ModifyScalingRuleRequest.h>

using AlibabaCloud::Ess::Model::ModifyScalingRuleRequest;

ModifyScalingRuleRequest::ModifyScalingRuleRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ModifyScalingRule")
{}

ModifyScalingRuleRequest::~ModifyScalingRuleRequest()
{}

long ModifyScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyScalingRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyScalingRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

int ModifyScalingRuleRequest::getAdjustmentValue()const
{
	return adjustmentValue_;
}

void ModifyScalingRuleRequest::setAdjustmentValue(int adjustmentValue)
{
	adjustmentValue_ = adjustmentValue;
	setCoreParameter("AdjustmentValue", adjustmentValue);
}

std::vector<ModifyScalingRuleRequest::StepAdjustment> ModifyScalingRuleRequest::getStepAdjustment()const
{
	return stepAdjustment_;
}

void ModifyScalingRuleRequest::setStepAdjustment(const std::vector<StepAdjustment>& stepAdjustment)
{
	stepAdjustment_ = stepAdjustment;
	int i = 0;
	for(int i = 0; i!= stepAdjustment.size(); i++)	{
		auto obj = stepAdjustment.at(i);
		std::string str ="StepAdjustment."+ std::to_string(i);
		setCoreParameter(str + ".MetricIntervalLowerBound", obj.metricIntervalLowerBound);
		setCoreParameter(str + ".MetricIntervalUpperBound", obj.metricIntervalUpperBound);
		setCoreParameter(str + ".ScalingAdjustment", obj.scalingAdjustment);
	}
}

int ModifyScalingRuleRequest::getEstimatedInstanceWarmup()const
{
	return estimatedInstanceWarmup_;
}

void ModifyScalingRuleRequest::setEstimatedInstanceWarmup(int estimatedInstanceWarmup)
{
	estimatedInstanceWarmup_ = estimatedInstanceWarmup;
	setCoreParameter("EstimatedInstanceWarmup", estimatedInstanceWarmup);
}

std::string ModifyScalingRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyScalingRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int ModifyScalingRuleRequest::getPredictiveTaskBufferTime()const
{
	return predictiveTaskBufferTime_;
}

void ModifyScalingRuleRequest::setPredictiveTaskBufferTime(int predictiveTaskBufferTime)
{
	predictiveTaskBufferTime_ = predictiveTaskBufferTime;
	setCoreParameter("PredictiveTaskBufferTime", predictiveTaskBufferTime);
}

std::string ModifyScalingRuleRequest::getAdjustmentType()const
{
	return adjustmentType_;
}

void ModifyScalingRuleRequest::setAdjustmentType(const std::string& adjustmentType)
{
	adjustmentType_ = adjustmentType;
	setCoreParameter("AdjustmentType", std::to_string(adjustmentType));
}

bool ModifyScalingRuleRequest::getDisableScaleIn()const
{
	return disableScaleIn_;
}

void ModifyScalingRuleRequest::setDisableScaleIn(bool disableScaleIn)
{
	disableScaleIn_ = disableScaleIn;
	setCoreParameter("DisableScaleIn", disableScaleIn ? "true" : "false");
}

long ModifyScalingRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyScalingRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void ModifyScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setCoreParameter("ScalingRuleId", std::to_string(scalingRuleId));
}

int ModifyScalingRuleRequest::getInitialMaxSize()const
{
	return initialMaxSize_;
}

void ModifyScalingRuleRequest::setInitialMaxSize(int initialMaxSize)
{
	initialMaxSize_ = initialMaxSize;
	setCoreParameter("InitialMaxSize", initialMaxSize);
}

std::string ModifyScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int ModifyScalingRuleRequest::getPredictiveValueBuffer()const
{
	return predictiveValueBuffer_;
}

void ModifyScalingRuleRequest::setPredictiveValueBuffer(int predictiveValueBuffer)
{
	predictiveValueBuffer_ = predictiveValueBuffer;
	setCoreParameter("PredictiveValueBuffer", predictiveValueBuffer);
}

std::string ModifyScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void ModifyScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setCoreParameter("ScalingRuleName", std::to_string(scalingRuleName));
}

int ModifyScalingRuleRequest::getCooldown()const
{
	return cooldown_;
}

void ModifyScalingRuleRequest::setCooldown(int cooldown)
{
	cooldown_ = cooldown;
	setCoreParameter("Cooldown", cooldown);
}

int ModifyScalingRuleRequest::getMinAdjustmentMagnitude()const
{
	return minAdjustmentMagnitude_;
}

void ModifyScalingRuleRequest::setMinAdjustmentMagnitude(int minAdjustmentMagnitude)
{
	minAdjustmentMagnitude_ = minAdjustmentMagnitude;
	setCoreParameter("MinAdjustmentMagnitude", minAdjustmentMagnitude);
}

std::string ModifyScalingRuleRequest::getPredictiveValueBehavior()const
{
	return predictiveValueBehavior_;
}

void ModifyScalingRuleRequest::setPredictiveValueBehavior(const std::string& predictiveValueBehavior)
{
	predictiveValueBehavior_ = predictiveValueBehavior;
	setCoreParameter("PredictiveValueBehavior", std::to_string(predictiveValueBehavior));
}

float ModifyScalingRuleRequest::getTargetValue()const
{
	return targetValue_;
}

void ModifyScalingRuleRequest::setTargetValue(float targetValue)
{
	targetValue_ = targetValue;
	setCoreParameter("TargetValue", targetValue);
}

std::string ModifyScalingRuleRequest::getMetricName()const
{
	return metricName_;
}

void ModifyScalingRuleRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", std::to_string(metricName));
}

std::string ModifyScalingRuleRequest::getPredictiveScalingMode()const
{
	return predictiveScalingMode_;
}

void ModifyScalingRuleRequest::setPredictiveScalingMode(const std::string& predictiveScalingMode)
{
	predictiveScalingMode_ = predictiveScalingMode;
	setCoreParameter("PredictiveScalingMode", std::to_string(predictiveScalingMode));
}

