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

#include <alibabacloud/edas/model/CreateApplicationScalingRuleRequest.h>

using AlibabaCloud::Edas::Model::CreateApplicationScalingRuleRequest;

CreateApplicationScalingRuleRequest::CreateApplicationScalingRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v1/eam/scale/application_scaling_rule");
	setMethod(HttpRequest::Method::Post);
}

CreateApplicationScalingRuleRequest::~CreateApplicationScalingRuleRequest()
{}

std::string CreateApplicationScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setParameter("ScalingRuleName", scalingRuleName);
}

bool CreateApplicationScalingRuleRequest::getScalingRuleEnable()const
{
	return scalingRuleEnable_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleEnable(bool scalingRuleEnable)
{
	scalingRuleEnable_ = scalingRuleEnable;
	setParameter("ScalingRuleEnable", scalingRuleEnable ? "true" : "false");
}

std::string CreateApplicationScalingRuleRequest::getScalingRuleTimer()const
{
	return scalingRuleTimer_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleTimer(const std::string& scalingRuleTimer)
{
	scalingRuleTimer_ = scalingRuleTimer;
	setParameter("ScalingRuleTimer", scalingRuleTimer);
}

std::string CreateApplicationScalingRuleRequest::getScalingRuleMetric()const
{
	return scalingRuleMetric_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleMetric(const std::string& scalingRuleMetric)
{
	scalingRuleMetric_ = scalingRuleMetric;
	setParameter("ScalingRuleMetric", scalingRuleMetric);
}

std::string CreateApplicationScalingRuleRequest::getAppId()const
{
	return appId_;
}

void CreateApplicationScalingRuleRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string CreateApplicationScalingRuleRequest::getScalingRuleTrigger()const
{
	return scalingRuleTrigger_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleTrigger(const std::string& scalingRuleTrigger)
{
	scalingRuleTrigger_ = scalingRuleTrigger;
	setParameter("ScalingRuleTrigger", scalingRuleTrigger);
}

std::string CreateApplicationScalingRuleRequest::getScalingRuleType()const
{
	return scalingRuleType_;
}

void CreateApplicationScalingRuleRequest::setScalingRuleType(const std::string& scalingRuleType)
{
	scalingRuleType_ = scalingRuleType;
	setParameter("ScalingRuleType", scalingRuleType);
}

