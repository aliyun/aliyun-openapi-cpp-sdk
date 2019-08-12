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

#include <alibabacloud/imm/model/DetectClothesRequest.h>

using AlibabaCloud::Imm::Model::DetectClothesRequest;

DetectClothesRequest::DetectClothesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DetectClothes")
{}

DetectClothesRequest::~DetectClothesRequest()
{}

std::string DetectClothesRequest::getSrcUris()const
{
	return srcUris_;
}

void DetectClothesRequest::setSrcUris(const std::string& srcUris)
{
	srcUris_ = srcUris;
	setCoreParameter("SrcUris", std::to_string(srcUris));
}

std::string DetectClothesRequest::getRegionId()const
{
	return regionId_;
}

void DetectClothesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DetectClothesRequest::getProject()const
{
	return project_;
}

void DetectClothesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string DetectClothesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetectClothesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

