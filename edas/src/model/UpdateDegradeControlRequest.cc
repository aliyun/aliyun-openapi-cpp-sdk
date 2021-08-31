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

#include <alibabacloud/edas/model/UpdateDegradeControlRequest.h>

using AlibabaCloud::Edas::Model::UpdateDegradeControlRequest;

UpdateDegradeControlRequest::UpdateDegradeControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/degradeControl");
	setMethod(HttpRequest::Method::Put);
}

UpdateDegradeControlRequest::~UpdateDegradeControlRequest()
{}

int UpdateDegradeControlRequest::getDuration()const
{
	return duration_;
}

void UpdateDegradeControlRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string UpdateDegradeControlRequest::getRuleType()const
{
	return ruleType_;
}

void UpdateDegradeControlRequest::setRuleType(const std::string& ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", ruleType);
}

std::string UpdateDegradeControlRequest::getAppId()const
{
	return appId_;
}

void UpdateDegradeControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateDegradeControlRequest::getUrlVar()const
{
	return urlVar_;
}

void UpdateDegradeControlRequest::setUrlVar(const std::string& urlVar)
{
	urlVar_ = urlVar;
	setParameter("UrlVar", urlVar);
}

int UpdateDegradeControlRequest::getRtThreshold()const
{
	return rtThreshold_;
}

void UpdateDegradeControlRequest::setRtThreshold(int rtThreshold)
{
	rtThreshold_ = rtThreshold;
	setParameter("RtThreshold", std::to_string(rtThreshold));
}

std::string UpdateDegradeControlRequest::getServiceName()const
{
	return serviceName_;
}

void UpdateDegradeControlRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string UpdateDegradeControlRequest::getRuleId()const
{
	return ruleId_;
}

void UpdateDegradeControlRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

std::string UpdateDegradeControlRequest::getMethodName()const
{
	return methodName_;
}

void UpdateDegradeControlRequest::setMethodName(const std::string& methodName)
{
	methodName_ = methodName;
	setParameter("MethodName", methodName);
}

