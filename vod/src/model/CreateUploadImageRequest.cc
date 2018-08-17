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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUploadImageRequest::getImageType()const
{
	return imageType_;
}

void CreateUploadImageRequest::setImageType(const std::string& imageType)
{
	imageType_ = imageType;
	setParameter("ImageType", imageType);
}

std::string CreateUploadImageRequest::getOriginalFileName()const
{
	return originalFileName_;
}

void CreateUploadImageRequest::setOriginalFileName(const std::string& originalFileName)
{
	originalFileName_ = originalFileName;
	setParameter("OriginalFileName", originalFileName);
}

std::string CreateUploadImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateUploadImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateUploadImageRequest::getImageExt()const
{
	return imageExt_;
}

void CreateUploadImageRequest::setImageExt(const std::string& imageExt)
{
	imageExt_ = imageExt;
	setParameter("ImageExt", imageExt);
}

long CreateUploadImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUploadImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateUploadImageRequest::getTitle()const
{
	return title_;
}

void CreateUploadImageRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string CreateUploadImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUploadImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateUploadImageRequest::getTags()const
{
	return tags_;
}

void CreateUploadImageRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateUploadImageRequest::getStorageLocation()const
{
	return storageLocation_;
}

void CreateUploadImageRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setParameter("StorageLocation", storageLocation);
}

