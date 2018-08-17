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

#include <alibabacloud/vod/model/SubmitAIVideoSummaryJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIVideoSummaryJobRequest;

SubmitAIVideoSummaryJobRequest::SubmitAIVideoSummaryJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitAIVideoSummaryJob")
{}

SubmitAIVideoSummaryJobRequest::~SubmitAIVideoSummaryJobRequest()
{}

std::string SubmitAIVideoSummaryJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAIVideoSummaryJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitAIVideoSummaryJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAIVideoSummaryJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAIVideoSummaryJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAIVideoSummaryJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAIVideoSummaryJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAIVideoSummaryJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAIVideoSummaryJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAIVideoSummaryJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string SubmitAIVideoSummaryJobRequest::getMediaId()const
{
	return mediaId_;
}

void SubmitAIVideoSummaryJobRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string SubmitAIVideoSummaryJobRequest::getAIVideoSummaryConfig()const
{
	return aIVideoSummaryConfig_;
}

void SubmitAIVideoSummaryJobRequest::setAIVideoSummaryConfig(const std::string& aIVideoSummaryConfig)
{
	aIVideoSummaryConfig_ = aIVideoSummaryConfig;
	setParameter("AIVideoSummaryConfig", aIVideoSummaryConfig);
}

std::string SubmitAIVideoSummaryJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAIVideoSummaryJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

