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
{
	setMethod(HttpRequest::Method::Post);
}

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

std::string SmartCallRequest::getVoiceCodeParam()const
{
	return voiceCodeParam_;
}

void SmartCallRequest::setVoiceCodeParam(const std::string& voiceCodeParam)
{
	voiceCodeParam_ = voiceCodeParam;
	setParameter("VoiceCodeParam", voiceCodeParam);
}

bool SmartCallRequest::getEarlyMediaAsr()const
{
	return earlyMediaAsr_;
}

void SmartCallRequest::setEarlyMediaAsr(bool earlyMediaAsr)
{
	earlyMediaAsr_ = earlyMediaAsr;
	setParameter("EarlyMediaAsr", earlyMediaAsr ? "true" : "false");
}

int SmartCallRequest::getBackgroundSpeed()const
{
	return backgroundSpeed_;
}

void SmartCallRequest::setBackgroundSpeed(int backgroundSpeed)
{
	backgroundSpeed_ = backgroundSpeed;
	setParameter("BackgroundSpeed", std::to_string(backgroundSpeed));
}

int SmartCallRequest::getBackgroundVolume()const
{
	return backgroundVolume_;
}

void SmartCallRequest::setBackgroundVolume(int backgroundVolume)
{
	backgroundVolume_ = backgroundVolume;
	setParameter("BackgroundVolume", std::to_string(backgroundVolume));
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

std::string SmartCallRequest::getAsrBaseId()const
{
	return asrBaseId_;
}

void SmartCallRequest::setAsrBaseId(const std::string& asrBaseId)
{
	asrBaseId_ = asrBaseId;
	setParameter("AsrBaseId", asrBaseId);
}

int SmartCallRequest::getSessionTimeout()const
{
	return sessionTimeout_;
}

void SmartCallRequest::setSessionTimeout(int sessionTimeout)
{
	sessionTimeout_ = sessionTimeout;
	setParameter("SessionTimeout", std::to_string(sessionTimeout));
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

int SmartCallRequest::getTtsSpeed()const
{
	return ttsSpeed_;
}

void SmartCallRequest::setTtsSpeed(int ttsSpeed)
{
	ttsSpeed_ = ttsSpeed;
	setParameter("TtsSpeed", std::to_string(ttsSpeed));
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

std::string SmartCallRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void SmartCallRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setParameter("CalledShowNumber", calledShowNumber);
}

bool SmartCallRequest::getEnableITN()const
{
	return enableITN_;
}

void SmartCallRequest::setEnableITN(bool enableITN)
{
	enableITN_ = enableITN;
	setParameter("EnableITN", enableITN ? "true" : "false");
}

int SmartCallRequest::getActionCodeTimeBreak()const
{
	return actionCodeTimeBreak_;
}

void SmartCallRequest::setActionCodeTimeBreak(int actionCodeTimeBreak)
{
	actionCodeTimeBreak_ = actionCodeTimeBreak;
	setParameter("ActionCodeTimeBreak", std::to_string(actionCodeTimeBreak));
}

bool SmartCallRequest::getTtsConf()const
{
	return ttsConf_;
}

void SmartCallRequest::setTtsConf(bool ttsConf)
{
	ttsConf_ = ttsConf;
	setParameter("TtsConf", ttsConf ? "true" : "false");
}

bool SmartCallRequest::getActionCodeBreak()const
{
	return actionCodeBreak_;
}

void SmartCallRequest::setActionCodeBreak(bool actionCodeBreak)
{
	actionCodeBreak_ = actionCodeBreak;
	setParameter("ActionCodeBreak", actionCodeBreak ? "true" : "false");
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
	setParameter("RecordFlag", recordFlag ? "true" : "false");
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

int SmartCallRequest::getTtsVolume()const
{
	return ttsVolume_;
}

void SmartCallRequest::setTtsVolume(int ttsVolume)
{
	ttsVolume_ = ttsVolume;
	setParameter("TtsVolume", std::to_string(ttsVolume));
}

int SmartCallRequest::getStreamAsr()const
{
	return streamAsr_;
}

void SmartCallRequest::setStreamAsr(int streamAsr)
{
	streamAsr_ = streamAsr;
	setParameter("StreamAsr", std::to_string(streamAsr));
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

int SmartCallRequest::getMuteTime()const
{
	return muteTime_;
}

void SmartCallRequest::setMuteTime(int muteTime)
{
	muteTime_ = muteTime;
	setParameter("MuteTime", std::to_string(muteTime));
}

std::string SmartCallRequest::getBackgroundFileCode()const
{
	return backgroundFileCode_;
}

void SmartCallRequest::setBackgroundFileCode(const std::string& backgroundFileCode)
{
	backgroundFileCode_ = backgroundFileCode;
	setParameter("BackgroundFileCode", backgroundFileCode);
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

std::string SmartCallRequest::getTtsStyle()const
{
	return ttsStyle_;
}

void SmartCallRequest::setTtsStyle(const std::string& ttsStyle)
{
	ttsStyle_ = ttsStyle;
	setParameter("TtsStyle", ttsStyle);
}

