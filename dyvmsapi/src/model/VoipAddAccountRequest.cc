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

#include <alibabacloud/dyvmsapi/model/VoipAddAccountRequest.h>

using AlibabaCloud::Dyvmsapi::Model::VoipAddAccountRequest;

VoipAddAccountRequest::VoipAddAccountRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "VoipAddAccount")
{
	setMethod(HttpRequest::Method::Post);
}

VoipAddAccountRequest::~VoipAddAccountRequest()
{}

long VoipAddAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void VoipAddAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string VoipAddAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void VoipAddAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long VoipAddAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void VoipAddAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string VoipAddAccountRequest::getDeviceId()const
{
	return deviceId_;
}

void VoipAddAccountRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string VoipAddAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void VoipAddAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

