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

#include <alibabacloud/imm/model/IndexImageRequest.h>

using AlibabaCloud::Imm::Model::IndexImageRequest;

IndexImageRequest::IndexImageRequest() :
	RpcServiceRequest("imm", "2017-09-06", "IndexImage")
{}

IndexImageRequest::~IndexImageRequest()
{}

std::string IndexImageRequest::getRemarksB()const
{
	return remarksB_;
}

void IndexImageRequest::setRemarksB(const std::string& remarksB)
{
	remarksB_ = remarksB;
	setCoreParameter("RemarksB", std::to_string(remarksB));
}

std::string IndexImageRequest::getProject()const
{
	return project_;
}

void IndexImageRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string IndexImageRequest::getRemarksA()const
{
	return remarksA_;
}

void IndexImageRequest::setRemarksA(const std::string& remarksA)
{
	remarksA_ = remarksA;
	setCoreParameter("RemarksA", std::to_string(remarksA));
}

std::string IndexImageRequest::getExternalId()const
{
	return externalId_;
}

void IndexImageRequest::setExternalId(const std::string& externalId)
{
	externalId_ = externalId;
	setCoreParameter("ExternalId", std::to_string(externalId));
}

std::string IndexImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void IndexImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string IndexImageRequest::getImageUri()const
{
	return imageUri_;
}

void IndexImageRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", std::to_string(imageUri));
}

std::string IndexImageRequest::getRegionId()const
{
	return regionId_;
}

void IndexImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string IndexImageRequest::getSourceUri()const
{
	return sourceUri_;
}

void IndexImageRequest::setSourceUri(const std::string& sourceUri)
{
	sourceUri_ = sourceUri;
	setCoreParameter("SourceUri", std::to_string(sourceUri));
}

std::string IndexImageRequest::getSourcePosition()const
{
	return sourcePosition_;
}

void IndexImageRequest::setSourcePosition(const std::string& sourcePosition)
{
	sourcePosition_ = sourcePosition;
	setCoreParameter("SourcePosition", std::to_string(sourcePosition));
}

std::string IndexImageRequest::getRemarksD()const
{
	return remarksD_;
}

void IndexImageRequest::setRemarksD(const std::string& remarksD)
{
	remarksD_ = remarksD;
	setCoreParameter("RemarksD", std::to_string(remarksD));
}

std::string IndexImageRequest::getRemarksC()const
{
	return remarksC_;
}

void IndexImageRequest::setRemarksC(const std::string& remarksC)
{
	remarksC_ = remarksC;
	setCoreParameter("RemarksC", std::to_string(remarksC));
}

std::string IndexImageRequest::getSetId()const
{
	return setId_;
}

void IndexImageRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string IndexImageRequest::getSourceType()const
{
	return sourceType_;
}

void IndexImageRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setCoreParameter("SourceType", std::to_string(sourceType));
}

std::string IndexImageRequest::getRealUid()const
{
	return realUid_;
}

void IndexImageRequest::setRealUid(const std::string& realUid)
{
	realUid_ = realUid;
	setCoreParameter("RealUid", std::to_string(realUid));
}

