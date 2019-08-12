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

#include <alibabacloud/vod/model/GetMediaAuditResultDetailRequest.h>

using AlibabaCloud::Vod::Model::GetMediaAuditResultDetailRequest;

GetMediaAuditResultDetailRequest::GetMediaAuditResultDetailRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetMediaAuditResultDetail")
{}

GetMediaAuditResultDetailRequest::~GetMediaAuditResultDetailRequest()
{}

long GetMediaAuditResultDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMediaAuditResultDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetMediaAuditResultDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetMediaAuditResultDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int GetMediaAuditResultDetailRequest::getPageNo()const
{
	return pageNo_;
}

void GetMediaAuditResultDetailRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string GetMediaAuditResultDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void GetMediaAuditResultDetailRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetMediaAuditResultDetailRequest::getMediaId()const
{
	return mediaId_;
}

void GetMediaAuditResultDetailRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string GetMediaAuditResultDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMediaAuditResultDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

