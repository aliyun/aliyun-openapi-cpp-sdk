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
{
	setMethod(HttpRequest::Method::Post);
}

ModifySkillGroupOfUserRequest::~ModifySkillGroupOfUserRequest()
{}

std::vector<std::string> ModifySkillGroupOfUserRequest::getRoleId()const
{
	return roleId_;
}

void ModifySkillGroupOfUserRequest::setRoleId(const std::vector<std::string>& roleId)
{
	roleId_ = roleId;
	for(int dep1 = 0; dep1!= roleId.size(); dep1++)
		setCoreParameter("RoleId."+ std::to_string(dep1), roleId.at(dep1));
}

std::string ModifySkillGroupOfUserRequest::getUserId()const
{
	return userId_;
}

void ModifySkillGroupOfUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string ModifySkillGroupOfUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySkillGroupOfUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<int> ModifySkillGroupOfUserRequest::getSkillLevel()const
{
	return skillLevel_;
}

void ModifySkillGroupOfUserRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int dep1 = 0; dep1!= skillLevel.size(); dep1++)
		setCoreParameter("SkillLevel."+ std::to_string(dep1), std::to_string(skillLevel.at(dep1)));
}

std::string ModifySkillGroupOfUserRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifySkillGroupOfUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> ModifySkillGroupOfUserRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifySkillGroupOfUserRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int dep1 = 0; dep1!= skillGroupId.size(); dep1++)
		setCoreParameter("SkillGroupId."+ std::to_string(dep1), skillGroupId.at(dep1));
}

