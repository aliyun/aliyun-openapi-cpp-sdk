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

#include <alibabacloud/iot/model/SetupStudioAppAuthModeOpenRequest.h>

using AlibabaCloud::Iot::Model::SetupStudioAppAuthModeOpenRequest;

SetupStudioAppAuthModeOpenRequest::SetupStudioAppAuthModeOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SetupStudioAppAuthModeOpen")
{
	setMethod(HttpRequest::Method::Post);
}

SetupStudioAppAuthModeOpenRequest::~SetupStudioAppAuthModeOpenRequest()
{}

std::string SetupStudioAppAuthModeOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SetupStudioAppAuthModeOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string SetupStudioAppAuthModeOpenRequest::getProjectId()const
{
	return projectId_;
}

void SetupStudioAppAuthModeOpenRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

int SetupStudioAppAuthModeOpenRequest::getAuthMode()const
{
	return authMode_;
}

void SetupStudioAppAuthModeOpenRequest::setAuthMode(int authMode)
{
	authMode_ = authMode;
	setBodyParameter("AuthMode", std::to_string(authMode));
}

std::string SetupStudioAppAuthModeOpenRequest::getAppId()const
{
	return appId_;
}

void SetupStudioAppAuthModeOpenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string SetupStudioAppAuthModeOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void SetupStudioAppAuthModeOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SetupStudioAppAuthModeOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void SetupStudioAppAuthModeOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

