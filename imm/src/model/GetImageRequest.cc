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

#include <alibabacloud/imm/model/GetImageRequest.h>

using AlibabaCloud::Imm::Model::GetImageRequest;

GetImageRequest::GetImageRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetImage")
{}

GetImageRequest::~GetImageRequest()
{}

std::string GetImageRequest::getImageUri()const
{
	return imageUri_;
}

void GetImageRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", std::to_string(imageUri));
}

std::string GetImageRequest::getRegionId()const
{
	return regionId_;
}

void GetImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string GetImageRequest::getProject()const
{
	return project_;
}

void GetImageRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string GetImageRequest::getSetId()const
{
	return setId_;
}

void GetImageRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string GetImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

