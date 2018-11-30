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

#include <alibabacloud/vod/model/SubmitAIVideoCoverJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIVideoCoverJobRequest;

SubmitAIVideoCoverJobRequest::SubmitAIVideoCoverJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitAIVideoCoverJob")
{}

SubmitAIVideoCoverJobRequest::~SubmitAIVideoCoverJobRequest()
{}

std::string SubmitAIVideoCoverJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAIVideoCoverJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitAIVideoCoverJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAIVideoCoverJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAIVideoCoverJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAIVideoCoverJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAIVideoCoverJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAIVideoCoverJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAIVideoCoverJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAIVideoCoverJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string SubmitAIVideoCoverJobRequest::getMediaId()const
{
	return mediaId_;
}

void SubmitAIVideoCoverJobRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string SubmitAIVideoCoverJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAIVideoCoverJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitAIVideoCoverJobRequest::getAIVideoCoverConfig()const
{
	return aIVideoCoverConfig_;
}

void SubmitAIVideoCoverJobRequest::setAIVideoCoverConfig(const std::string& aIVideoCoverConfig)
{
	aIVideoCoverConfig_ = aIVideoCoverConfig;
	setParameter("AIVideoCoverConfig", aIVideoCoverConfig);
}

