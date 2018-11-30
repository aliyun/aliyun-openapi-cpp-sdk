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

#include <alibabacloud/vod/model/CreateUploadVideoRequest.h>

using AlibabaCloud::Vod::Model::CreateUploadVideoRequest;

CreateUploadVideoRequest::CreateUploadVideoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "CreateUploadVideo")
{}

CreateUploadVideoRequest::~CreateUploadVideoRequest()
{}

long CreateUploadVideoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUploadVideoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUploadVideoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateUploadVideoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateUploadVideoRequest::getTranscodeMode()const
{
	return transcodeMode_;
}

void CreateUploadVideoRequest::setTranscodeMode(const std::string& transcodeMode)
{
	transcodeMode_ = transcodeMode;
	setParameter("TranscodeMode", transcodeMode);
}

std::string CreateUploadVideoRequest::getIP()const
{
	return iP_;
}

void CreateUploadVideoRequest::setIP(const std::string& iP)
{
	iP_ = iP;
	setParameter("IP", iP);
}

std::string CreateUploadVideoRequest::getDescription()const
{
	return description_;
}

void CreateUploadVideoRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateUploadVideoRequest::getFileSize()const
{
	return fileSize_;
}

void CreateUploadVideoRequest::setFileSize(long fileSize)
{
	fileSize_ = fileSize;
	setParameter("FileSize", std::to_string(fileSize));
}

long CreateUploadVideoRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUploadVideoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateUploadVideoRequest::getTitle()const
{
	return title_;
}

void CreateUploadVideoRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string CreateUploadVideoRequest::getTags()const
{
	return tags_;
}

void CreateUploadVideoRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateUploadVideoRequest::getStorageLocation()const
{
	return storageLocation_;
}

void CreateUploadVideoRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setParameter("StorageLocation", storageLocation);
}

std::string CreateUploadVideoRequest::getCoverURL()const
{
	return coverURL_;
}

void CreateUploadVideoRequest::setCoverURL(const std::string& coverURL)
{
	coverURL_ = coverURL;
	setParameter("CoverURL", coverURL);
}

std::string CreateUploadVideoRequest::getUserData()const
{
	return userData_;
}

void CreateUploadVideoRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string CreateUploadVideoRequest::getFileName()const
{
	return fileName_;
}

void CreateUploadVideoRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setParameter("FileName", fileName);
}

std::string CreateUploadVideoRequest::getTemplateGroupId()const
{
	return templateGroupId_;
}

void CreateUploadVideoRequest::setTemplateGroupId(const std::string& templateGroupId)
{
	templateGroupId_ = templateGroupId;
	setParameter("TemplateGroupId", templateGroupId);
}

long CreateUploadVideoRequest::getCateId()const
{
	return cateId_;
}

void CreateUploadVideoRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setParameter("CateId", std::to_string(cateId));
}

