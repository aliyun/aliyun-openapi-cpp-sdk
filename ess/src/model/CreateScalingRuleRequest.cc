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
{
	setMethod(HttpRequest::Method::Post);
}

CreateScalingRuleRequest::~CreateScalingRuleRequest()
{}

std::vector<CreateScalingRuleRequest::StepAdjustment> CreateScalingRuleRequest::getStepAdjustment()const
{
	return stepAdjustment_;
}

void CreateScalingRuleRequest::setStepAdjustment(const std::vector<StepAdjustment>& stepAdjustment)
{
	stepAdjustment_ = stepAdjustment;
	for(int dep1 = 0; dep1!= stepAdjustment.size(); dep1++) {
		auto stepAdjustmentObj = stepAdjustment.at(dep1);
		std::string stepAdjustmentObjStr = "StepAdjustment." + std::to_string(dep1 + 1);
		setParameter(stepAdjustmentObjStr + ".MetricIntervalLowerBound", std::to_string(stepAdjustmentObj.metricIntervalLowerBound));
		setParameter(stepAdjustmentObjStr + ".MetricIntervalUpperBound", std::to_string(stepAdjustmentObj.metricIntervalUpperBound));
		setParameter(stepAdjustmentObjStr + ".ScalingAdjustment", std::to_string(stepAdjustmentObj.scalingAdjustment));
	}
}

std::string CreateScalingRuleRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateScalingRuleRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

bool CreateScalingRuleRequest::getDisableScaleIn()const
{
	return disableScaleIn_;
}

void CreateScalingRuleRequest::setDisableScaleIn(bool disableScaleIn)
{
	disableScaleIn_ = disableScaleIn;
	setParameter("DisableScaleIn", disableScaleIn ? "true" : "false");
}

int CreateScalingRuleRequest::getInitialMaxSize()const
{
	return initialMaxSize_;
}

void CreateScalingRuleRequest::setInitialMaxSize(int initialMaxSize)
{
	initialMaxSize_ = initialMaxSize;
	setParameter("InitialMaxSize", std::to_string(initialMaxSize));
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

std::string CreateScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void CreateScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setParameter("ScalingRuleName", scalingRuleName);
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

std::string CreateScalingRuleRequest::getPredictiveValueBehavior()const
{
	return predictiveValueBehavior_;
}

void CreateScalingRuleRequest::setPredictiveValueBehavior(const std::string& predictiveValueBehavior)
{
	predictiveValueBehavior_ = predictiveValueBehavior;
	setParameter("PredictiveValueBehavior", predictiveValueBehavior);
}

std::string CreateScalingRuleRequest::getScalingRuleType()const
{
	return scalingRuleType_;
}

void CreateScalingRuleRequest::setScalingRuleType(const std::string& scalingRuleType)
{
	scalingRuleType_ = scalingRuleType;
	setParameter("ScalingRuleType", scalingRuleType);
}

std::string CreateScalingRuleRequest::getMetricName()const
{
	return metricName_;
}

void CreateScalingRuleRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setParameter("MetricName", metricName);
}

std::string CreateScalingRuleRequest::getPredictiveScalingMode()const
{
	return predictiveScalingMode_;
}

void CreateScalingRuleRequest::setPredictiveScalingMode(const std::string& predictiveScalingMode)
{
	predictiveScalingMode_ = predictiveScalingMode;
	setParameter("PredictiveScalingMode", predictiveScalingMode);
}

std::string CreateScalingRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScalingRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
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

int CreateScalingRuleRequest::getEstimatedInstanceWarmup()const
{
	return estimatedInstanceWarmup_;
}

void CreateScalingRuleRequest::setEstimatedInstanceWarmup(int estimatedInstanceWarmup)
{
	estimatedInstanceWarmup_ = estimatedInstanceWarmup;
	setParameter("EstimatedInstanceWarmup", std::to_string(estimatedInstanceWarmup));
}

std::string CreateScalingRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScalingRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CreateScalingRuleRequest::getPredictiveTaskBufferTime()const
{
	return predictiveTaskBufferTime_;
}

void CreateScalingRuleRequest::setPredictiveTaskBufferTime(int predictiveTaskBufferTime)
{
	predictiveTaskBufferTime_ = predictiveTaskBufferTime;
	setParameter("PredictiveTaskBufferTime", std::to_string(predictiveTaskBufferTime));
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

long CreateScalingRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScalingRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateScalingRuleRequest::getPredictiveValueBuffer()const
{
	return predictiveValueBuffer_;
}

void CreateScalingRuleRequest::setPredictiveValueBuffer(int predictiveValueBuffer)
{
	predictiveValueBuffer_ = predictiveValueBuffer;
	setParameter("PredictiveValueBuffer", std::to_string(predictiveValueBuffer));
}

int CreateScalingRuleRequest::getMinAdjustmentMagnitude()const
{
	return minAdjustmentMagnitude_;
}

void CreateScalingRuleRequest::setMinAdjustmentMagnitude(int minAdjustmentMagnitude)
{
	minAdjustmentMagnitude_ = minAdjustmentMagnitude;
	setParameter("MinAdjustmentMagnitude", std::to_string(minAdjustmentMagnitude));
}

float CreateScalingRuleRequest::getTargetValue()const
{
	return targetValue_;
}

void CreateScalingRuleRequest::setTargetValue(float targetValue)
{
	targetValue_ = targetValue;
	setParameter("TargetValue", std::to_string(targetValue));
}

