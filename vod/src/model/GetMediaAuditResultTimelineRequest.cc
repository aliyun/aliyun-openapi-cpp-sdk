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

#include <alibabacloud/vod/model/GetMediaAuditResultTimelineRequest.h>

using AlibabaCloud::Vod::Model::GetMediaAuditResultTimelineRequest;

GetMediaAuditResultTimelineRequest::GetMediaAuditResultTimelineRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetMediaAuditResultTimeline")
{}

GetMediaAuditResultTimelineRequest::~GetMediaAuditResultTimelineRequest()
{}

long GetMediaAuditResultTimelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMediaAuditResultTimelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetMediaAuditResultTimelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetMediaAuditResultTimelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetMediaAuditResultTimelineRequest::getOwnerId()const
{
	return ownerId_;
}

void GetMediaAuditResultTimelineRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetMediaAuditResultTimelineRequest::getMediaId()const
{
	return mediaId_;
}

void GetMediaAuditResultTimelineRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string GetMediaAuditResultTimelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMediaAuditResultTimelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

