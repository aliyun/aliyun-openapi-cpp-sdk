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

#include <alibabacloud/vod/model/UploadMediaByURLRequest.h>

using AlibabaCloud::Vod::Model::UploadMediaByURLRequest;

UploadMediaByURLRequest::UploadMediaByURLRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UploadMediaByURL")
{}

UploadMediaByURLRequest::~UploadMediaByURLRequest()
{}

long UploadMediaByURLRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UploadMediaByURLRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UploadMediaByURLRequest::getTemplateGroupId()const
{
	return templateGroupId_;
}

void UploadMediaByURLRequest::setTemplateGroupId(const std::string& templateGroupId)
{
	templateGroupId_ = templateGroupId;
	setParameter("TemplateGroupId", templateGroupId);
}

std::string UploadMediaByURLRequest::getUploadMetadatas()const
{
	return uploadMetadatas_;
}

void UploadMediaByURLRequest::setUploadMetadatas(const std::string& uploadMetadatas)
{
	uploadMetadatas_ = uploadMetadatas;
	setParameter("UploadMetadatas", uploadMetadatas);
}

std::string UploadMediaByURLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UploadMediaByURLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UploadMediaByURLRequest::getUploadURLs()const
{
	return uploadURLs_;
}

void UploadMediaByURLRequest::setUploadURLs(const std::string& uploadURLs)
{
	uploadURLs_ = uploadURLs;
	setParameter("UploadURLs", uploadURLs);
}

std::string UploadMediaByURLRequest::getMessageCallback()const
{
	return messageCallback_;
}

void UploadMediaByURLRequest::setMessageCallback(const std::string& messageCallback)
{
	messageCallback_ = messageCallback;
	setParameter("MessageCallback", messageCallback);
}

long UploadMediaByURLRequest::getOwnerId()const
{
	return ownerId_;
}

void UploadMediaByURLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UploadMediaByURLRequest::getPriority()const
{
	return priority_;
}

void UploadMediaByURLRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string UploadMediaByURLRequest::getStorageLocation()const
{
	return storageLocation_;
}

void UploadMediaByURLRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setParameter("StorageLocation", storageLocation);
}

