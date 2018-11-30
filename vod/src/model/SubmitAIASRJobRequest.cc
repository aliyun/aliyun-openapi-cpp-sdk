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

#include <alibabacloud/vod/model/SubmitAIASRJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIASRJobRequest;

SubmitAIASRJobRequest::SubmitAIASRJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitAIASRJob")
{}

SubmitAIASRJobRequest::~SubmitAIASRJobRequest()
{}

std::string SubmitAIASRJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAIASRJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitAIASRJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAIASRJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAIASRJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAIASRJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAIASRJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAIASRJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAIASRJobRequest::getAIASRConfig()const
{
	return aIASRConfig_;
}

void SubmitAIASRJobRequest::setAIASRConfig(const std::string& aIASRConfig)
{
	aIASRConfig_ = aIASRConfig;
	setParameter("AIASRConfig", aIASRConfig);
}

std::string SubmitAIASRJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAIASRJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string SubmitAIASRJobRequest::getMediaId()const
{
	return mediaId_;
}

void SubmitAIASRJobRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string SubmitAIASRJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAIASRJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

