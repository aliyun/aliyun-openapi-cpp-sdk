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

#include <alibabacloud/ccc/model/ModifySkillGroupOfUserRequest.h>

using AlibabaCloud::CCC::Model::ModifySkillGroupOfUserRequest;

ModifySkillGroupOfUserRequest::ModifySkillGroupOfUserRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifySkillGroupOfUser")
{}

ModifySkillGroupOfUserRequest::~ModifySkillGroupOfUserRequest()
{}

std::vector<int> ModifySkillGroupOfUserRequest::getSkillLevel()const
{
	return skillLevel_;
}

void ModifySkillGroupOfUserRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int i = 0; i!= skillLevel.size(); i++)
		setCoreParameter("SkillLevel."+ std::to_string(i), skillLevel.at(i));
}

std::string ModifySkillGroupOfUserRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifySkillGroupOfUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::vector<std::string> ModifySkillGroupOfUserRequest::getRoleId()const
{
	return roleId_;
}

void ModifySkillGroupOfUserRequest::setRoleId(const std::vector<std::string>& roleId)
{
	roleId_ = roleId;
	for(int i = 0; i!= roleId.size(); i++)
		setCoreParameter("RoleId."+ std::to_string(i), std::to_string(roleId.at(i)));
}

std::vector<std::string> ModifySkillGroupOfUserRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifySkillGroupOfUserRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int i = 0; i!= skillGroupId.size(); i++)
		setCoreParameter("SkillGroupId."+ std::to_string(i), std::to_string(skillGroupId.at(i)));
}

std::string ModifySkillGroupOfUserRequest::getUserId()const
{
	return userId_;
}

void ModifySkillGroupOfUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

std::string ModifySkillGroupOfUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySkillGroupOfUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

