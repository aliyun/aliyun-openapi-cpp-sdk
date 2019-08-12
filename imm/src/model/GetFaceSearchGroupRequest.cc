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

#include <alibabacloud/imm/model/GetFaceSearchGroupRequest.h>

using AlibabaCloud::Imm::Model::GetFaceSearchGroupRequest;

GetFaceSearchGroupRequest::GetFaceSearchGroupRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetFaceSearchGroup")
{}

GetFaceSearchGroupRequest::~GetFaceSearchGroupRequest()
{}

std::string GetFaceSearchGroupRequest::getRegionId()const
{
	return regionId_;
}

void GetFaceSearchGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetFaceSearchGroupRequest::getProject()const
{
	return project_;
}

void GetFaceSearchGroupRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string GetFaceSearchGroupRequest::getGroupName()const
{
	return groupName_;
}

void GetFaceSearchGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string GetFaceSearchGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetFaceSearchGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

