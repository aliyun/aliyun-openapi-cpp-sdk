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

#include <alibabacloud/idrsservice/model/UpdateUserRequest.h>

using AlibabaCloud::Idrsservice::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "UpdateUser")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateUserRequest::~UpdateUserRequest()
{}

std::string UpdateUserRequest::getRole()const
{
	return role_;
}

void UpdateUserRequest::setRole(const std::string& role)
{
	role_ = role;
	setParameter("Role", role);
}

std::string UpdateUserRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void UpdateUserRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string UpdateUserRequest::getName()const
{
	return name_;
}

void UpdateUserRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateUserRequest::getId()const
{
	return id_;
}

void UpdateUserRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string UpdateUserRequest::getEmail()const
{
	return email_;
}

void UpdateUserRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

