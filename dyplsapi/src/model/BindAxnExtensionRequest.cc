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

#include <alibabacloud/dyplsapi/model/BindAxnExtensionRequest.h>

using AlibabaCloud::Dyplsapi::Model::BindAxnExtensionRequest;

BindAxnExtensionRequest::BindAxnExtensionRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "BindAxnExtension")
{
	setMethod(HttpRequest::Method::Post);
}

BindAxnExtensionRequest::~BindAxnExtensionRequest()
{}

long BindAxnExtensionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindAxnExtensionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BindAxnExtensionRequest::getExtension()const
{
	return extension_;
}

void BindAxnExtensionRequest::setExtension(const std::string& extension)
{
	extension_ = extension;
	setParameter("Extension", extension);
}

int BindAxnExtensionRequest::getCallDisplayType()const
{
	return callDisplayType_;
}

void BindAxnExtensionRequest::setCallDisplayType(int callDisplayType)
{
	callDisplayType_ = callDisplayType;
	setParameter("CallDisplayType", std::to_string(callDisplayType));
}

std::string BindAxnExtensionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindAxnExtensionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BindAxnExtensionRequest::getPhoneNoX()const
{
	return phoneNoX_;
}

void BindAxnExtensionRequest::setPhoneNoX(const std::string& phoneNoX)
{
	phoneNoX_ = phoneNoX;
	setParameter("PhoneNoX", phoneNoX);
}

std::string BindAxnExtensionRequest::getRingConfig()const
{
	return ringConfig_;
}

void BindAxnExtensionRequest::setRingConfig(const std::string& ringConfig)
{
	ringConfig_ = ringConfig;
	setParameter("RingConfig", ringConfig);
}

std::string BindAxnExtensionRequest::getPhoneNoB()const
{
	return phoneNoB_;
}

void BindAxnExtensionRequest::setPhoneNoB(const std::string& phoneNoB)
{
	phoneNoB_ = phoneNoB;
	setParameter("PhoneNoB", phoneNoB);
}

std::string BindAxnExtensionRequest::getPhoneNoA()const
{
	return phoneNoA_;
}

void BindAxnExtensionRequest::setPhoneNoA(const std::string& phoneNoA)
{
	phoneNoA_ = phoneNoA;
	setParameter("PhoneNoA", phoneNoA);
}

std::string BindAxnExtensionRequest::getExpectCity()const
{
	return expectCity_;
}

void BindAxnExtensionRequest::setExpectCity(const std::string& expectCity)
{
	expectCity_ = expectCity;
	setParameter("ExpectCity", expectCity);
}

std::string BindAxnExtensionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindAxnExtensionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BindAxnExtensionRequest::getOwnerId()const
{
	return ownerId_;
}

void BindAxnExtensionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindAxnExtensionRequest::getOutOrderId()const
{
	return outOrderId_;
}

void BindAxnExtensionRequest::setOutOrderId(const std::string& outOrderId)
{
	outOrderId_ = outOrderId;
	setParameter("OutOrderId", outOrderId);
}

std::string BindAxnExtensionRequest::getPoolKey()const
{
	return poolKey_;
}

void BindAxnExtensionRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setParameter("PoolKey", poolKey);
}

std::string BindAxnExtensionRequest::getExpiration()const
{
	return expiration_;
}

void BindAxnExtensionRequest::setExpiration(const std::string& expiration)
{
	expiration_ = expiration;
	setParameter("Expiration", expiration);
}

bool BindAxnExtensionRequest::getIsRecordingEnabled()const
{
	return isRecordingEnabled_;
}

void BindAxnExtensionRequest::setIsRecordingEnabled(bool isRecordingEnabled)
{
	isRecordingEnabled_ = isRecordingEnabled;
	setParameter("IsRecordingEnabled", isRecordingEnabled ? "true" : "false");
}

std::string BindAxnExtensionRequest::getOutId()const
{
	return outId_;
}

void BindAxnExtensionRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

