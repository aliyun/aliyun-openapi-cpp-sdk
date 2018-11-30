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

#include <alibabacloud/vod/model/PushObjectCacheRequest.h>

using AlibabaCloud::Vod::Model::PushObjectCacheRequest;

PushObjectCacheRequest::PushObjectCacheRequest() :
	RpcServiceRequest("vod", "2017-03-21", "PushObjectCache")
{}

PushObjectCacheRequest::~PushObjectCacheRequest()
{}

std::string PushObjectCacheRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PushObjectCacheRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string PushObjectCacheRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PushObjectCacheRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PushObjectCacheRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PushObjectCacheRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string PushObjectCacheRequest::getObjectPath()const
{
	return objectPath_;
}

void PushObjectCacheRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setParameter("ObjectPath", objectPath);
}

std::string PushObjectCacheRequest::getOwnerId()const
{
	return ownerId_;
}

void PushObjectCacheRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string PushObjectCacheRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PushObjectCacheRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

