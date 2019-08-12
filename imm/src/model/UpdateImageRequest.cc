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

#include <alibabacloud/imm/model/UpdateImageRequest.h>

using AlibabaCloud::Imm::Model::UpdateImageRequest;

UpdateImageRequest::UpdateImageRequest() :
	RpcServiceRequest("imm", "2017-09-06", "UpdateImage")
{}

UpdateImageRequest::~UpdateImageRequest()
{}

std::string UpdateImageRequest::getRemarksB()const
{
	return remarksB_;
}

void UpdateImageRequest::setRemarksB(const std::string& remarksB)
{
	remarksB_ = remarksB;
	setCoreParameter("RemarksB", remarksB);
}

std::string UpdateImageRequest::getProject()const
{
	return project_;
}

void UpdateImageRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string UpdateImageRequest::getRemarksA()const
{
	return remarksA_;
}

void UpdateImageRequest::setRemarksA(const std::string& remarksA)
{
	remarksA_ = remarksA;
	setCoreParameter("RemarksA", remarksA);
}

std::string UpdateImageRequest::getExternalId()const
{
	return externalId_;
}

void UpdateImageRequest::setExternalId(const std::string& externalId)
{
	externalId_ = externalId;
	setCoreParameter("ExternalId", externalId);
}

std::string UpdateImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateImageRequest::getImageUri()const
{
	return imageUri_;
}

void UpdateImageRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", imageUri);
}

std::string UpdateImageRequest::getRegionId()const
{
	return regionId_;
}

void UpdateImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateImageRequest::getSourceUri()const
{
	return sourceUri_;
}

void UpdateImageRequest::setSourceUri(const std::string& sourceUri)
{
	sourceUri_ = sourceUri;
	setCoreParameter("SourceUri", sourceUri);
}

std::string UpdateImageRequest::getSourcePosition()const
{
	return sourcePosition_;
}

void UpdateImageRequest::setSourcePosition(const std::string& sourcePosition)
{
	sourcePosition_ = sourcePosition;
	setCoreParameter("SourcePosition", sourcePosition);
}

std::string UpdateImageRequest::getRemarksD()const
{
	return remarksD_;
}

void UpdateImageRequest::setRemarksD(const std::string& remarksD)
{
	remarksD_ = remarksD;
	setCoreParameter("RemarksD", remarksD);
}

std::string UpdateImageRequest::getRemarksC()const
{
	return remarksC_;
}

void UpdateImageRequest::setRemarksC(const std::string& remarksC)
{
	remarksC_ = remarksC;
	setCoreParameter("RemarksC", remarksC);
}

std::string UpdateImageRequest::getSetId()const
{
	return setId_;
}

void UpdateImageRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

std::string UpdateImageRequest::getSourceType()const
{
	return sourceType_;
}

void UpdateImageRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setCoreParameter("SourceType", sourceType);
}

