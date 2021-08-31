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

#include <alibabacloud/edas/model/RestartK8sApplicationRequest.h>

using AlibabaCloud::Edas::Model::RestartK8sApplicationRequest;

RestartK8sApplicationRequest::RestartK8sApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/restart_k8s_app");
	setMethod(HttpRequest::Method::Post);
}

RestartK8sApplicationRequest::~RestartK8sApplicationRequest()
{}

std::string RestartK8sApplicationRequest::getAppId()const
{
	return appId_;
}

void RestartK8sApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

int RestartK8sApplicationRequest::getTimeout()const
{
	return timeout_;
}

void RestartK8sApplicationRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

