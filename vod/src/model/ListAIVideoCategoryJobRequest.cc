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

#include <alibabacloud/vod/model/ListAIVideoCategoryJobRequest.h>

using AlibabaCloud::Vod::Model::ListAIVideoCategoryJobRequest;

ListAIVideoCategoryJobRequest::ListAIVideoCategoryJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAIVideoCategoryJob")
{}

ListAIVideoCategoryJobRequest::~ListAIVideoCategoryJobRequest()
{}

std::string ListAIVideoCategoryJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAIVideoCategoryJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAIVideoCategoryJobRequest::getAIVideoCategoryJobIds()const
{
	return aIVideoCategoryJobIds_;
}

void ListAIVideoCategoryJobRequest::setAIVideoCategoryJobIds(const std::string& aIVideoCategoryJobIds)
{
	aIVideoCategoryJobIds_ = aIVideoCategoryJobIds;
	setParameter("AIVideoCategoryJobIds", aIVideoCategoryJobIds);
}

std::string ListAIVideoCategoryJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAIVideoCategoryJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListAIVideoCategoryJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAIVideoCategoryJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListAIVideoCategoryJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAIVideoCategoryJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListAIVideoCategoryJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAIVideoCategoryJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

