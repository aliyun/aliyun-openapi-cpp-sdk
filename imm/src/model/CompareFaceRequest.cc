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

#include <alibabacloud/imm/model/CompareFaceRequest.h>

using AlibabaCloud::Imm::Model::CompareFaceRequest;

CompareFaceRequest::CompareFaceRequest() :
	RpcServiceRequest("imm", "2017-09-06", "CompareFace")
{}

CompareFaceRequest::~CompareFaceRequest()
{}

std::string CompareFaceRequest::getRegionId()const
{
	return regionId_;
}

void CompareFaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CompareFaceRequest::getSrcUriB()const
{
	return srcUriB_;
}

void CompareFaceRequest::setSrcUriB(const std::string& srcUriB)
{
	srcUriB_ = srcUriB;
	setCoreParameter("SrcUriB", srcUriB);
}

std::string CompareFaceRequest::getSrcUriA()const
{
	return srcUriA_;
}

void CompareFaceRequest::setSrcUriA(const std::string& srcUriA)
{
	srcUriA_ = srcUriA;
	setCoreParameter("SrcUriA", srcUriA);
}

std::string CompareFaceRequest::getProject()const
{
	return project_;
}

void CompareFaceRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string CompareFaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CompareFaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

