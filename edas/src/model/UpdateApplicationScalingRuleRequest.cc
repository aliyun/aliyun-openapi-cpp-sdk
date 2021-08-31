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

#include <alibabacloud/edas/model/UpdateApplicationScalingRuleRequest.h>

using AlibabaCloud::Edas::Model::UpdateApplicationScalingRuleRequest;

UpdateApplicationScalingRuleRequest::UpdateApplicationScalingRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v1/eam/scale/application_scaling_rule");
	setMethod(HttpRequest::Method::Put);
}

UpdateApplicationScalingRuleRequest::~UpdateApplicationScalingRuleRequest()
{}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setParameter("ScalingRuleName", scalingRuleName);
}

bool UpdateApplicationScalingRuleRequest::getScalingRuleEnable()const
{
	return scalingRuleEnable_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleEnable(bool scalingRuleEnable)
{
	scalingRuleEnable_ = scalingRuleEnable;
	setParameter("ScalingRuleEnable", scalingRuleEnable ? "true" : "false");
}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleTimer()const
{
	return scalingRuleTimer_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleTimer(const std::string& scalingRuleTimer)
{
	scalingRuleTimer_ = scalingRuleTimer;
	setParameter("ScalingRuleTimer", scalingRuleTimer);
}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleMetric()const
{
	return scalingRuleMetric_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleMetric(const std::string& scalingRuleMetric)
{
	scalingRuleMetric_ = scalingRuleMetric;
	setParameter("ScalingRuleMetric", scalingRuleMetric);
}

std::string UpdateApplicationScalingRuleRequest::getAppId()const
{
	return appId_;
}

void UpdateApplicationScalingRuleRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleTrigger()const
{
	return scalingRuleTrigger_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleTrigger(const std::string& scalingRuleTrigger)
{
	scalingRuleTrigger_ = scalingRuleTrigger;
	setParameter("ScalingRuleTrigger", scalingRuleTrigger);
}

std::string UpdateApplicationScalingRuleRequest::getScalingRuleType()const
{
	return scalingRuleType_;
}

void UpdateApplicationScalingRuleRequest::setScalingRuleType(const std::string& scalingRuleType)
{
	scalingRuleType_ = scalingRuleType;
	setParameter("ScalingRuleType", scalingRuleType);
}

