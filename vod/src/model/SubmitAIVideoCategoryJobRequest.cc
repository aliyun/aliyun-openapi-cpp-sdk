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

#include <alibabacloud/vod/model/SubmitAIVideoCategoryJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIVideoCategoryJobRequest;

SubmitAIVideoCategoryJobRequest::SubmitAIVideoCategoryJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitAIVideoCategoryJob")
{}

SubmitAIVideoCategoryJobRequest::~SubmitAIVideoCategoryJobRequest()
{}

std::string SubmitAIVideoCategoryJobRequest::getAIVideoCategoryConfig()const
{
	return aIVideoCategoryConfig_;
}

void SubmitAIVideoCategoryJobRequest::setAIVideoCategoryConfig(const std::string& aIVideoCategoryConfig)
{
	aIVideoCategoryConfig_ = aIVideoCategoryConfig;
	setParameter("AIVideoCategoryConfig", aIVideoCategoryConfig);
}

std::string SubmitAIVideoCategoryJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAIVideoCategoryJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitAIVideoCategoryJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAIVideoCategoryJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAIVideoCategoryJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAIVideoCategoryJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAIVideoCategoryJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAIVideoCategoryJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAIVideoCategoryJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAIVideoCategoryJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string SubmitAIVideoCategoryJobRequest::getMediaId()const
{
	return mediaId_;
}

void SubmitAIVideoCategoryJobRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string SubmitAIVideoCategoryJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAIVideoCategoryJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

