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

#include <alibabacloud/dyvmsapi/model/BindNumberAndVoipIdRequest.h>

using AlibabaCloud::Dyvmsapi::Model::BindNumberAndVoipIdRequest;

BindNumberAndVoipIdRequest::BindNumberAndVoipIdRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "BindNumberAndVoipId")
{
	setMethod(HttpRequest::Method::Post);
}

BindNumberAndVoipIdRequest::~BindNumberAndVoipIdRequest()
{}

long BindNumberAndVoipIdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindNumberAndVoipIdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BindNumberAndVoipIdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindNumberAndVoipIdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string BindNumberAndVoipIdRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void BindNumberAndVoipIdRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

long BindNumberAndVoipIdRequest::getOwnerId()const
{
	return ownerId_;
}

void BindNumberAndVoipIdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindNumberAndVoipIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindNumberAndVoipIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BindNumberAndVoipIdRequest::getVoipId()const
{
	return voipId_;
}

void BindNumberAndVoipIdRequest::setVoipId(const std::string& voipId)
{
	voipId_ = voipId;
	setParameter("VoipId", voipId);
}

