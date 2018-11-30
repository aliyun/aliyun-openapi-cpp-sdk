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

#include <alibabacloud/vod/model/GetAuditResultRequest.h>

using AlibabaCloud::Vod::Model::GetAuditResultRequest;

GetAuditResultRequest::GetAuditResultRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetAuditResult")
{}

GetAuditResultRequest::~GetAuditResultRequest()
{}

std::string GetAuditResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAuditResultRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetAuditResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetAuditResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetAuditResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetAuditResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetAuditResultRequest::getVideoId()const
{
	return videoId_;
}

void GetAuditResultRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

std::string GetAuditResultRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAuditResultRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string GetAuditResultRequest::getMediaId()const
{
	return mediaId_;
}

void GetAuditResultRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string GetAuditResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAuditResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

