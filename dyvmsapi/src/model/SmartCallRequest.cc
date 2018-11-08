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

#include <alibabacloud/dyvmsapi/model/SmartCallRequest.h>

using AlibabaCloud::Dyvmsapi::Model::SmartCallRequest;

SmartCallRequest::SmartCallRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "SmartCall")
{}

SmartCallRequest::~SmartCallRequest()
{}

long SmartCallRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SmartCallRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool SmartCallRequest::getActionCodeBreak()const
{
	return actionCodeBreak_;
}

void SmartCallRequest::setActionCodeBreak(bool actionCodeBreak)
{
	actionCodeBreak_ = actionCodeBreak;
	setParameter("ActionCodeBreak", std::to_string(actionCodeBreak));
}

std::string SmartCallRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SmartCallRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool SmartCallRequest::getRecordFlag()const
{
	return recordFlag_;
}

void SmartCallRequest::setRecordFlag(bool recordFlag)
{
	recordFlag_ = recordFlag;
	setParameter("RecordFlag", std::to_string(recordFlag));
}

long SmartCallRequest::getOwnerId()const
{
	return ownerId_;
}

void SmartCallRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int SmartCallRequest::getSpeed()const
{
	return speed_;
}

void SmartCallRequest::setSpeed(int speed)
{
	speed_ = speed;
	setParameter("Speed", std::to_string(speed));
}

std::string SmartCallRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SmartCallRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int SmartCallRequest::getVolume()const
{
	return volume_;
}

void SmartCallRequest::setVolume(int volume)
{
	volume_ = volume;
	setParameter("Volume", std::to_string(volume));
}

std::string SmartCallRequest::getDynamicId()const
{
	return dynamicId_;
}

void SmartCallRequest::setDynamicId(const std::string& dynamicId)
{
	dynamicId_ = dynamicId;
	setParameter("DynamicId", dynamicId);
}

std::string SmartCallRequest::getCalledNumber()const
{
	return calledNumber_;
}

void SmartCallRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string SmartCallRequest::getVoiceCode()const
{
	return voiceCode_;
}

void SmartCallRequest::setVoiceCode(const std::string& voiceCode)
{
	voiceCode_ = voiceCode;
	setParameter("VoiceCode", voiceCode);
}

int SmartCallRequest::getMuteTime()const
{
	return muteTime_;
}

void SmartCallRequest::setMuteTime(int muteTime)
{
	muteTime_ = muteTime;
	setParameter("MuteTime", std::to_string(muteTime));
}

std::string SmartCallRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void SmartCallRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setParameter("CalledShowNumber", calledShowNumber);
}

std::string SmartCallRequest::getOutId()const
{
	return outId_;
}

void SmartCallRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

std::string SmartCallRequest::getAsrModelId()const
{
	return asrModelId_;
}

void SmartCallRequest::setAsrModelId(const std::string& asrModelId)
{
	asrModelId_ = asrModelId;
	setParameter("AsrModelId", asrModelId);
}

int SmartCallRequest::getPauseTime()const
{
	return pauseTime_;
}

void SmartCallRequest::setPauseTime(int pauseTime)
{
	pauseTime_ = pauseTime;
	setParameter("PauseTime", std::to_string(pauseTime));
}

