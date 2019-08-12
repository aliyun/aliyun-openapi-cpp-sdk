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

#include <alibabacloud/ccc/model/AssignUsersRequest.h>

using AlibabaCloud::CCC::Model::AssignUsersRequest;

AssignUsersRequest::AssignUsersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "AssignUsers")
{}

AssignUsersRequest::~AssignUsersRequest()
{}

std::vector<std::string> AssignUsersRequest::getUserRamId()const
{
	return userRamId_;
}

void AssignUsersRequest::setUserRamId(const std::vector<std::string>& userRamId)
{
	userRamId_ = userRamId;
	for(int i = 0; i!= userRamId.size(); i++)
		setCoreParameter("UserRamId."+ std::to_string(i), userRamId.at(i));
}

std::vector<int> AssignUsersRequest::getSkillLevel()const
{
	return skillLevel_;
}

void AssignUsersRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int i = 0; i!= skillLevel.size(); i++)
		setCoreParameter("SkillLevel."+ std::to_string(i), std::to_string(skillLevel.at(i)));
}

std::string AssignUsersRequest::getInstanceId()const
{
	return instanceId_;
}

void AssignUsersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> AssignUsersRequest::getRoleId()const
{
	return roleId_;
}

void AssignUsersRequest::setRoleId(const std::vector<std::string>& roleId)
{
	roleId_ = roleId;
	for(int i = 0; i!= roleId.size(); i++)
		setCoreParameter("RoleId."+ std::to_string(i), roleId.at(i));
}

std::vector<std::string> AssignUsersRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void AssignUsersRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int i = 0; i!= skillGroupId.size(); i++)
		setCoreParameter("SkillGroupId."+ std::to_string(i), skillGroupId.at(i));
}

std::string AssignUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AssignUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

