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

#include <alibabacloud/dyvmsapi/model/ClickToDialRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ClickToDialRequest;

ClickToDialRequest::ClickToDialRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ClickToDial")
{
	setMethod(HttpRequest::Method::Post);
}

ClickToDialRequest::~ClickToDialRequest()
{}

long ClickToDialRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ClickToDialRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ClickToDialRequest::getCallerShowNumber()const
{
	return callerShowNumber_;
}

void ClickToDialRequest::setCallerShowNumber(const std::string& callerShowNumber)
{
	callerShowNumber_ = callerShowNumber;
	setParameter("CallerShowNumber", callerShowNumber);
}

std::string ClickToDialRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ClickToDialRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ClickToDialRequest::getSessionTimeout()const
{
	return sessionTimeout_;
}

void ClickToDialRequest::setSessionTimeout(int sessionTimeout)
{
	sessionTimeout_ = sessionTimeout;
	setParameter("SessionTimeout", std::to_string(sessionTimeout));
}

std::string ClickToDialRequest::getCalledNumber()const
{
	return calledNumber_;
}

void ClickToDialRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string ClickToDialRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void ClickToDialRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setParameter("CalledShowNumber", calledShowNumber);
}

bool ClickToDialRequest::getAsrFlag()const
{
	return asrFlag_;
}

void ClickToDialRequest::setAsrFlag(bool asrFlag)
{
	asrFlag_ = asrFlag;
	setParameter("AsrFlag", asrFlag ? "true" : "false");
}

std::string ClickToDialRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ClickToDialRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool ClickToDialRequest::getRecordFlag()const
{
	return recordFlag_;
}

void ClickToDialRequest::setRecordFlag(bool recordFlag)
{
	recordFlag_ = recordFlag;
	setParameter("RecordFlag", recordFlag ? "true" : "false");
}

long ClickToDialRequest::getOwnerId()const
{
	return ownerId_;
}

void ClickToDialRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ClickToDialRequest::getOutId()const
{
	return outId_;
}

void ClickToDialRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

std::string ClickToDialRequest::getAsrModelId()const
{
	return asrModelId_;
}

void ClickToDialRequest::setAsrModelId(const std::string& asrModelId)
{
	asrModelId_ = asrModelId;
	setParameter("AsrModelId", asrModelId);
}

std::string ClickToDialRequest::getCallerNumber()const
{
	return callerNumber_;
}

void ClickToDialRequest::setCallerNumber(const std::string& callerNumber)
{
	callerNumber_ = callerNumber;
	setParameter("CallerNumber", callerNumber);
}

