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

#include <alibabacloud/edas/model/InsertFlowControlRequest.h>

using AlibabaCloud::Edas::Model::InsertFlowControlRequest;

InsertFlowControlRequest::InsertFlowControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/flowControl");
	setMethod(HttpRequest::Method::Post);
}

InsertFlowControlRequest::~InsertFlowControlRequest()
{}

std::string InsertFlowControlRequest::getConsumerAppId()const
{
	return consumerAppId_;
}

void InsertFlowControlRequest::setConsumerAppId(const std::string& consumerAppId)
{
	consumerAppId_ = consumerAppId;
	setParameter("ConsumerAppId", consumerAppId);
}

std::string InsertFlowControlRequest::getGranularity()const
{
	return granularity_;
}

void InsertFlowControlRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setParameter("Granularity", granularity);
}

std::string InsertFlowControlRequest::getRuleType()const
{
	return ruleType_;
}

void InsertFlowControlRequest::setRuleType(const std::string& ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", ruleType);
}

std::string InsertFlowControlRequest::getAppId()const
{
	return appId_;
}

void InsertFlowControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string InsertFlowControlRequest::getUrlVar()const
{
	return urlVar_;
}

void InsertFlowControlRequest::setUrlVar(const std::string& urlVar)
{
	urlVar_ = urlVar;
	setParameter("UrlVar", urlVar);
}

std::string InsertFlowControlRequest::getServiceName()const
{
	return serviceName_;
}

void InsertFlowControlRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

int InsertFlowControlRequest::getThreshold()const
{
	return threshold_;
}

void InsertFlowControlRequest::setThreshold(int threshold)
{
	threshold_ = threshold;
	setParameter("Threshold", std::to_string(threshold));
}

std::string InsertFlowControlRequest::getStrategy()const
{
	return strategy_;
}

void InsertFlowControlRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setParameter("Strategy", strategy);
}

std::string InsertFlowControlRequest::getMethodName()const
{
	return methodName_;
}

void InsertFlowControlRequest::setMethodName(const std::string& methodName)
{
	methodName_ = methodName;
	setParameter("MethodName", methodName);
}

