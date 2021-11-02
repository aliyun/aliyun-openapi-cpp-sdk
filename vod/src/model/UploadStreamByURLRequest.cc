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

#include <alibabacloud/vod/model/UploadStreamByURLRequest.h>

using AlibabaCloud::Vod::Model::UploadStreamByURLRequest;

UploadStreamByURLRequest::UploadStreamByURLRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UploadStreamByURL")
{
	setMethod(HttpRequest::Method::Post);
}

UploadStreamByURLRequest::~UploadStreamByURLRequest()
{}

std::string UploadStreamByURLRequest::getFileExtension()const
{
	return fileExtension_;
}

void UploadStreamByURLRequest::setFileExtension(const std::string& fileExtension)
{
	fileExtension_ = fileExtension;
	setParameter("FileExtension", fileExtension);
}

std::string UploadStreamByURLRequest::getMediaId()const
{
	return mediaId_;
}

void UploadStreamByURLRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string UploadStreamByURLRequest::getUserData()const
{
	return userData_;
}

void UploadStreamByURLRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string UploadStreamByURLRequest::getDefinition()const
{
	return definition_;
}

void UploadStreamByURLRequest::setDefinition(const std::string& definition)
{
	definition_ = definition;
	setParameter("Definition", definition);
}

std::string UploadStreamByURLRequest::getStreamURL()const
{
	return streamURL_;
}

void UploadStreamByURLRequest::setStreamURL(const std::string& streamURL)
{
	streamURL_ = streamURL;
	setParameter("StreamURL", streamURL);
}

