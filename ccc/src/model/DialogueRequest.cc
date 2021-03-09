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

#include <alibabacloud/ccc/model/DialogueRequest.h>

using AlibabaCloud::CCC::Model::DialogueRequest;

DialogueRequest::DialogueRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "Dialogue")
{
	setMethod(HttpRequest::Method::Post);
}

DialogueRequest::~DialogueRequest()
{}

std::string DialogueRequest::getCallId()const
{
	return callId_;
}

void DialogueRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setParameter("CallId", callId);
}

std::string DialogueRequest::getCalledNumber()const
{
	return calledNumber_;
}

void DialogueRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

long DialogueRequest::getInstanceOwnerId()const
{
	return instanceOwnerId_;
}

void DialogueRequest::setInstanceOwnerId(long instanceOwnerId)
{
	instanceOwnerId_ = instanceOwnerId;
	setParameter("InstanceOwnerId", std::to_string(instanceOwnerId));
}

std::string DialogueRequest::getCallType()const
{
	return callType_;
}

void DialogueRequest::setCallType(const std::string& callType)
{
	callType_ = callType;
	setParameter("CallType", callType);
}

std::string DialogueRequest::getScenarioId()const
{
	return scenarioId_;
}

void DialogueRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setParameter("ScenarioId", scenarioId);
}

std::string DialogueRequest::getTaskId()const
{
	return taskId_;
}

void DialogueRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string DialogueRequest::getUtterance()const
{
	return utterance_;
}

void DialogueRequest::setUtterance(const std::string& utterance)
{
	utterance_ = utterance;
	setParameter("Utterance", utterance);
}

std::string DialogueRequest::getActionParams()const
{
	return actionParams_;
}

void DialogueRequest::setActionParams(const std::string& actionParams)
{
	actionParams_ = actionParams;
	setParameter("ActionParams", actionParams);
}

std::string DialogueRequest::getCallingNumber()const
{
	return callingNumber_;
}

void DialogueRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setParameter("CallingNumber", callingNumber);
}

std::string DialogueRequest::getInstanceId()const
{
	return instanceId_;
}

void DialogueRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DialogueRequest::getActionKey()const
{
	return actionKey_;
}

void DialogueRequest::setActionKey(const std::string& actionKey)
{
	actionKey_ = actionKey;
	setParameter("ActionKey", actionKey);
}

