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

#include <alibabacloud/dyplsapi/model/BindAxgRequest.h>

using AlibabaCloud::Dyplsapi::Model::BindAxgRequest;

BindAxgRequest::BindAxgRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "BindAxg")
{
	setMethod(HttpRequest::Method::Post);
}

BindAxgRequest::~BindAxgRequest()
{}

long BindAxgRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindAxgRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int BindAxgRequest::getCallDisplayType()const
{
	return callDisplayType_;
}

void BindAxgRequest::setCallDisplayType(int callDisplayType)
{
	callDisplayType_ = callDisplayType;
	setParameter("CallDisplayType", std::to_string(callDisplayType));
}

std::string BindAxgRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindAxgRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BindAxgRequest::getPhoneNoX()const
{
	return phoneNoX_;
}

void BindAxgRequest::setPhoneNoX(const std::string& phoneNoX)
{
	phoneNoX_ = phoneNoX;
	setParameter("PhoneNoX", phoneNoX);
}

std::string BindAxgRequest::getRingConfig()const
{
	return ringConfig_;
}

void BindAxgRequest::setRingConfig(const std::string& ringConfig)
{
	ringConfig_ = ringConfig;
	setParameter("RingConfig", ringConfig);
}

bool BindAxgRequest::getASRStatus()const
{
	return aSRStatus_;
}

void BindAxgRequest::setASRStatus(bool aSRStatus)
{
	aSRStatus_ = aSRStatus;
	setParameter("ASRStatus", aSRStatus ? "true" : "false");
}

std::string BindAxgRequest::getPhoneNoB()const
{
	return phoneNoB_;
}

void BindAxgRequest::setPhoneNoB(const std::string& phoneNoB)
{
	phoneNoB_ = phoneNoB;
	setParameter("PhoneNoB", phoneNoB);
}

std::string BindAxgRequest::getPhoneNoA()const
{
	return phoneNoA_;
}

void BindAxgRequest::setPhoneNoA(const std::string& phoneNoA)
{
	phoneNoA_ = phoneNoA;
	setParameter("PhoneNoA", phoneNoA);
}

std::string BindAxgRequest::getExpectCity()const
{
	return expectCity_;
}

void BindAxgRequest::setExpectCity(const std::string& expectCity)
{
	expectCity_ = expectCity;
	setParameter("ExpectCity", expectCity);
}

std::string BindAxgRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindAxgRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string BindAxgRequest::getGroupId()const
{
	return groupId_;
}

void BindAxgRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long BindAxgRequest::getOwnerId()const
{
	return ownerId_;
}

void BindAxgRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindAxgRequest::getOutOrderId()const
{
	return outOrderId_;
}

void BindAxgRequest::setOutOrderId(const std::string& outOrderId)
{
	outOrderId_ = outOrderId;
	setParameter("OutOrderId", outOrderId);
}

std::string BindAxgRequest::getPoolKey()const
{
	return poolKey_;
}

void BindAxgRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setParameter("PoolKey", poolKey);
}

std::string BindAxgRequest::getExpiration()const
{
	return expiration_;
}

void BindAxgRequest::setExpiration(const std::string& expiration)
{
	expiration_ = expiration;
	setParameter("Expiration", expiration);
}

bool BindAxgRequest::getIsRecordingEnabled()const
{
	return isRecordingEnabled_;
}

void BindAxgRequest::setIsRecordingEnabled(bool isRecordingEnabled)
{
	isRecordingEnabled_ = isRecordingEnabled;
	setParameter("IsRecordingEnabled", isRecordingEnabled ? "true" : "false");
}

std::string BindAxgRequest::getOutId()const
{
	return outId_;
}

void BindAxgRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

std::string BindAxgRequest::getASRModelId()const
{
	return aSRModelId_;
}

void BindAxgRequest::setASRModelId(const std::string& aSRModelId)
{
	aSRModelId_ = aSRModelId;
	setParameter("ASRModelId", aSRModelId);
}

