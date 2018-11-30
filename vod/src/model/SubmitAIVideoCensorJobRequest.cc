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

#include <alibabacloud/vod/model/SubmitAIVideoCensorJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIVideoCensorJobRequest;

SubmitAIVideoCensorJobRequest::SubmitAIVideoCensorJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitAIVideoCensorJob")
{}

SubmitAIVideoCensorJobRequest::~SubmitAIVideoCensorJobRequest()
{}

std::string SubmitAIVideoCensorJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAIVideoCensorJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitAIVideoCensorJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAIVideoCensorJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAIVideoCensorJobRequest::getAIVideoCensorConfig()const
{
	return aIVideoCensorConfig_;
}

void SubmitAIVideoCensorJobRequest::setAIVideoCensorConfig(const std::string& aIVideoCensorConfig)
{
	aIVideoCensorConfig_ = aIVideoCensorConfig;
	setParameter("AIVideoCensorConfig", aIVideoCensorConfig);
}

std::string SubmitAIVideoCensorJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAIVideoCensorJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAIVideoCensorJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAIVideoCensorJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAIVideoCensorJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAIVideoCensorJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string SubmitAIVideoCensorJobRequest::getMediaId()const
{
	return mediaId_;
}

void SubmitAIVideoCensorJobRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string SubmitAIVideoCensorJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAIVideoCensorJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

