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

#include <alibabacloud/imm/model/DetectImageCelebrityRequest.h>

using AlibabaCloud::Imm::Model::DetectImageCelebrityRequest;

DetectImageCelebrityRequest::DetectImageCelebrityRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DetectImageCelebrity")
{}

DetectImageCelebrityRequest::~DetectImageCelebrityRequest()
{}

std::string DetectImageCelebrityRequest::getImageUri()const
{
	return imageUri_;
}

void DetectImageCelebrityRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", imageUri);
}

std::string DetectImageCelebrityRequest::getLibrary()const
{
	return library_;
}

void DetectImageCelebrityRequest::setLibrary(const std::string& library)
{
	library_ = library;
	setCoreParameter("Library", library);
}

std::string DetectImageCelebrityRequest::getRegionId()const
{
	return regionId_;
}

void DetectImageCelebrityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DetectImageCelebrityRequest::getProject()const
{
	return project_;
}

void DetectImageCelebrityRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DetectImageCelebrityRequest::getRealUid()const
{
	return realUid_;
}

void DetectImageCelebrityRequest::setRealUid(const std::string& realUid)
{
	realUid_ = realUid;
	setCoreParameter("RealUid", realUid);
}

std::string DetectImageCelebrityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetectImageCelebrityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

