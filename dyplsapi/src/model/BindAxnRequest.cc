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

#include <alibabacloud/dyplsapi/model/BindAxnRequest.h>

using AlibabaCloud::Dyplsapi::Model::BindAxnRequest;

BindAxnRequest::BindAxnRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "BindAxn")
{
	setMethod(HttpRequest::Method::Post);
}

BindAxnRequest::~BindAxnRequest()
{}

long BindAxnRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindAxnRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int BindAxnRequest::getCallDisplayType()const
{
	return callDisplayType_;
}

void BindAxnRequest::setCallDisplayType(int callDisplayType)
{
	callDisplayType_ = callDisplayType;
	setParameter("CallDisplayType", std::to_string(callDisplayType));
}

std::string BindAxnRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindAxnRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BindAxnRequest::getPhoneNoX()const
{
	return phoneNoX_;
}

void BindAxnRequest::setPhoneNoX(const std::string& phoneNoX)
{
	phoneNoX_ = phoneNoX;
	setParameter("PhoneNoX", phoneNoX);
}

std::string BindAxnRequest::getRingConfig()const
{
	return ringConfig_;
}

void BindAxnRequest::setRingConfig(const std::string& ringConfig)
{
	ringConfig_ = ringConfig;
	setParameter("RingConfig", ringConfig);
}

std::string BindAxnRequest::getPhoneNoB()const
{
	return phoneNoB_;
}

void BindAxnRequest::setPhoneNoB(const std::string& phoneNoB)
{
	phoneNoB_ = phoneNoB;
	setParameter("PhoneNoB", phoneNoB);
}

std::string BindAxnRequest::getPhoneNoA()const
{
	return phoneNoA_;
}

void BindAxnRequest::setPhoneNoA(const std::string& phoneNoA)
{
	phoneNoA_ = phoneNoA;
	setParameter("PhoneNoA", phoneNoA);
}

std::string BindAxnRequest::getExpectCity()const
{
	return expectCity_;
}

void BindAxnRequest::setExpectCity(const std::string& expectCity)
{
	expectCity_ = expectCity;
	setParameter("ExpectCity", expectCity);
}

std::string BindAxnRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindAxnRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BindAxnRequest::getOwnerId()const
{
	return ownerId_;
}

void BindAxnRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindAxnRequest::getOutOrderId()const
{
	return outOrderId_;
}

void BindAxnRequest::setOutOrderId(const std::string& outOrderId)
{
	outOrderId_ = outOrderId;
	setParameter("OutOrderId", outOrderId);
}

std::string BindAxnRequest::getPoolKey()const
{
	return poolKey_;
}

void BindAxnRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setParameter("PoolKey", poolKey);
}

std::string BindAxnRequest::getExpiration()const
{
	return expiration_;
}

void BindAxnRequest::setExpiration(const std::string& expiration)
{
	expiration_ = expiration;
	setParameter("Expiration", expiration);
}

bool BindAxnRequest::getIsRecordingEnabled()const
{
	return isRecordingEnabled_;
}

void BindAxnRequest::setIsRecordingEnabled(bool isRecordingEnabled)
{
	isRecordingEnabled_ = isRecordingEnabled;
	setParameter("IsRecordingEnabled", isRecordingEnabled ? "true" : "false");
}

std::string BindAxnRequest::getOutId()const
{
	return outId_;
}

void BindAxnRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

std::string BindAxnRequest::getNoType()const
{
	return noType_;
}

void BindAxnRequest::setNoType(const std::string& noType)
{
	noType_ = noType;
	setParameter("NoType", noType);
}

