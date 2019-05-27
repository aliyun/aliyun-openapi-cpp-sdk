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

#include <alibabacloud/imm/model/GetFaceSearchImageRequest.h>

using AlibabaCloud::Imm::Model::GetFaceSearchImageRequest;

GetFaceSearchImageRequest::GetFaceSearchImageRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetFaceSearchImage")
{}

GetFaceSearchImageRequest::~GetFaceSearchImageRequest()
{}

std::string GetFaceSearchImageRequest::getImageId()const
{
	return imageId_;
}

void GetFaceSearchImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string GetFaceSearchImageRequest::getRegionId()const
{
	return regionId_;
}

void GetFaceSearchImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetFaceSearchImageRequest::getProject()const
{
	return project_;
}

void GetFaceSearchImageRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string GetFaceSearchImageRequest::getSrcUri()const
{
	return srcUri_;
}

void GetFaceSearchImageRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", srcUri);
}

std::string GetFaceSearchImageRequest::getGroupName()const
{
	return groupName_;
}

void GetFaceSearchImageRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string GetFaceSearchImageRequest::getUser()const
{
	return user_;
}

void GetFaceSearchImageRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", user);
}

std::string GetFaceSearchImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetFaceSearchImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

