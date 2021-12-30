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

#include <alibabacloud/ccc/model/ModifyUserRequest.h>

using AlibabaCloud::CCC::Model::ModifyUserRequest;

ModifyUserRequest::ModifyUserRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyUser")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyUserRequest::~ModifyUserRequest()
{}

std::string ModifyUserRequest::getPrivateOutboundNumberId()const
{
	return privateOutboundNumberId_;
}

void ModifyUserRequest::setPrivateOutboundNumberId(const std::string& privateOutboundNumberId)
{
	privateOutboundNumberId_ = privateOutboundNumberId;
	setParameter("PrivateOutboundNumberId", privateOutboundNumberId);
}

std::vector<std::string> ModifyUserRequest::getRoleId()const
{
	return roleId_;
}

void ModifyUserRequest::setRoleId(const std::vector<std::string>& roleId)
{
	roleId_ = roleId;
	for(int dep1 = 0; dep1!= roleId.size(); dep1++) {
		setParameter("RoleId."+ std::to_string(dep1), roleId.at(dep1));
	}
}

std::string ModifyUserRequest::getUserId()const
{
	return userId_;
}

void ModifyUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string ModifyUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<int> ModifyUserRequest::getSkillLevel()const
{
	return skillLevel_;
}

void ModifyUserRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int dep1 = 0; dep1!= skillLevel.size(); dep1++) {
		setParameter("SkillLevel."+ std::to_string(dep1), std::to_string(skillLevel.at(dep1)));
	}
}

std::string ModifyUserRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyUserRequest::getPhone()const
{
	return phone_;
}

void ModifyUserRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string ModifyUserRequest::getDisplayName()const
{
	return displayName_;
}

void ModifyUserRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setParameter("DisplayName", displayName);
}

std::vector<std::string> ModifyUserRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifyUserRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int dep1 = 0; dep1!= skillGroupId.size(); dep1++) {
		setParameter("SkillGroupId."+ std::to_string(dep1), skillGroupId.at(dep1));
	}
}

std::string ModifyUserRequest::getEmail()const
{
	return email_;
}

void ModifyUserRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

