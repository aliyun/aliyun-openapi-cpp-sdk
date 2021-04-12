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

#include <alibabacloud/ccc/model/CreateUserRequest.h>

using AlibabaCloud::CCC::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "CreateUser")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserRequest::~CreateUserRequest()
{}

std::string CreateUserRequest::getLoginName()const
{
	return loginName_;
}

void CreateUserRequest::setLoginName(const std::string& loginName)
{
	loginName_ = loginName;
	setParameter("LoginName", loginName);
}

std::string CreateUserRequest::getRoleId()const
{
	return roleId_;
}

void CreateUserRequest::setRoleId(const std::string& roleId)
{
	roleId_ = roleId;
	setParameter("RoleId", roleId);
}

std::string CreateUserRequest::getMobile()const
{
	return mobile_;
}

void CreateUserRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setParameter("Mobile", mobile);
}

std::string CreateUserRequest::getWorkMode()const
{
	return workMode_;
}

void CreateUserRequest::setWorkMode(const std::string& workMode)
{
	workMode_ = workMode;
	setParameter("WorkMode", workMode);
}

std::string CreateUserRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateUserRequest::getDisplayName()const
{
	return displayName_;
}

void CreateUserRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setParameter("DisplayName", displayName);
}

bool CreateUserRequest::getResetPassword()const
{
	return resetPassword_;
}

void CreateUserRequest::setResetPassword(bool resetPassword)
{
	resetPassword_ = resetPassword;
	setParameter("ResetPassword", resetPassword ? "true" : "false");
}

std::string CreateUserRequest::getSkillLevelList()const
{
	return skillLevelList_;
}

void CreateUserRequest::setSkillLevelList(const std::string& skillLevelList)
{
	skillLevelList_ = skillLevelList;
	setParameter("SkillLevelList", skillLevelList);
}

std::string CreateUserRequest::getEmail()const
{
	return email_;
}

void CreateUserRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

