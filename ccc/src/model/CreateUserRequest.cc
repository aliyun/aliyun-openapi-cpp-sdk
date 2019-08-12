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
	RpcServiceRequest("ccc", "2017-07-05", "CreateUser")
{}

CreateUserRequest::~CreateUserRequest()
{}

std::string CreateUserRequest::getPrivateOutboundNumberId()const
{
	return privateOutboundNumberId_;
}

void CreateUserRequest::setPrivateOutboundNumberId(const std::string& privateOutboundNumberId)
{
	privateOutboundNumberId_ = privateOutboundNumberId;
	setCoreParameter("PrivateOutboundNumberId", std::to_string(privateOutboundNumberId));
}

std::vector<int> CreateUserRequest::getSkillLevel()const
{
	return skillLevel_;
}

void CreateUserRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int i = 0; i!= skillLevel.size(); i++)
		setCoreParameter("SkillLevel."+ std::to_string(i), skillLevel.at(i));
}

std::string CreateUserRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string CreateUserRequest::getLoginName()const
{
	return loginName_;
}

void CreateUserRequest::setLoginName(const std::string& loginName)
{
	loginName_ = loginName;
	setCoreParameter("LoginName", std::to_string(loginName));
}

std::string CreateUserRequest::getPhone()const
{
	return phone_;
}

void CreateUserRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setCoreParameter("Phone", std::to_string(phone));
}

std::vector<std::string> CreateUserRequest::getRoleId()const
{
	return roleId_;
}

void CreateUserRequest::setRoleId(const std::vector<std::string>& roleId)
{
	roleId_ = roleId;
	for(int i = 0; i!= roleId.size(); i++)
		setCoreParameter("RoleId."+ std::to_string(i), std::to_string(roleId.at(i)));
}

std::string CreateUserRequest::getDisplayName()const
{
	return displayName_;
}

void CreateUserRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setCoreParameter("DisplayName", std::to_string(displayName));
}

std::vector<std::string> CreateUserRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void CreateUserRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int i = 0; i!= skillGroupId.size(); i++)
		setCoreParameter("SkillGroupId."+ std::to_string(i), std::to_string(skillGroupId.at(i)));
}

std::string CreateUserRequest::getEmail()const
{
	return email_;
}

void CreateUserRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", std::to_string(email));
}

std::string CreateUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

