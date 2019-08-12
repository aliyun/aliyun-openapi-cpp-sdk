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

#include <alibabacloud/imm/model/DetectImageBodiesRequest.h>

using AlibabaCloud::Imm::Model::DetectImageBodiesRequest;

DetectImageBodiesRequest::DetectImageBodiesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DetectImageBodies")
{}

DetectImageBodiesRequest::~DetectImageBodiesRequest()
{}

std::string DetectImageBodiesRequest::getImageUri()const
{
	return imageUri_;
}

void DetectImageBodiesRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", imageUri);
}

std::string DetectImageBodiesRequest::getRegionId()const
{
	return regionId_;
}

void DetectImageBodiesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DetectImageBodiesRequest::getProject()const
{
	return project_;
}

void DetectImageBodiesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DetectImageBodiesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetectImageBodiesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

