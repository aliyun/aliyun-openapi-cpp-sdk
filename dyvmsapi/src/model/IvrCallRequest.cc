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

#include <alibabacloud/dyvmsapi/model/IvrCallRequest.h>

using AlibabaCloud::Dyvmsapi::Model::IvrCallRequest;

IvrCallRequest::IvrCallRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "IvrCall")
{
	setMethod(HttpRequest::Method::Post);
}

IvrCallRequest::~IvrCallRequest()
{}

std::string IvrCallRequest::getByeCode()const
{
	return byeCode_;
}

void IvrCallRequest::setByeCode(const std::string& byeCode)
{
	byeCode_ = byeCode;
	setParameter("ByeCode", byeCode);
}

long IvrCallRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void IvrCallRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string IvrCallRequest::getStartTtsParams()const
{
	return startTtsParams_;
}

void IvrCallRequest::setStartTtsParams(const std::string& startTtsParams)
{
	startTtsParams_ = startTtsParams;
	setParameter("StartTtsParams", startTtsParams);
}

int IvrCallRequest::getTimeout()const
{
	return timeout_;
}

void IvrCallRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

std::string IvrCallRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void IvrCallRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string IvrCallRequest::getStartCode()const
{
	return startCode_;
}

void IvrCallRequest::setStartCode(const std::string& startCode)
{
	startCode_ = startCode;
	setParameter("StartCode", startCode);
}

std::string IvrCallRequest::getCalledNumber()const
{
	return calledNumber_;
}

void IvrCallRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string IvrCallRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void IvrCallRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setParameter("CalledShowNumber", calledShowNumber);
}

std::vector<IvrCallRequest::MenuKeyMap> IvrCallRequest::getMenuKeyMap()const
{
	return menuKeyMap_;
}

void IvrCallRequest::setMenuKeyMap(const std::vector<MenuKeyMap>& menuKeyMap)
{
	menuKeyMap_ = menuKeyMap;
	for(int dep1 = 0; dep1!= menuKeyMap.size(); dep1++) {
		auto menuKeyMapObj = menuKeyMap.at(dep1);
		std::string menuKeyMapObjStr = "MenuKeyMap." + std::to_string(dep1 + 1);
		setParameter(menuKeyMapObjStr + ".Code", menuKeyMapObj.code);
		setParameter(menuKeyMapObjStr + ".TtsParams", menuKeyMapObj.ttsParams);
		setParameter(menuKeyMapObjStr + ".Key", menuKeyMapObj.key);
	}
}

std::string IvrCallRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void IvrCallRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long IvrCallRequest::getPlayTimes()const
{
	return playTimes_;
}

void IvrCallRequest::setPlayTimes(long playTimes)
{
	playTimes_ = playTimes;
	setParameter("PlayTimes", std::to_string(playTimes));
}

long IvrCallRequest::getOwnerId()const
{
	return ownerId_;
}

void IvrCallRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string IvrCallRequest::getOutId()const
{
	return outId_;
}

void IvrCallRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

std::string IvrCallRequest::getByeTtsParams()const
{
	return byeTtsParams_;
}

void IvrCallRequest::setByeTtsParams(const std::string& byeTtsParams)
{
	byeTtsParams_ = byeTtsParams;
	setParameter("ByeTtsParams", byeTtsParams);
}

