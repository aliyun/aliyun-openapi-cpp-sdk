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

#include <alibabacloud/imm/model/RegistFaceRequest.h>

using AlibabaCloud::Imm::Model::RegistFaceRequest;

RegistFaceRequest::RegistFaceRequest() :
	RpcServiceRequest("imm", "2017-09-06", "RegistFace")
{}

RegistFaceRequest::~RegistFaceRequest()
{}

bool RegistFaceRequest::getChooseBiggestFace()const
{
	return chooseBiggestFace_;
}

void RegistFaceRequest::setChooseBiggestFace(bool chooseBiggestFace)
{
	chooseBiggestFace_ = chooseBiggestFace;
	setCoreParameter("ChooseBiggestFace", chooseBiggestFace ? "true" : "false");
}

std::string RegistFaceRequest::getRegionId()const
{
	return regionId_;
}

void RegistFaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool RegistFaceRequest::getIsQualityLimit()const
{
	return isQualityLimit_;
}

void RegistFaceRequest::setIsQualityLimit(bool isQualityLimit)
{
	isQualityLimit_ = isQualityLimit;
	setCoreParameter("IsQualityLimit", isQualityLimit ? "true" : "false");
}

std::string RegistFaceRequest::getProject()const
{
	return project_;
}

void RegistFaceRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string RegistFaceRequest::getSrcUri()const
{
	return srcUri_;
}

void RegistFaceRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", srcUri);
}

std::string RegistFaceRequest::getRegisterCheckLevel()const
{
	return registerCheckLevel_;
}

void RegistFaceRequest::setRegisterCheckLevel(const std::string& registerCheckLevel)
{
	registerCheckLevel_ = registerCheckLevel;
	setCoreParameter("RegisterCheckLevel", registerCheckLevel);
}

std::string RegistFaceRequest::getGroupName()const
{
	return groupName_;
}

void RegistFaceRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string RegistFaceRequest::getUser()const
{
	return user_;
}

void RegistFaceRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", user);
}

std::string RegistFaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RegistFaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

