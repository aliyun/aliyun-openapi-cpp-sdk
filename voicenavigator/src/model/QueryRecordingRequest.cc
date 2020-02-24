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

#include <alibabacloud/voicenavigator/model/QueryRecordingRequest.h>

using AlibabaCloud::VoiceNavigator::Model::QueryRecordingRequest;

QueryRecordingRequest::QueryRecordingRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "QueryRecording")
{
	setMethod(HttpRequest::Method::Get);
}

QueryRecordingRequest::~QueryRecordingRequest()
{}

std::string QueryRecordingRequest::getConversationId()const
{
	return conversationId_;
}

void QueryRecordingRequest::setConversationId(const std::string& conversationId)
{
	conversationId_ = conversationId;
	setParameter("ConversationId", conversationId);
}

std::string QueryRecordingRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryRecordingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

