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

#include <alibabacloud/edas/model/UpdateAccountInfoRequest.h>

using AlibabaCloud::Edas::Model::UpdateAccountInfoRequest;

UpdateAccountInfoRequest::UpdateAccountInfoRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/account/edit_account_info");
	setMethod(HttpRequest::Method::Post);
}

UpdateAccountInfoRequest::~UpdateAccountInfoRequest()
{}

std::string UpdateAccountInfoRequest::getName()const
{
	return name_;
}

void UpdateAccountInfoRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateAccountInfoRequest::getTelephone()const
{
	return telephone_;
}

void UpdateAccountInfoRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setParameter("Telephone", telephone);
}

std::string UpdateAccountInfoRequest::getEmail()const
{
	return email_;
}

void UpdateAccountInfoRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

