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

#include <alibabacloud/edas/model/GetK8sApplicationRequest.h>

using AlibabaCloud::Edas::Model::GetK8sApplicationRequest;

GetK8sApplicationRequest::GetK8sApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/co_application");
	setMethod(HttpRequest::Method::Get);
}

GetK8sApplicationRequest::~GetK8sApplicationRequest()
{}

std::string GetK8sApplicationRequest::getAppId()const
{
	return appId_;
}

void GetK8sApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetK8sApplicationRequest::getFrom()const
{
	return from_;
}

void GetK8sApplicationRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

