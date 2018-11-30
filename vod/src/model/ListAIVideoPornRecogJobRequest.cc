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

#include <alibabacloud/vod/model/ListAIVideoPornRecogJobRequest.h>

using AlibabaCloud::Vod::Model::ListAIVideoPornRecogJobRequest;

ListAIVideoPornRecogJobRequest::ListAIVideoPornRecogJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAIVideoPornRecogJob")
{}

ListAIVideoPornRecogJobRequest::~ListAIVideoPornRecogJobRequest()
{}

std::string ListAIVideoPornRecogJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAIVideoPornRecogJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAIVideoPornRecogJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAIVideoPornRecogJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListAIVideoPornRecogJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAIVideoPornRecogJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListAIVideoPornRecogJobRequest::getAIVideoPornRecogJobIds()const
{
	return aIVideoPornRecogJobIds_;
}

void ListAIVideoPornRecogJobRequest::setAIVideoPornRecogJobIds(const std::string& aIVideoPornRecogJobIds)
{
	aIVideoPornRecogJobIds_ = aIVideoPornRecogJobIds;
	setParameter("AIVideoPornRecogJobIds", aIVideoPornRecogJobIds);
}

std::string ListAIVideoPornRecogJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAIVideoPornRecogJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListAIVideoPornRecogJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAIVideoPornRecogJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

