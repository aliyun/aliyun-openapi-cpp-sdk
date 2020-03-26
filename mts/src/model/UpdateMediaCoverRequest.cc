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

#include <alibabacloud/mts/model/UpdateMediaCoverRequest.h>

using AlibabaCloud::Mts::Model::UpdateMediaCoverRequest;

UpdateMediaCoverRequest::UpdateMediaCoverRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateMediaCover")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateMediaCoverRequest::~UpdateMediaCoverRequest()
{}

long UpdateMediaCoverRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateMediaCoverRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateMediaCoverRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateMediaCoverRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateMediaCoverRequest::getCoverURL()const
{
	return coverURL_;
}

void UpdateMediaCoverRequest::setCoverURL(const std::string& coverURL)
{
	coverURL_ = coverURL;
	setParameter("CoverURL", coverURL);
}

std::string UpdateMediaCoverRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateMediaCoverRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateMediaCoverRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateMediaCoverRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpdateMediaCoverRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateMediaCoverRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateMediaCoverRequest::getMediaId()const
{
	return mediaId_;
}

void UpdateMediaCoverRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

