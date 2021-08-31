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

#include <alibabacloud/edas/model/CreateEnvHsfTrafficControlRequest.h>

using AlibabaCloud::Edas::Model::CreateEnvHsfTrafficControlRequest;

CreateEnvHsfTrafficControlRequest::CreateEnvHsfTrafficControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/env_hsf_traffic_control");
	setMethod(HttpRequest::Method::Post);
}

CreateEnvHsfTrafficControlRequest::~CreateEnvHsfTrafficControlRequest()
{}

std::string CreateEnvHsfTrafficControlRequest::getParamTypes()const
{
	return paramTypes_;
}

void CreateEnvHsfTrafficControlRequest::setParamTypes(const std::string& paramTypes)
{
	paramTypes_ = paramTypes;
	setBodyParameter("ParamTypes", paramTypes);
}

std::string CreateEnvHsfTrafficControlRequest::getCondition()const
{
	return condition_;
}

void CreateEnvHsfTrafficControlRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setBodyParameter("Condition", condition);
}

std::string CreateEnvHsfTrafficControlRequest::getAppId()const
{
	return appId_;
}

void CreateEnvHsfTrafficControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string CreateEnvHsfTrafficControlRequest::getLabelAdviceName()const
{
	return labelAdviceName_;
}

void CreateEnvHsfTrafficControlRequest::setLabelAdviceName(const std::string& labelAdviceName)
{
	labelAdviceName_ = labelAdviceName;
	setBodyParameter("LabelAdviceName", labelAdviceName);
}

std::string CreateEnvHsfTrafficControlRequest::getPointcutName()const
{
	return pointcutName_;
}

void CreateEnvHsfTrafficControlRequest::setPointcutName(const std::string& pointcutName)
{
	pointcutName_ = pointcutName;
	setBodyParameter("PointcutName", pointcutName);
}

std::string CreateEnvHsfTrafficControlRequest::getServiceName()const
{
	return serviceName_;
}

void CreateEnvHsfTrafficControlRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setBodyParameter("ServiceName", serviceName);
}

std::string CreateEnvHsfTrafficControlRequest::getTriggerPolicy()const
{
	return triggerPolicy_;
}

void CreateEnvHsfTrafficControlRequest::setTriggerPolicy(const std::string& triggerPolicy)
{
	triggerPolicy_ = triggerPolicy;
	setBodyParameter("TriggerPolicy", triggerPolicy);
}

std::string CreateEnvHsfTrafficControlRequest::getGroup()const
{
	return group_;
}

void CreateEnvHsfTrafficControlRequest::setGroup(const std::string& group)
{
	group_ = group;
	setBodyParameter("Group", group);
}

std::string CreateEnvHsfTrafficControlRequest::getMethodName()const
{
	return methodName_;
}

void CreateEnvHsfTrafficControlRequest::setMethodName(const std::string& methodName)
{
	methodName_ = methodName;
	setBodyParameter("MethodName", methodName);
}

