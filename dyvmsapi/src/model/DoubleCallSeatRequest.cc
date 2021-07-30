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

#include <alibabacloud/dyvmsapi/model/DoubleCallSeatRequest.h>

using AlibabaCloud::Dyvmsapi::Model::DoubleCallSeatRequest;

DoubleCallSeatRequest::DoubleCallSeatRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "DoubleCallSeat")
{
	setMethod(HttpRequest::Method::Post);
}

DoubleCallSeatRequest::~DoubleCallSeatRequest()
{}

long DoubleCallSeatRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DoubleCallSeatRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DoubleCallSeatRequest::getCallerShowNumber()const
{
	return callerShowNumber_;
}

void DoubleCallSeatRequest::setCallerShowNumber(const std::string& callerShowNumber)
{
	callerShowNumber_ = callerShowNumber;
	setParameter("CallerShowNumber", callerShowNumber);
}

std::string DoubleCallSeatRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DoubleCallSeatRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int DoubleCallSeatRequest::getSessionTimeout()const
{
	return sessionTimeout_;
}

void DoubleCallSeatRequest::setSessionTimeout(int sessionTimeout)
{
	sessionTimeout_ = sessionTimeout;
	setParameter("SessionTimeout", std::to_string(sessionTimeout));
}

std::string DoubleCallSeatRequest::getCalledNumber()const
{
	return calledNumber_;
}

void DoubleCallSeatRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string DoubleCallSeatRequest::getVoiceCode()const
{
	return voiceCode_;
}

void DoubleCallSeatRequest::setVoiceCode(const std::string& voiceCode)
{
	voiceCode_ = voiceCode;
	setParameter("VoiceCode", voiceCode);
}

std::string DoubleCallSeatRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void DoubleCallSeatRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setParameter("CalledShowNumber", calledShowNumber);
}

bool DoubleCallSeatRequest::getAsrFlag()const
{
	return asrFlag_;
}

void DoubleCallSeatRequest::setAsrFlag(bool asrFlag)
{
	asrFlag_ = asrFlag;
	setParameter("AsrFlag", asrFlag ? "true" : "false");
}

std::string DoubleCallSeatRequest::getCallType()const
{
	return callType_;
}

void DoubleCallSeatRequest::setCallType(const std::string& callType)
{
	callType_ = callType;
	setParameter("CallType", callType);
}

std::string DoubleCallSeatRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DoubleCallSeatRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool DoubleCallSeatRequest::getRecordFlag()const
{
	return recordFlag_;
}

void DoubleCallSeatRequest::setRecordFlag(bool recordFlag)
{
	recordFlag_ = recordFlag;
	setParameter("RecordFlag", recordFlag ? "true" : "false");
}

long DoubleCallSeatRequest::getOwnerId()const
{
	return ownerId_;
}

void DoubleCallSeatRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DoubleCallSeatRequest::getRecordPoint()const
{
	return recordPoint_;
}

void DoubleCallSeatRequest::setRecordPoint(int recordPoint)
{
	recordPoint_ = recordPoint;
	setParameter("RecordPoint", std::to_string(recordPoint));
}

std::string DoubleCallSeatRequest::getOutId()const
{
	return outId_;
}

void DoubleCallSeatRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

std::string DoubleCallSeatRequest::getAsrModelId()const
{
	return asrModelId_;
}

void DoubleCallSeatRequest::setAsrModelId(const std::string& asrModelId)
{
	asrModelId_ = asrModelId;
	setParameter("AsrModelId", asrModelId);
}

std::string DoubleCallSeatRequest::getCallerNumber()const
{
	return callerNumber_;
}

void DoubleCallSeatRequest::setCallerNumber(const std::string& callerNumber)
{
	callerNumber_ = callerNumber;
	setParameter("CallerNumber", callerNumber);
}

