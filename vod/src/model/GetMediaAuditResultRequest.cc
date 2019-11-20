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

#include <alibabacloud/vod/model/GetMediaAuditResultRequest.h>

using AlibabaCloud::Vod::Model::GetMediaAuditResultRequest;

GetMediaAuditResultRequest::GetMediaAuditResultRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetMediaAuditResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetMediaAuditResultRequest::~GetMediaAuditResultRequest()
{}

long GetMediaAuditResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMediaAuditResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetMediaAuditResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetMediaAuditResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetMediaAuditResultRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void GetMediaAuditResultRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

std::string GetMediaAuditResultRequest::getOwnerId()const
{
	return ownerId_;
}

void GetMediaAuditResultRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetMediaAuditResultRequest::getMediaId()const
{
	return mediaId_;
}

void GetMediaAuditResultRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string GetMediaAuditResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMediaAuditResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

