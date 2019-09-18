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

#include <alibabacloud/imm/model/DecodeBlindWatermarkRequest.h>

using AlibabaCloud::Imm::Model::DecodeBlindWatermarkRequest;

DecodeBlindWatermarkRequest::DecodeBlindWatermarkRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DecodeBlindWatermark")
{}

DecodeBlindWatermarkRequest::~DecodeBlindWatermarkRequest()
{}

int DecodeBlindWatermarkRequest::getImageQuality()const
{
	return imageQuality_;
}

void DecodeBlindWatermarkRequest::setImageQuality(int imageQuality)
{
	imageQuality_ = imageQuality;
	setCoreParameter("ImageQuality", std::to_string(imageQuality));
}

std::string DecodeBlindWatermarkRequest::getProject()const
{
	return project_;
}

void DecodeBlindWatermarkRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DecodeBlindWatermarkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DecodeBlindWatermarkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DecodeBlindWatermarkRequest::getWatermarkType()const
{
	return watermarkType_;
}

void DecodeBlindWatermarkRequest::setWatermarkType(const std::string& watermarkType)
{
	watermarkType_ = watermarkType;
	setCoreParameter("WatermarkType", watermarkType);
}

std::string DecodeBlindWatermarkRequest::getTargetUri()const
{
	return targetUri_;
}

void DecodeBlindWatermarkRequest::setTargetUri(const std::string& targetUri)
{
	targetUri_ = targetUri;
	setCoreParameter("TargetUri", targetUri);
}

std::string DecodeBlindWatermarkRequest::getImageUri()const
{
	return imageUri_;
}

void DecodeBlindWatermarkRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", imageUri);
}

std::string DecodeBlindWatermarkRequest::getOriginalImageUri()const
{
	return originalImageUri_;
}

void DecodeBlindWatermarkRequest::setOriginalImageUri(const std::string& originalImageUri)
{
	originalImageUri_ = originalImageUri;
	setCoreParameter("OriginalImageUri", originalImageUri);
}

