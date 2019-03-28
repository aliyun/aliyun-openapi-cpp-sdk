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

#include <alibabacloud/imm/model/DetectLogoRequest.h>

using AlibabaCloud::Imm::Model::DetectLogoRequest;

DetectLogoRequest::DetectLogoRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DetectLogo")
{}

DetectLogoRequest::~DetectLogoRequest()
{}

std::string DetectLogoRequest::getSrcUris()const
{
	return srcUris_;
}

void DetectLogoRequest::setSrcUris(const std::string& srcUris)
{
	srcUris_ = srcUris;
	setParameter("SrcUris", srcUris);
}

std::string DetectLogoRequest::getRegionId()const
{
	return regionId_;
}

void DetectLogoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DetectLogoRequest::getProject()const
{
	return project_;
}

void DetectLogoRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string DetectLogoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetectLogoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

