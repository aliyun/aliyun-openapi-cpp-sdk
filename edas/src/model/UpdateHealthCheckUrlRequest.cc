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

#include <alibabacloud/edas/model/UpdateHealthCheckUrlRequest.h>

using AlibabaCloud::Edas::Model::UpdateHealthCheckUrlRequest;

UpdateHealthCheckUrlRequest::UpdateHealthCheckUrlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/modify_hc_url");
	setMethod(HttpRequest::Method::Post);
}

UpdateHealthCheckUrlRequest::~UpdateHealthCheckUrlRequest()
{}

std::string UpdateHealthCheckUrlRequest::getAppId()const
{
	return appId_;
}

void UpdateHealthCheckUrlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateHealthCheckUrlRequest::getHcURL()const
{
	return hcURL_;
}

void UpdateHealthCheckUrlRequest::setHcURL(const std::string& hcURL)
{
	hcURL_ = hcURL;
	setParameter("HcURL", hcURL);
}

