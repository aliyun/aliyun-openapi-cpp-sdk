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

#include <alibabacloud/vod/model/ListAIVideoCensorJobRequest.h>

using AlibabaCloud::Vod::Model::ListAIVideoCensorJobRequest;

ListAIVideoCensorJobRequest::ListAIVideoCensorJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAIVideoCensorJob")
{}

ListAIVideoCensorJobRequest::~ListAIVideoCensorJobRequest()
{}

std::string ListAIVideoCensorJobRequest::getAIVideoCensorJobIds()const
{
	return aIVideoCensorJobIds_;
}

void ListAIVideoCensorJobRequest::setAIVideoCensorJobIds(const std::string& aIVideoCensorJobIds)
{
	aIVideoCensorJobIds_ = aIVideoCensorJobIds;
	setParameter("AIVideoCensorJobIds", aIVideoCensorJobIds);
}

std::string ListAIVideoCensorJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAIVideoCensorJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAIVideoCensorJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAIVideoCensorJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListAIVideoCensorJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAIVideoCensorJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListAIVideoCensorJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAIVideoCensorJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListAIVideoCensorJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAIVideoCensorJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

