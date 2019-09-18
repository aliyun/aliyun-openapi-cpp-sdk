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

#include <alibabacloud/dyvmsapi/model/SingleCallByTtsRequest.h>

using AlibabaCloud::Dyvmsapi::Model::SingleCallByTtsRequest;

SingleCallByTtsRequest::SingleCallByTtsRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "SingleCallByTts")
{}

SingleCallByTtsRequest::~SingleCallByTtsRequest()
{}

long SingleCallByTtsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SingleCallByTtsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SingleCallByTtsRequest::getTtsParam()const
{
	return ttsParam_;
}

void SingleCallByTtsRequest::setTtsParam(const std::string& ttsParam)
{
	ttsParam_ = ttsParam;
	setCoreParameter("TtsParam", ttsParam);
}

int SingleCallByTtsRequest::getSpeed()const
{
	return speed_;
}

void SingleCallByTtsRequest::setSpeed(int speed)
{
	speed_ = speed;
	setCoreParameter("Speed", std::to_string(speed));
}

std::string SingleCallByTtsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SingleCallByTtsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SingleCallByTtsRequest::getCalledNumber()const
{
	return calledNumber_;
}

void SingleCallByTtsRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setCoreParameter("CalledNumber", calledNumber);
}

std::string SingleCallByTtsRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void SingleCallByTtsRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setCoreParameter("CalledShowNumber", calledShowNumber);
}

std::string SingleCallByTtsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SingleCallByTtsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SingleCallByTtsRequest::getTtsCode()const
{
	return ttsCode_;
}

void SingleCallByTtsRequest::setTtsCode(const std::string& ttsCode)
{
	ttsCode_ = ttsCode;
	setCoreParameter("TtsCode", ttsCode);
}

int SingleCallByTtsRequest::getPlayTimes()const
{
	return playTimes_;
}

void SingleCallByTtsRequest::setPlayTimes(int playTimes)
{
	playTimes_ = playTimes;
	setCoreParameter("PlayTimes", std::to_string(playTimes));
}

long SingleCallByTtsRequest::getOwnerId()const
{
	return ownerId_;
}

void SingleCallByTtsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int SingleCallByTtsRequest::getVolume()const
{
	return volume_;
}

void SingleCallByTtsRequest::setVolume(int volume)
{
	volume_ = volume;
	setCoreParameter("Volume", std::to_string(volume));
}

std::string SingleCallByTtsRequest::getOutId()const
{
	return outId_;
}

void SingleCallByTtsRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setCoreParameter("OutId", outId);
}

