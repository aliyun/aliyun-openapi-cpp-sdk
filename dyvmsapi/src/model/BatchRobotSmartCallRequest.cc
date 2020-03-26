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

#include <alibabacloud/dyvmsapi/model/BatchRobotSmartCallRequest.h>

using AlibabaCloud::Dyvmsapi::Model::BatchRobotSmartCallRequest;

BatchRobotSmartCallRequest::BatchRobotSmartCallRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "BatchRobotSmartCall")
{
	setMethod(HttpRequest::Method::Post);
}

BatchRobotSmartCallRequest::~BatchRobotSmartCallRequest()
{}

long BatchRobotSmartCallRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BatchRobotSmartCallRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool BatchRobotSmartCallRequest::getEarlyMediaAsr()const
{
	return earlyMediaAsr_;
}

void BatchRobotSmartCallRequest::setEarlyMediaAsr(bool earlyMediaAsr)
{
	earlyMediaAsr_ = earlyMediaAsr;
	setParameter("EarlyMediaAsr", earlyMediaAsr ? "true" : "false");
}

std::string BatchRobotSmartCallRequest::getTtsParamHead()const
{
	return ttsParamHead_;
}

void BatchRobotSmartCallRequest::setTtsParamHead(const std::string& ttsParamHead)
{
	ttsParamHead_ = ttsParamHead;
	setParameter("TtsParamHead", ttsParamHead);
}

std::string BatchRobotSmartCallRequest::getTaskName()const
{
	return taskName_;
}

void BatchRobotSmartCallRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string BatchRobotSmartCallRequest::getTtsParam()const
{
	return ttsParam_;
}

void BatchRobotSmartCallRequest::setTtsParam(const std::string& ttsParam)
{
	ttsParam_ = ttsParam;
	setParameter("TtsParam", ttsParam);
}

std::string BatchRobotSmartCallRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchRobotSmartCallRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BatchRobotSmartCallRequest::getCalledNumber()const
{
	return calledNumber_;
}

void BatchRobotSmartCallRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string BatchRobotSmartCallRequest::getCalledShowNumber()const
{
	return calledShowNumber_;
}

void BatchRobotSmartCallRequest::setCalledShowNumber(const std::string& calledShowNumber)
{
	calledShowNumber_ = calledShowNumber;
	setParameter("CalledShowNumber", calledShowNumber);
}

bool BatchRobotSmartCallRequest::getIsSelfLine()const
{
	return isSelfLine_;
}

void BatchRobotSmartCallRequest::setIsSelfLine(bool isSelfLine)
{
	isSelfLine_ = isSelfLine;
	setParameter("IsSelfLine", isSelfLine ? "true" : "false");
}

std::string BatchRobotSmartCallRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BatchRobotSmartCallRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BatchRobotSmartCallRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchRobotSmartCallRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchRobotSmartCallRequest::getDialogId()const
{
	return dialogId_;
}

void BatchRobotSmartCallRequest::setDialogId(const std::string& dialogId)
{
	dialogId_ = dialogId;
	setParameter("DialogId", dialogId);
}

long BatchRobotSmartCallRequest::getScheduleTime()const
{
	return scheduleTime_;
}

void BatchRobotSmartCallRequest::setScheduleTime(long scheduleTime)
{
	scheduleTime_ = scheduleTime;
	setParameter("ScheduleTime", std::to_string(scheduleTime));
}

std::string BatchRobotSmartCallRequest::getCorpName()const
{
	return corpName_;
}

void BatchRobotSmartCallRequest::setCorpName(const std::string& corpName)
{
	corpName_ = corpName;
	setParameter("CorpName", corpName);
}

bool BatchRobotSmartCallRequest::getScheduleCall()const
{
	return scheduleCall_;
}

void BatchRobotSmartCallRequest::setScheduleCall(bool scheduleCall)
{
	scheduleCall_ = scheduleCall;
	setParameter("ScheduleCall", scheduleCall ? "true" : "false");
}

