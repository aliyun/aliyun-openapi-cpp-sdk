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

#include <alibabacloud/dyvmsapi/model/GetRtcTokenRequest.h>

using AlibabaCloud::Dyvmsapi::Model::GetRtcTokenRequest;

GetRtcTokenRequest::GetRtcTokenRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "GetRtcToken")
{
	setMethod(HttpRequest::Method::Post);
}

GetRtcTokenRequest::~GetRtcTokenRequest()
{}

long GetRtcTokenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetRtcTokenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetRtcTokenRequest::getUserId()const
{
	return userId_;
}

void GetRtcTokenRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string GetRtcTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetRtcTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetRtcTokenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetRtcTokenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetRtcTokenRequest::getOwnerId()const
{
	return ownerId_;
}

void GetRtcTokenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetRtcTokenRequest::getDeviceId()const
{
	return deviceId_;
}

void GetRtcTokenRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

bool GetRtcTokenRequest::getIsCustomAccount()const
{
	return isCustomAccount_;
}

void GetRtcTokenRequest::setIsCustomAccount(bool isCustomAccount)
{
	isCustomAccount_ = isCustomAccount;
	setParameter("IsCustomAccount", isCustomAccount ? "true" : "false");
}

