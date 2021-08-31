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

#include <alibabacloud/edas/model/UpdateSlsLogStoreRequest.h>

using AlibabaCloud::Edas::Model::UpdateSlsLogStoreRequest;

UpdateSlsLogStoreRequest::UpdateSlsLogStoreRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/sls/update_sls_log_store");
	setMethod(HttpRequest::Method::Post);
}

UpdateSlsLogStoreRequest::~UpdateSlsLogStoreRequest()
{}

std::string UpdateSlsLogStoreRequest::getConfigs()const
{
	return configs_;
}

void UpdateSlsLogStoreRequest::setConfigs(const std::string& configs)
{
	configs_ = configs;
	setBodyParameter("Configs", configs);
}

std::string UpdateSlsLogStoreRequest::getAppId()const
{
	return appId_;
}

void UpdateSlsLogStoreRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

