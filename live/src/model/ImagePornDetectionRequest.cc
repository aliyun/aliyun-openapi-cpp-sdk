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

#include <alibabacloud/live/model/ImagePornDetectionRequest.h>

using AlibabaCloud::Live::Model::ImagePornDetectionRequest;

ImagePornDetectionRequest::ImagePornDetectionRequest() :
	RpcServiceRequest("live", "2016-11-01", "ImagePornDetection")
{}

ImagePornDetectionRequest::~ImagePornDetectionRequest()
{}

std::string ImagePornDetectionRequest::getSecurityToken()const
{
	return securityToken_;
}

void ImagePornDetectionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ImagePornDetectionRequest::getImageUrl()const
{
	return imageUrl_;
}

void ImagePornDetectionRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setParameter("ImageUrl", imageUrl);
}

long ImagePornDetectionRequest::getOwnerId()const
{
	return ownerId_;
}

void ImagePornDetectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ImagePornDetectionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ImagePornDetectionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

