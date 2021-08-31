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

#include <alibabacloud/edas/model/CreateEnvHttpTrafficControlRequest.h>

using AlibabaCloud::Edas::Model::CreateEnvHttpTrafficControlRequest;

CreateEnvHttpTrafficControlRequest::CreateEnvHttpTrafficControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/env_http_traffic_control");
	setMethod(HttpRequest::Method::Post);
}

CreateEnvHttpTrafficControlRequest::~CreateEnvHttpTrafficControlRequest()
{}

std::string CreateEnvHttpTrafficControlRequest::getCondition()const
{
	return condition_;
}

void CreateEnvHttpTrafficControlRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setBodyParameter("Condition", condition);
}

std::string CreateEnvHttpTrafficControlRequest::getUrlPath()const
{
	return urlPath_;
}

void CreateEnvHttpTrafficControlRequest::setUrlPath(const std::string& urlPath)
{
	urlPath_ = urlPath;
	setBodyParameter("UrlPath", urlPath);
}

std::string CreateEnvHttpTrafficControlRequest::getAppId()const
{
	return appId_;
}

void CreateEnvHttpTrafficControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string CreateEnvHttpTrafficControlRequest::getLabelAdviceName()const
{
	return labelAdviceName_;
}

void CreateEnvHttpTrafficControlRequest::setLabelAdviceName(const std::string& labelAdviceName)
{
	labelAdviceName_ = labelAdviceName;
	setBodyParameter("LabelAdviceName", labelAdviceName);
}

std::string CreateEnvHttpTrafficControlRequest::getPointcutName()const
{
	return pointcutName_;
}

void CreateEnvHttpTrafficControlRequest::setPointcutName(const std::string& pointcutName)
{
	pointcutName_ = pointcutName;
	setBodyParameter("PointcutName", pointcutName);
}

std::string CreateEnvHttpTrafficControlRequest::getTriggerPolicy()const
{
	return triggerPolicy_;
}

void CreateEnvHttpTrafficControlRequest::setTriggerPolicy(const std::string& triggerPolicy)
{
	triggerPolicy_ = triggerPolicy;
	setBodyParameter("TriggerPolicy", triggerPolicy);
}

