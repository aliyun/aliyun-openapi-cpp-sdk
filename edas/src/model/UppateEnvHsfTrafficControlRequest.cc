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

#include <alibabacloud/edas/model/UppateEnvHsfTrafficControlRequest.h>

using AlibabaCloud::Edas::Model::UppateEnvHsfTrafficControlRequest;

UppateEnvHsfTrafficControlRequest::UppateEnvHsfTrafficControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/env_hsf_traffic_control");
	setMethod(HttpRequest::Method::Put);
}

UppateEnvHsfTrafficControlRequest::~UppateEnvHsfTrafficControlRequest()
{}

std::string UppateEnvHsfTrafficControlRequest::getParamTypes()const
{
	return paramTypes_;
}

void UppateEnvHsfTrafficControlRequest::setParamTypes(const std::string& paramTypes)
{
	paramTypes_ = paramTypes;
	setBodyParameter("ParamTypes", paramTypes);
}

std::string UppateEnvHsfTrafficControlRequest::getCondition()const
{
	return condition_;
}

void UppateEnvHsfTrafficControlRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setBodyParameter("Condition", condition);
}

std::string UppateEnvHsfTrafficControlRequest::getAppId()const
{
	return appId_;
}

void UppateEnvHsfTrafficControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string UppateEnvHsfTrafficControlRequest::getLabelAdviceName()const
{
	return labelAdviceName_;
}

void UppateEnvHsfTrafficControlRequest::setLabelAdviceName(const std::string& labelAdviceName)
{
	labelAdviceName_ = labelAdviceName;
	setBodyParameter("LabelAdviceName", labelAdviceName);
}

std::string UppateEnvHsfTrafficControlRequest::getPointcutName()const
{
	return pointcutName_;
}

void UppateEnvHsfTrafficControlRequest::setPointcutName(const std::string& pointcutName)
{
	pointcutName_ = pointcutName;
	setBodyParameter("PointcutName", pointcutName);
}

std::string UppateEnvHsfTrafficControlRequest::getServiceName()const
{
	return serviceName_;
}

void UppateEnvHsfTrafficControlRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setBodyParameter("ServiceName", serviceName);
}

std::string UppateEnvHsfTrafficControlRequest::getTriggerPolicy()const
{
	return triggerPolicy_;
}

void UppateEnvHsfTrafficControlRequest::setTriggerPolicy(const std::string& triggerPolicy)
{
	triggerPolicy_ = triggerPolicy;
	setBodyParameter("TriggerPolicy", triggerPolicy);
}

std::string UppateEnvHsfTrafficControlRequest::getGroup()const
{
	return group_;
}

void UppateEnvHsfTrafficControlRequest::setGroup(const std::string& group)
{
	group_ = group;
	setBodyParameter("Group", group);
}

std::string UppateEnvHsfTrafficControlRequest::getMethodName()const
{
	return methodName_;
}

void UppateEnvHsfTrafficControlRequest::setMethodName(const std::string& methodName)
{
	methodName_ = methodName;
	setBodyParameter("MethodName", methodName);
}

