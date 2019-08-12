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

#include <alibabacloud/vod/model/CreateUploadImageRequest.h>

using AlibabaCloud::Vod::Model::CreateUploadImageRequest;

CreateUploadImageRequest::CreateUploadImageRequest() :
	RpcServiceRequest("vod", "2017-03-21", "CreateUploadImage")
{}

CreateUploadImageRequest::~CreateUploadImageRequest()
{}

long CreateUploadImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUploadImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateUploadImageRequest::getImageType()const
{
	return imageType_;
}

void CreateUploadImageRequest::setImageType(const std::string& imageType)
{
	imageType_ = imageType;
	setCoreParameter("ImageType", std::to_string(imageType));
}

std::string CreateUploadImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateUploadImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateUploadImageRequest::getImageExt()const
{
	return imageExt_;
}

void CreateUploadImageRequest::setImageExt(const std::string& imageExt)
{
	imageExt_ = imageExt;
	setCoreParameter("ImageExt", std::to_string(imageExt));
}

std::string CreateUploadImageRequest::getDescription()const
{
	return description_;
}

void CreateUploadImageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long CreateUploadImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUploadImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateUploadImageRequest::getTitle()const
{
	return title_;
}

void CreateUploadImageRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", std::to_string(title));
}

std::string CreateUploadImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUploadImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateUploadImageRequest::getTags()const
{
	return tags_;
}

void CreateUploadImageRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

std::string CreateUploadImageRequest::getStorageLocation()const
{
	return storageLocation_;
}

void CreateUploadImageRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setCoreParameter("StorageLocation", std::to_string(storageLocation));
}

std::string CreateUploadImageRequest::getUserData()const
{
	return userData_;
}

void CreateUploadImageRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

std::string CreateUploadImageRequest::getOriginalFileName()const
{
	return originalFileName_;
}

void CreateUploadImageRequest::setOriginalFileName(const std::string& originalFileName)
{
	originalFileName_ = originalFileName;
	setCoreParameter("OriginalFileName", std::to_string(originalFileName));
}

long CreateUploadImageRequest::getCateId()const
{
	return cateId_;
}

void CreateUploadImageRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", cateId);
}

std::string CreateUploadImageRequest::getAppId()const
{
	return appId_;
}

void CreateUploadImageRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

