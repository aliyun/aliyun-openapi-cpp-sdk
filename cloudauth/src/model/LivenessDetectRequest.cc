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

#include <alibabacloud/cloudauth/model/LivenessDetectRequest.h>

using AlibabaCloud::Cloudauth::Model::LivenessDetectRequest;

LivenessDetectRequest::LivenessDetectRequest() :
	RpcServiceRequest("cloudauth", "2020-11-12", "LivenessDetect")
{
	setMethod(HttpRequest::Method::Post);
}

LivenessDetectRequest::~LivenessDetectRequest()
{}

std::string LivenessDetectRequest::getMediaCategory()const
{
	return mediaCategory_;
}

void LivenessDetectRequest::setMediaCategory(const std::string& mediaCategory)
{
	mediaCategory_ = mediaCategory;
	setBodyParameter("MediaCategory", mediaCategory);
}

std::string LivenessDetectRequest::getMediaUrl()const
{
	return mediaUrl_;
}

void LivenessDetectRequest::setMediaUrl(const std::string& mediaUrl)
{
	mediaUrl_ = mediaUrl;
	setBodyParameter("MediaUrl", mediaUrl);
}

std::string LivenessDetectRequest::getBizType()const
{
	return bizType_;
}

void LivenessDetectRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setBodyParameter("BizType", bizType);
}

std::string LivenessDetectRequest::getBizId()const
{
	return bizId_;
}

void LivenessDetectRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

std::string LivenessDetectRequest::getMediaFile()const
{
	return mediaFile_;
}

void LivenessDetectRequest::setMediaFile(const std::string& mediaFile)
{
	mediaFile_ = mediaFile;
	setBodyParameter("MediaFile", mediaFile);
}

