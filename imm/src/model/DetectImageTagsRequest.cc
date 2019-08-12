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

#include <alibabacloud/imm/model/DetectImageTagsRequest.h>

using AlibabaCloud::Imm::Model::DetectImageTagsRequest;

DetectImageTagsRequest::DetectImageTagsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DetectImageTags")
{}

DetectImageTagsRequest::~DetectImageTagsRequest()
{}

std::string DetectImageTagsRequest::getImageUri()const
{
	return imageUri_;
}

void DetectImageTagsRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", std::to_string(imageUri));
}

std::string DetectImageTagsRequest::getRegionId()const
{
	return regionId_;
}

void DetectImageTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DetectImageTagsRequest::getProject()const
{
	return project_;
}

void DetectImageTagsRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string DetectImageTagsRequest::getRealUid()const
{
	return realUid_;
}

void DetectImageTagsRequest::setRealUid(const std::string& realUid)
{
	realUid_ = realUid;
	setCoreParameter("RealUid", std::to_string(realUid));
}

std::string DetectImageTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetectImageTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

