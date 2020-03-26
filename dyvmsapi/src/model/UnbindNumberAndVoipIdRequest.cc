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

#include <alibabacloud/dyvmsapi/model/UnbindNumberAndVoipIdRequest.h>

using AlibabaCloud::Dyvmsapi::Model::UnbindNumberAndVoipIdRequest;

UnbindNumberAndVoipIdRequest::UnbindNumberAndVoipIdRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "UnbindNumberAndVoipId")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindNumberAndVoipIdRequest::~UnbindNumberAndVoipIdRequest()
{}

long UnbindNumberAndVoipIdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnbindNumberAndVoipIdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnbindNumberAndVoipIdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnbindNumberAndVoipIdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnbindNumberAndVoipIdRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void UnbindNumberAndVoipIdRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

long UnbindNumberAndVoipIdRequest::getOwnerId()const
{
	return ownerId_;
}

void UnbindNumberAndVoipIdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UnbindNumberAndVoipIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnbindNumberAndVoipIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UnbindNumberAndVoipIdRequest::getVoipId()const
{
	return voipId_;
}

void UnbindNumberAndVoipIdRequest::setVoipId(const std::string& voipId)
{
	voipId_ = voipId;
	setParameter("VoipId", voipId);
}

