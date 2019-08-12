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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UploadMediaByURLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UploadMediaByURLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UploadMediaByURLRequest::getMessageCallback()const
{
	return messageCallback_;
}

void UploadMediaByURLRequest::setMessageCallback(const std::string& messageCallback)
{
	messageCallback_ = messageCallback;
	setCoreParameter("MessageCallback", std::to_string(messageCallback));
}

long UploadMediaByURLRequest::getOwnerId()const
{
	return ownerId_;
}

void UploadMediaByURLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UploadMediaByURLRequest::getPriority()const
{
	return priority_;
}

void UploadMediaByURLRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

std::string UploadMediaByURLRequest::getStorageLocation()const
{
	return storageLocation_;
}

void UploadMediaByURLRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setCoreParameter("StorageLocation", std::to_string(storageLocation));
}

std::string UploadMediaByURLRequest::getUserData()const
{
	return userData_;
}

void UploadMediaByURLRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

std::string UploadMediaByURLRequest::getTemplateGroupId()const
{
	return templateGroupId_;
}

void UploadMediaByURLRequest::setTemplateGroupId(const std::string& templateGroupId)
{
	templateGroupId_ = templateGroupId;
	setCoreParameter("TemplateGroupId", std::to_string(templateGroupId));
}

std::string UploadMediaByURLRequest::getUploadMetadatas()const
{
	return uploadMetadatas_;
}

void UploadMediaByURLRequest::setUploadMetadatas(const std::string& uploadMetadatas)
{
	uploadMetadatas_ = uploadMetadatas;
	setCoreParameter("UploadMetadatas", std::to_string(uploadMetadatas));
}

std::string UploadMediaByURLRequest::getUploadURLs()const
{
	return uploadURLs_;
}

void UploadMediaByURLRequest::setUploadURLs(const std::string& uploadURLs)
{
	uploadURLs_ = uploadURLs;
	setCoreParameter("UploadURLs", std::to_string(uploadURLs));
}

std::string UploadMediaByURLRequest::getAppId()const
{
	return appId_;
}

void UploadMediaByURLRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string UploadMediaByURLRequest::getWorkflowId()const
{
	return workflowId_;
}

void UploadMediaByURLRequest::setWorkflowId(const std::string& workflowId)
{
	workflowId_ = workflowId;
	setCoreParameter("WorkflowId", std::to_string(workflowId));
}

