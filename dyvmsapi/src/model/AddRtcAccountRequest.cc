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

#include <alibabacloud/dyvmsapi/model/AddRtcAccountRequest.h>

using AlibabaCloud::Dyvmsapi::Model::AddRtcAccountRequest;

AddRtcAccountRequest::AddRtcAccountRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "AddRtcAccount")
{}

AddRtcAccountRequest::~AddRtcAccountRequest()
{}

long AddRtcAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddRtcAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddRtcAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddRtcAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

long AddRtcAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void AddRtcAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddRtcAccountRequest::getDeviceId()const
{
	return deviceId_;
}

void AddRtcAccountRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setCoreParameter("DeviceId", std::to_string(deviceId));
}

std::string AddRtcAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddRtcAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

