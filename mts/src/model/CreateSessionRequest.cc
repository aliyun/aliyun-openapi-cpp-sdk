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

#include <alibabacloud/mts/model/CreateSessionRequest.h>

using AlibabaCloud::Mts::Model::CreateSessionRequest;

CreateSessionRequest::CreateSessionRequest() :
	RpcServiceRequest("mts", "2014-06-18", "CreateSession")
{}

CreateSessionRequest::~CreateSessionRequest()
{}

std::string CreateSessionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSessionRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int CreateSessionRequest::getSessionTime()const
{
	return sessionTime_;
}

void CreateSessionRequest::setSessionTime(int sessionTime)
{
	sessionTime_ = sessionTime;
	setCoreParameter("SessionTime", std::to_string(sessionTime));
}

std::string CreateSessionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSessionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSessionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSessionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateSessionRequest::getEndUserId()const
{
	return endUserId_;
}

void CreateSessionRequest::setEndUserId(const std::string& endUserId)
{
	endUserId_ = endUserId;
	setCoreParameter("EndUserId", endUserId);
}

std::string CreateSessionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSessionRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateSessionRequest::getMediaId()const
{
	return mediaId_;
}

void CreateSessionRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string CreateSessionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSessionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

