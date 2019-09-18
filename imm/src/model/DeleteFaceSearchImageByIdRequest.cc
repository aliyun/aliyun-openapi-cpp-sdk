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

#include <alibabacloud/imm/model/DeleteFaceSearchImageByIdRequest.h>

using AlibabaCloud::Imm::Model::DeleteFaceSearchImageByIdRequest;

DeleteFaceSearchImageByIdRequest::DeleteFaceSearchImageByIdRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteFaceSearchImageById")
{}

DeleteFaceSearchImageByIdRequest::~DeleteFaceSearchImageByIdRequest()
{}

std::string DeleteFaceSearchImageByIdRequest::getImageId()const
{
	return imageId_;
}

void DeleteFaceSearchImageByIdRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string DeleteFaceSearchImageByIdRequest::getProject()const
{
	return project_;
}

void DeleteFaceSearchImageByIdRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DeleteFaceSearchImageByIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFaceSearchImageByIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteFaceSearchImageByIdRequest::getGroupName()const
{
	return groupName_;
}

void DeleteFaceSearchImageByIdRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string DeleteFaceSearchImageByIdRequest::getSrcUri()const
{
	return srcUri_;
}

void DeleteFaceSearchImageByIdRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", srcUri);
}

std::string DeleteFaceSearchImageByIdRequest::getUser()const
{
	return user_;
}

void DeleteFaceSearchImageByIdRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", user);
}

