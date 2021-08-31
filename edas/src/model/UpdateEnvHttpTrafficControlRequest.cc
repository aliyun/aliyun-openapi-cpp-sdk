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

#include <alibabacloud/edas/model/UpdateEnvHttpTrafficControlRequest.h>

using AlibabaCloud::Edas::Model::UpdateEnvHttpTrafficControlRequest;

UpdateEnvHttpTrafficControlRequest::UpdateEnvHttpTrafficControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/env_http_traffic_control");
	setMethod(HttpRequest::Method::Put);
}

UpdateEnvHttpTrafficControlRequest::~UpdateEnvHttpTrafficControlRequest()
{}

std::string UpdateEnvHttpTrafficControlRequest::getCondition()const
{
	return condition_;
}

void UpdateEnvHttpTrafficControlRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setBodyParameter("Condition", condition);
}

std::string UpdateEnvHttpTrafficControlRequest::getUrlPath()const
{
	return urlPath_;
}

void UpdateEnvHttpTrafficControlRequest::setUrlPath(const std::string& urlPath)
{
	urlPath_ = urlPath;
	setBodyParameter("UrlPath", urlPath);
}

std::string UpdateEnvHttpTrafficControlRequest::getAppId()const
{
	return appId_;
}

void UpdateEnvHttpTrafficControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string UpdateEnvHttpTrafficControlRequest::getLabelAdviceName()const
{
	return labelAdviceName_;
}

void UpdateEnvHttpTrafficControlRequest::setLabelAdviceName(const std::string& labelAdviceName)
{
	labelAdviceName_ = labelAdviceName;
	setBodyParameter("LabelAdviceName", labelAdviceName);
}

std::string UpdateEnvHttpTrafficControlRequest::getPointcutName()const
{
	return pointcutName_;
}

void UpdateEnvHttpTrafficControlRequest::setPointcutName(const std::string& pointcutName)
{
	pointcutName_ = pointcutName;
	setBodyParameter("PointcutName", pointcutName);
}

std::string UpdateEnvHttpTrafficControlRequest::getTriggerPolicy()const
{
	return triggerPolicy_;
}

void UpdateEnvHttpTrafficControlRequest::setTriggerPolicy(const std::string& triggerPolicy)
{
	triggerPolicy_ = triggerPolicy;
	setBodyParameter("TriggerPolicy", triggerPolicy);
}

