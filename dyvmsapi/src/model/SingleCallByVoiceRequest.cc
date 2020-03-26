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

#include <alibabacloud/dyvmsapi/model/SingleCallByVoiceRequest.h>

using AlibabaCloud::Dyvmsapi::Model::SingleCallByVoiceRequest;

SingleCallByVoiceRequest::SingleCallByVoiceRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "SingleCallByVoice")
{
	setMethod(HttpRequest::Method::Post);
}

SingleCallByVoiceRequest::~SingleCallByVoiceRequest()
{}

long SingleCallByVoiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SingleCallByVoiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int SingleCallByVoiceRequest::getSpeed()const
{
	return speed_;
}

void SingleCallByVoiceRequest::setSpeed(int speed)
{
	speed_ = speed;
	setParameter("Speed", std::to_string(speed));
}

std::string SingleCallByVoiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SingleCallByVoiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SingleCallByVoiceRequest::getCalledNumber()const
{
	return calledNumber_;
}

void SingleCallByVoiceRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string SingleCallByVoiceRequest::getVoiceCode()const
{
	return voiceCode_;
}

void SingleCallByVoiceRequest::setVoiceCode(const std::string& voiceCode)
{
	voiceCode_ = voiceCode;
	setParameter("VoiceCode", voiceCode);
}

std::string SingleCallByVoiceRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void SingleCallByVoiceRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setParameter("CalledShowNumber", calledShowNumber);
}

std::string SingleCallByVoiceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SingleCallByVoiceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int SingleCallByVoiceRequest::getPlayTimes()const
{
	return playTimes_;
}

void SingleCallByVoiceRequest::setPlayTimes(int playTimes)
{
	playTimes_ = playTimes;
	setParameter("PlayTimes", std::to_string(playTimes));
}

long SingleCallByVoiceRequest::getOwnerId()const
{
	return ownerId_;
}

void SingleCallByVoiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int SingleCallByVoiceRequest::getVolume()const
{
	return volume_;
}

void SingleCallByVoiceRequest::setVolume(int volume)
{
	volume_ = volume;
	setParameter("Volume", std::to_string(volume));
}

std::string SingleCallByVoiceRequest::getOutId()const
{
	return outId_;
}

void SingleCallByVoiceRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

