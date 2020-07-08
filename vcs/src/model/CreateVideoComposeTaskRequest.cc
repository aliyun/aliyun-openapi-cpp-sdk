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

#include <alibabacloud/vcs/model/CreateVideoComposeTaskRequest.h>

using AlibabaCloud::Vcs::Model::CreateVideoComposeTaskRequest;

CreateVideoComposeTaskRequest::CreateVideoComposeTaskRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "CreateVideoComposeTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVideoComposeTaskRequest::~CreateVideoComposeTaskRequest()
{}

std::string CreateVideoComposeTaskRequest::getCorpId()const
{
	return corpId_;
}

void CreateVideoComposeTaskRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string CreateVideoComposeTaskRequest::getDomainName()const
{
	return domainName_;
}

void CreateVideoComposeTaskRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setBodyParameter("DomainName", domainName);
}

int CreateVideoComposeTaskRequest::getVideoFrameRate()const
{
	return videoFrameRate_;
}

void CreateVideoComposeTaskRequest::setVideoFrameRate(int videoFrameRate)
{
	videoFrameRate_ = videoFrameRate;
	setBodyParameter("VideoFrameRate", std::to_string(videoFrameRate));
}

std::string CreateVideoComposeTaskRequest::getImageFileNames()const
{
	return imageFileNames_;
}

void CreateVideoComposeTaskRequest::setImageFileNames(const std::string& imageFileNames)
{
	imageFileNames_ = imageFileNames;
	setBodyParameter("ImageFileNames", imageFileNames);
}

std::string CreateVideoComposeTaskRequest::getAudioFileName()const
{
	return audioFileName_;
}

void CreateVideoComposeTaskRequest::setAudioFileName(const std::string& audioFileName)
{
	audioFileName_ = audioFileName;
	setBodyParameter("AudioFileName", audioFileName);
}

std::string CreateVideoComposeTaskRequest::getBucketName()const
{
	return bucketName_;
}

void CreateVideoComposeTaskRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setBodyParameter("BucketName", bucketName);
}

std::string CreateVideoComposeTaskRequest::getImageParameters()const
{
	return imageParameters_;
}

void CreateVideoComposeTaskRequest::setImageParameters(const std::string& imageParameters)
{
	imageParameters_ = imageParameters;
	setBodyParameter("ImageParameters", imageParameters);
}

std::string CreateVideoComposeTaskRequest::getVideoFormat()const
{
	return videoFormat_;
}

void CreateVideoComposeTaskRequest::setVideoFormat(const std::string& videoFormat)
{
	videoFormat_ = videoFormat;
	setBodyParameter("VideoFormat", videoFormat);
}

