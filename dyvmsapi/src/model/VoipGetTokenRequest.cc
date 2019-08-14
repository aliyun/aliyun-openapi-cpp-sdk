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

#include <alibabacloud/dyvmsapi/model/VoipGetTokenRequest.h>

using AlibabaCloud::Dyvmsapi::Model::VoipGetTokenRequest;

VoipGetTokenRequest::VoipGetTokenRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "VoipGetToken")
{}

VoipGetTokenRequest::~VoipGetTokenRequest()
{}

long VoipGetTokenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void VoipGetTokenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string VoipGetTokenRequest::getVoipId()const
{
	return voipId_;
}

void VoipGetTokenRequest::setVoipId(const std::string& voipId)
{
	voipId_ = voipId;
	setCoreParameter("VoipId", voipId);
}

std::string VoipGetTokenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void VoipGetTokenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long VoipGetTokenRequest::getOwnerId()const
{
	return ownerId_;
}

void VoipGetTokenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string VoipGetTokenRequest::getDeviceId()const
{
	return deviceId_;
}

void VoipGetTokenRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setCoreParameter("DeviceId", deviceId);
}

bool VoipGetTokenRequest::getIsCustomAccount()const
{
	return isCustomAccount_;
}

void VoipGetTokenRequest::setIsCustomAccount(bool isCustomAccount)
{
	isCustomAccount_ = isCustomAccount;
	setCoreParameter("IsCustomAccount", isCustomAccount ? "true" : "false");
}

std::string VoipGetTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void VoipGetTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

