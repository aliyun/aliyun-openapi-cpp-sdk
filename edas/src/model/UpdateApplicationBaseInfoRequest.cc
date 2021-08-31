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

#include <alibabacloud/edas/model/UpdateApplicationBaseInfoRequest.h>

using AlibabaCloud::Edas::Model::UpdateApplicationBaseInfoRequest;

UpdateApplicationBaseInfoRequest::UpdateApplicationBaseInfoRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/update_app_info");
	setMethod(HttpRequest::Method::Post);
}

UpdateApplicationBaseInfoRequest::~UpdateApplicationBaseInfoRequest()
{}

std::string UpdateApplicationBaseInfoRequest::getOwner()const
{
	return owner_;
}

void UpdateApplicationBaseInfoRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setParameter("Owner", owner);
}

std::string UpdateApplicationBaseInfoRequest::getAppName()const
{
	return appName_;
}

void UpdateApplicationBaseInfoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string UpdateApplicationBaseInfoRequest::getAppId()const
{
	return appId_;
}

void UpdateApplicationBaseInfoRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateApplicationBaseInfoRequest::getDesc()const
{
	return desc_;
}

void UpdateApplicationBaseInfoRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setParameter("Desc", desc);
}

