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

#include <alibabacloud/mts/model/PlayerAuthRequest.h>

using AlibabaCloud::Mts::Model::PlayerAuthRequest;

PlayerAuthRequest::PlayerAuthRequest() :
	RpcServiceRequest("mts", "2014-06-18", "PlayerAuth")
{}

PlayerAuthRequest::~PlayerAuthRequest()
{}

std::string PlayerAuthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PlayerAuthRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PlayerAuthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PlayerAuthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string PlayerAuthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PlayerAuthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string PlayerAuthRequest::getOwnerId()const
{
	return ownerId_;
}

void PlayerAuthRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PlayerAuthRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PlayerAuthRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

