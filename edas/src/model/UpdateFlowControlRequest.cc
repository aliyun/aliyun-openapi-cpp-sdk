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

#include <alibabacloud/edas/model/UpdateFlowControlRequest.h>

using AlibabaCloud::Edas::Model::UpdateFlowControlRequest;

UpdateFlowControlRequest::UpdateFlowControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/flowControl");
	setMethod(HttpRequest::Method::Put);
}

UpdateFlowControlRequest::~UpdateFlowControlRequest()
{}

std::string UpdateFlowControlRequest::getConsumerAppId()const
{
	return consumerAppId_;
}

void UpdateFlowControlRequest::setConsumerAppId(const std::string& consumerAppId)
{
	consumerAppId_ = consumerAppId;
	setParameter("ConsumerAppId", consumerAppId);
}

std::string UpdateFlowControlRequest::getGranularity()const
{
	return granularity_;
}

void UpdateFlowControlRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setParameter("Granularity", granularity);
}

std::string UpdateFlowControlRequest::getRuleType()const
{
	return ruleType_;
}

void UpdateFlowControlRequest::setRuleType(const std::string& ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", ruleType);
}

std::string UpdateFlowControlRequest::getAppId()const
{
	return appId_;
}

void UpdateFlowControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateFlowControlRequest::getUrlVar()const
{
	return urlVar_;
}

void UpdateFlowControlRequest::setUrlVar(const std::string& urlVar)
{
	urlVar_ = urlVar;
	setParameter("UrlVar", urlVar);
}

std::string UpdateFlowControlRequest::getServiceName()const
{
	return serviceName_;
}

void UpdateFlowControlRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

int UpdateFlowControlRequest::getThreshold()const
{
	return threshold_;
}

void UpdateFlowControlRequest::setThreshold(int threshold)
{
	threshold_ = threshold;
	setParameter("Threshold", std::to_string(threshold));
}

std::string UpdateFlowControlRequest::getRuleId()const
{
	return ruleId_;
}

void UpdateFlowControlRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

std::string UpdateFlowControlRequest::getStrategy()const
{
	return strategy_;
}

void UpdateFlowControlRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setParameter("Strategy", strategy);
}

std::string UpdateFlowControlRequest::getMethodName()const
{
	return methodName_;
}

void UpdateFlowControlRequest::setMethodName(const std::string& methodName)
{
	methodName_ = methodName;
	setParameter("MethodName", methodName);
}

