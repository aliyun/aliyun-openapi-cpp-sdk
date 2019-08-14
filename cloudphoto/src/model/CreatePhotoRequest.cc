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

#include <alibabacloud/cloudphoto/model/CreatePhotoRequest.h>

using AlibabaCloud::CloudPhoto::Model::CreatePhotoRequest;

CreatePhotoRequest::CreatePhotoRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "CreatePhoto")
{}

CreatePhotoRequest::~CreatePhotoRequest()
{}

long CreatePhotoRequest::getTakenAt()const
{
	return takenAt_;
}

void CreatePhotoRequest::setTakenAt(long takenAt)
{
	takenAt_ = takenAt;
	setCoreParameter("TakenAt", std::to_string(takenAt));
}

std::string CreatePhotoRequest::getPhotoTitle()const
{
	return photoTitle_;
}

void CreatePhotoRequest::setPhotoTitle(const std::string& photoTitle)
{
	photoTitle_ = photoTitle;
	setCoreParameter("PhotoTitle", photoTitle);
}

std::string CreatePhotoRequest::getLibraryId()const
{
	return libraryId_;
}

void CreatePhotoRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

long CreatePhotoRequest::getShareExpireTime()const
{
	return shareExpireTime_;
}

void CreatePhotoRequest::setShareExpireTime(long shareExpireTime)
{
	shareExpireTime_ = shareExpireTime;
	setCoreParameter("ShareExpireTime", std::to_string(shareExpireTime));
}

std::string CreatePhotoRequest::getStoreName()const
{
	return storeName_;
}

void CreatePhotoRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

std::string CreatePhotoRequest::getUploadType()const
{
	return uploadType_;
}

void CreatePhotoRequest::setUploadType(const std::string& uploadType)
{
	uploadType_ = uploadType;
	setCoreParameter("UploadType", uploadType);
}

std::string CreatePhotoRequest::getRemark()const
{
	return remark_;
}

void CreatePhotoRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string CreatePhotoRequest::getSessionId()const
{
	return sessionId_;
}

void CreatePhotoRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setCoreParameter("SessionId", sessionId);
}

std::string CreatePhotoRequest::getStaging()const
{
	return staging_;
}

void CreatePhotoRequest::setStaging(const std::string& staging)
{
	staging_ = staging;
	setCoreParameter("Staging", staging);
}

std::string CreatePhotoRequest::getFileId()const
{
	return fileId_;
}

void CreatePhotoRequest::setFileId(const std::string& fileId)
{
	fileId_ = fileId;
	setCoreParameter("FileId", fileId);
}

