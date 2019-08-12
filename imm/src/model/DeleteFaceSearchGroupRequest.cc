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

#include <alibabacloud/imm/model/DeleteFaceSearchGroupRequest.h>

using AlibabaCloud::Imm::Model::DeleteFaceSearchGroupRequest;

DeleteFaceSearchGroupRequest::DeleteFaceSearchGroupRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteFaceSearchGroup")
{}

DeleteFaceSearchGroupRequest::~DeleteFaceSearchGroupRequest()
{}

std::string DeleteFaceSearchGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFaceSearchGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteFaceSearchGroupRequest::getProject()const
{
	return project_;
}

void DeleteFaceSearchGroupRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string DeleteFaceSearchGroupRequest::getGroupName()const
{
	return groupName_;
}

void DeleteFaceSearchGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", std::to_string(groupName));
}

std::string DeleteFaceSearchGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFaceSearchGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

