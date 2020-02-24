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

#include <alibabacloud/voicenavigator/model/DebugAuthorizedRequest.h>

using AlibabaCloud::VoiceNavigator::Model::DebugAuthorizedRequest;

DebugAuthorizedRequest::DebugAuthorizedRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "DebugAuthorized")
{
	setMethod(HttpRequest::Method::Post);
}

DebugAuthorizedRequest::~DebugAuthorizedRequest()
{}

std::string DebugAuthorizedRequest::getConversationId()const
{
	return conversationId_;
}

void DebugAuthorizedRequest::setConversationId(const std::string& conversationId)
{
	conversationId_ = conversationId;
	setParameter("ConversationId", conversationId);
}

std::string DebugAuthorizedRequest::getInitialContext()const
{
	return initialContext_;
}

void DebugAuthorizedRequest::setInitialContext(const std::string& initialContext)
{
	initialContext_ = initialContext;
	setParameter("InitialContext", initialContext);
}

std::string DebugAuthorizedRequest::getInstanceId()const
{
	return instanceId_;
}

void DebugAuthorizedRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

