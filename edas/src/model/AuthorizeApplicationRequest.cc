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

#include <alibabacloud/edas/model/AuthorizeApplicationRequest.h>

using AlibabaCloud::Edas::Model::AuthorizeApplicationRequest;

AuthorizeApplicationRequest::AuthorizeApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/account/authorize_app");
	setMethod(HttpRequest::Method::Post);
}

AuthorizeApplicationRequest::~AuthorizeApplicationRequest()
{}

std::string AuthorizeApplicationRequest::getAppIds()const
{
	return appIds_;
}

void AuthorizeApplicationRequest::setAppIds(const std::string& appIds)
{
	appIds_ = appIds;
	setParameter("AppIds", appIds);
}

std::string AuthorizeApplicationRequest::getTargetUserId()const
{
	return targetUserId_;
}

void AuthorizeApplicationRequest::setTargetUserId(const std::string& targetUserId)
{
	targetUserId_ = targetUserId;
	setParameter("TargetUserId", targetUserId);
}

