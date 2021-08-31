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

#include <alibabacloud/edas/model/UpdateK8sApplicationBaseInfoRequest.h>

using AlibabaCloud::Edas::Model::UpdateK8sApplicationBaseInfoRequest;

UpdateK8sApplicationBaseInfoRequest::UpdateK8sApplicationBaseInfoRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/oam/update_app_basic_info");
	setMethod(HttpRequest::Method::Post);
}

UpdateK8sApplicationBaseInfoRequest::~UpdateK8sApplicationBaseInfoRequest()
{}

std::string UpdateK8sApplicationBaseInfoRequest::getOwner()const
{
	return owner_;
}

void UpdateK8sApplicationBaseInfoRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setParameter("Owner", owner);
}

std::string UpdateK8sApplicationBaseInfoRequest::getAppId()const
{
	return appId_;
}

void UpdateK8sApplicationBaseInfoRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateK8sApplicationBaseInfoRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void UpdateK8sApplicationBaseInfoRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string UpdateK8sApplicationBaseInfoRequest::getDescription()const
{
	return description_;
}

void UpdateK8sApplicationBaseInfoRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateK8sApplicationBaseInfoRequest::getEmail()const
{
	return email_;
}

void UpdateK8sApplicationBaseInfoRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

