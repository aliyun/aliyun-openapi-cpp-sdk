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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SmartCallRequest::getVoiceCodeParam()const
{
	return voiceCodeParam_;
}

void SmartCallRequest::setVoiceCodeParam(const std::string& voiceCodeParam)
{
	voiceCodeParam_ = voiceCodeParam;
	setCoreParameter("VoiceCodeParam", std::to_string(voiceCodeParam));
}

bool SmartCallRequest::getEarlyMediaAsr()const
{
	return earlyMediaAsr_;
}

void SmartCallRequest::setEarlyMediaAsr(bool earlyMediaAsr)
{
	earlyMediaAsr_ = earlyMediaAsr;
	setCoreParameter("EarlyMediaAsr", earlyMediaAsr ? "true" : "false");
}

int SmartCallRequest::getSpeed()const
{
	return speed_;
}

void SmartCallRequest::setSpeed(int speed)
{
	speed_ = speed;
	setCoreParameter("Speed", speed);
}

std::string SmartCallRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SmartCallRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SmartCallRequest::getAsrBaseId()const
{
	return asrBaseId_;
}

void SmartCallRequest::setAsrBaseId(const std::string& asrBaseId)
{
	asrBaseId_ = asrBaseId;
	setCoreParameter("AsrBaseId", std::to_string(asrBaseId));
}

int SmartCallRequest::getSessionTimeout()const
{
	return sessionTimeout_;
}

void SmartCallRequest::setSessionTimeout(int sessionTimeout)
{
	sessionTimeout_ = sessionTimeout;
	setCoreParameter("SessionTimeout", sessionTimeout);
}

std::string SmartCallRequest::getDynamicId()const
{
	return dynamicId_;
}

void SmartCallRequest::setDynamicId(const std::string& dynamicId)
{
	dynamicId_ = dynamicId;
	setCoreParameter("DynamicId", std::to_string(dynamicId));
}

std::string SmartCallRequest::getCalledNumber()const
{
	return calledNumber_;
}

void SmartCallRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setCoreParameter("CalledNumber", std::to_string(calledNumber));
}

int SmartCallRequest::getTtsSpeed()const
{
	return ttsSpeed_;
}

void SmartCallRequest::setTtsSpeed(int ttsSpeed)
{
	ttsSpeed_ = ttsSpeed;
	setCoreParameter("TtsSpeed", ttsSpeed);
}

std::string SmartCallRequest::getVoiceCode()const
{
	return voiceCode_;
}

void SmartCallRequest::setVoiceCode(const std::string& voiceCode)
{
	voiceCode_ = voiceCode;
	setCoreParameter("VoiceCode", std::to_string(voiceCode));
}

std::string SmartCallRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void SmartCallRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setCoreParameter("CalledShowNumber", std::to_string(calledShowNumber));
}

int SmartCallRequest::getActionCodeTimeBreak()const
{
	return actionCodeTimeBreak_;
}

void SmartCallRequest::setActionCodeTimeBreak(int actionCodeTimeBreak)
{
	actionCodeTimeBreak_ = actionCodeTimeBreak;
	setCoreParameter("ActionCodeTimeBreak", actionCodeTimeBreak);
}

bool SmartCallRequest::getTtsConf()const
{
	return ttsConf_;
}

void SmartCallRequest::setTtsConf(bool ttsConf)
{
	ttsConf_ = ttsConf;
	setCoreParameter("TtsConf", ttsConf ? "true" : "false");
}

bool SmartCallRequest::getActionCodeBreak()const
{
	return actionCodeBreak_;
}

void SmartCallRequest::setActionCodeBreak(bool actionCodeBreak)
{
	actionCodeBreak_ = actionCodeBreak;
	setCoreParameter("ActionCodeBreak", actionCodeBreak ? "true" : "false");
}

std::string SmartCallRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SmartCallRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

bool SmartCallRequest::getRecordFlag()const
{
	return recordFlag_;
}

void SmartCallRequest::setRecordFlag(bool recordFlag)
{
	recordFlag_ = recordFlag;
	setCoreParameter("RecordFlag", recordFlag ? "true" : "false");
}

long SmartCallRequest::getOwnerId()const
{
	return ownerId_;
}

void SmartCallRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int SmartCallRequest::getTtsVolume()const
{
	return ttsVolume_;
}

void SmartCallRequest::setTtsVolume(int ttsVolume)
{
	ttsVolume_ = ttsVolume;
	setCoreParameter("TtsVolume", ttsVolume);
}

int SmartCallRequest::getVolume()const
{
	return volume_;
}

void SmartCallRequest::setVolume(int volume)
{
	volume_ = volume;
	setCoreParameter("Volume", volume);
}

int SmartCallRequest::getMuteTime()const
{
	return muteTime_;
}

void SmartCallRequest::setMuteTime(int muteTime)
{
	muteTime_ = muteTime;
	setCoreParameter("MuteTime", muteTime);
}

std::string SmartCallRequest::getOutId()const
{
	return outId_;
}

void SmartCallRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setCoreParameter("OutId", std::to_string(outId));
}

std::string SmartCallRequest::getAsrModelId()const
{
	return asrModelId_;
}

void SmartCallRequest::setAsrModelId(const std::string& asrModelId)
{
	asrModelId_ = asrModelId;
	setCoreParameter("AsrModelId", std::to_string(asrModelId));
}

int SmartCallRequest::getPauseTime()const
{
	return pauseTime_;
}

void SmartCallRequest::setPauseTime(int pauseTime)
{
	pauseTime_ = pauseTime;
	setCoreParameter("PauseTime", pauseTime);
}

std::string SmartCallRequest::getTtsStyle()const
{
	return ttsStyle_;
}

void SmartCallRequest::setTtsStyle(const std::string& ttsStyle)
{
	ttsStyle_ = ttsStyle;
	setCoreParameter("TtsStyle", std::to_string(ttsStyle));
}

