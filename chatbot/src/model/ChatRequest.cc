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

#include <alibabacloud/chatbot/model/ChatRequest.h>

using AlibabaCloud::Chatbot::Model::ChatRequest;

ChatRequest::ChatRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "Chat")
{}

ChatRequest::~ChatRequest()
{}

std::string ChatRequest::getKnowledgeId()const
{
	return knowledgeId_;
}

void ChatRequest::setKnowledgeId(const std::string& knowledgeId)
{
	knowledgeId_ = knowledgeId;
	setCoreParameter("KnowledgeId", knowledgeId);
}

std::string ChatRequest::getSenderId()const
{
	return senderId_;
}

void ChatRequest::setSenderId(const std::string& senderId)
{
	senderId_ = senderId;
	setCoreParameter("SenderId", senderId);
}

std::string ChatRequest::getInstanceId()const
{
	return instanceId_;
}

void ChatRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ChatRequest::getSenderNick()const
{
	return senderNick_;
}

void ChatRequest::setSenderNick(const std::string& senderNick)
{
	senderNick_ = senderNick;
	setCoreParameter("SenderNick", senderNick);
}

std::vector<std::string> ChatRequest::getPerspective()const
{
	return perspective_;
}

void ChatRequest::setPerspective(const std::vector<std::string>& perspective)
{
	perspective_ = perspective;
	for(int i = 0; i!= perspective.size(); i++)
		setCoreParameter("Perspective."+ std::to_string(i), perspective.at(i));
}

bool ChatRequest::getRecommend()const
{
	return recommend_;
}

void ChatRequest::setRecommend(bool recommend)
{
	recommend_ = recommend;
	setCoreParameter("Recommend", recommend ? "true" : "false");
}

std::string ChatRequest::getSessionId()const
{
	return sessionId_;
}

void ChatRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setCoreParameter("SessionId", sessionId);
}

std::string ChatRequest::getTag()const
{
	return tag_;
}

void ChatRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

std::string ChatRequest::getUtterance()const
{
	return utterance_;
}

void ChatRequest::setUtterance(const std::string& utterance)
{
	utterance_ = utterance;
	setCoreParameter("Utterance", utterance);
}

std::string ChatRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ChatRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

