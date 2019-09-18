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

#include <alibabacloud/imm/model/GetFaceSearchUserRequest.h>

using AlibabaCloud::Imm::Model::GetFaceSearchUserRequest;

GetFaceSearchUserRequest::GetFaceSearchUserRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetFaceSearchUser")
{}

GetFaceSearchUserRequest::~GetFaceSearchUserRequest()
{}

std::string GetFaceSearchUserRequest::getProject()const
{
	return project_;
}

void GetFaceSearchUserRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string GetFaceSearchUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetFaceSearchUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetFaceSearchUserRequest::getGroupName()const
{
	return groupName_;
}

void GetFaceSearchUserRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string GetFaceSearchUserRequest::getUser()const
{
	return user_;
}

void GetFaceSearchUserRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", user);
}

