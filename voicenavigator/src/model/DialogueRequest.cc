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

#include <alibabacloud/voicenavigator/model/DialogueRequest.h>

using AlibabaCloud::VoiceNavigator::Model::DialogueRequest;

DialogueRequest::DialogueRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "Dialogue")
{
	setMethod(HttpRequest::Method::Post);
}

DialogueRequest::~DialogueRequest()
{}

std::string DialogueRequest::getConversationId()const
{
	return conversationId_;
}

void DialogueRequest::setConversationId(const std::string& conversationId)
{
	conversationId_ = conversationId;
	setParameter("ConversationId", conversationId);
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

std::string DialogueRequest::getCalledNumber()const
{
	return calledNumber_;
}

void DialogueRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string DialogueRequest::getAdditionalContext()const
{
	return additionalContext_;
}

void DialogueRequest::setAdditionalContext(const std::string& additionalContext)
{
	additionalContext_ = additionalContext;
	setParameter("AdditionalContext", additionalContext);
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

std::string DialogueRequest::getUtterance()const
{
	return utterance_;
}

void DialogueRequest::setUtterance(const std::string& utterance)
{
	utterance_ = utterance;
	setParameter("Utterance", utterance);
}

