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

#include <alibabacloud/vod/model/ListAIVideoTerrorismRecogJobRequest.h>

using AlibabaCloud::Vod::Model::ListAIVideoTerrorismRecogJobRequest;

ListAIVideoTerrorismRecogJobRequest::ListAIVideoTerrorismRecogJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAIVideoTerrorismRecogJob")
{}

ListAIVideoTerrorismRecogJobRequest::~ListAIVideoTerrorismRecogJobRequest()
{}

std::string ListAIVideoTerrorismRecogJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAIVideoTerrorismRecogJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAIVideoTerrorismRecogJobRequest::getAIVideoTerrorismRecogJobIds()const
{
	return aIVideoTerrorismRecogJobIds_;
}

void ListAIVideoTerrorismRecogJobRequest::setAIVideoTerrorismRecogJobIds(const std::string& aIVideoTerrorismRecogJobIds)
{
	aIVideoTerrorismRecogJobIds_ = aIVideoTerrorismRecogJobIds;
	setParameter("AIVideoTerrorismRecogJobIds", aIVideoTerrorismRecogJobIds);
}

std::string ListAIVideoTerrorismRecogJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAIVideoTerrorismRecogJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListAIVideoTerrorismRecogJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAIVideoTerrorismRecogJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListAIVideoTerrorismRecogJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAIVideoTerrorismRecogJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListAIVideoTerrorismRecogJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAIVideoTerrorismRecogJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

