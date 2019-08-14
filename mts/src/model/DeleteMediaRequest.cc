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

#include <alibabacloud/mts/model/DeleteMediaRequest.h>

using AlibabaCloud::Mts::Model::DeleteMediaRequest;

DeleteMediaRequest::DeleteMediaRequest() :
	RpcServiceRequest("mts", "2014-06-18", "DeleteMedia")
{}

DeleteMediaRequest::~DeleteMediaRequest()
{}

long DeleteMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteMediaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteMediaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteMediaRequest::getMediaIds()const
{
	return mediaIds_;
}

void DeleteMediaRequest::setMediaIds(const std::string& mediaIds)
{
	mediaIds_ = mediaIds;
	setCoreParameter("MediaIds", mediaIds);
}

long DeleteMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

