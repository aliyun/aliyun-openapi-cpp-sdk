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

#include <alibabacloud/vod/model/ListAIVideoCoverJobRequest.h>

using AlibabaCloud::Vod::Model::ListAIVideoCoverJobRequest;

ListAIVideoCoverJobRequest::ListAIVideoCoverJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAIVideoCoverJob")
{}

ListAIVideoCoverJobRequest::~ListAIVideoCoverJobRequest()
{}

std::string ListAIVideoCoverJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAIVideoCoverJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAIVideoCoverJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAIVideoCoverJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListAIVideoCoverJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAIVideoCoverJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListAIVideoCoverJobRequest::getAIVideoCoverJobIds()const
{
	return aIVideoCoverJobIds_;
}

void ListAIVideoCoverJobRequest::setAIVideoCoverJobIds(const std::string& aIVideoCoverJobIds)
{
	aIVideoCoverJobIds_ = aIVideoCoverJobIds;
	setParameter("AIVideoCoverJobIds", aIVideoCoverJobIds);
}

std::string ListAIVideoCoverJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAIVideoCoverJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListAIVideoCoverJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAIVideoCoverJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

