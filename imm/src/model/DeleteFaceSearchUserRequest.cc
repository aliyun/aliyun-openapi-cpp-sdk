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

#include <alibabacloud/imm/model/DeleteFaceSearchUserRequest.h>

using AlibabaCloud::Imm::Model::DeleteFaceSearchUserRequest;

DeleteFaceSearchUserRequest::DeleteFaceSearchUserRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteFaceSearchUser")
{}

DeleteFaceSearchUserRequest::~DeleteFaceSearchUserRequest()
{}

std::string DeleteFaceSearchUserRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFaceSearchUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteFaceSearchUserRequest::getProject()const
{
	return project_;
}

void DeleteFaceSearchUserRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string DeleteFaceSearchUserRequest::getGroupName()const
{
	return groupName_;
}

void DeleteFaceSearchUserRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", std::to_string(groupName));
}

std::string DeleteFaceSearchUserRequest::getUser()const
{
	return user_;
}

void DeleteFaceSearchUserRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", std::to_string(user));
}

std::string DeleteFaceSearchUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFaceSearchUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

