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

#include <alibabacloud/vod/model/GetAIVideoTagResultRequest.h>

using AlibabaCloud::Vod::Model::GetAIVideoTagResultRequest;

GetAIVideoTagResultRequest::GetAIVideoTagResultRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetAIVideoTagResult")
{}

GetAIVideoTagResultRequest::~GetAIVideoTagResultRequest()
{}

std::string GetAIVideoTagResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAIVideoTagResultRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetAIVideoTagResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetAIVideoTagResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string GetAIVideoTagResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetAIVideoTagResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string GetAIVideoTagResultRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAIVideoTagResultRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetAIVideoTagResultRequest::getMediaId()const
{
	return mediaId_;
}

void GetAIVideoTagResultRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", std::to_string(mediaId));
}

std::string GetAIVideoTagResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAIVideoTagResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

