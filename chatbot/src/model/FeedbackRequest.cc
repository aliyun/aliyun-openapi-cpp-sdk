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

#include <alibabacloud/chatbot/model/FeedbackRequest.h>

using AlibabaCloud::Chatbot::Model::FeedbackRequest;

FeedbackRequest::FeedbackRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "Feedback")
{
	setMethod(HttpRequest::Method::Post);
}

FeedbackRequest::~FeedbackRequest()
{}

std::string FeedbackRequest::getFeedback()const
{
	return feedback_;
}

void FeedbackRequest::setFeedback(const std::string& feedback)
{
	feedback_ = feedback;
	setParameter("Feedback", feedback);
}

std::string FeedbackRequest::getInstanceId()const
{
	return instanceId_;
}

void FeedbackRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string FeedbackRequest::getMessageId()const
{
	return messageId_;
}

void FeedbackRequest::setMessageId(const std::string& messageId)
{
	messageId_ = messageId;
	setParameter("MessageId", messageId);
}

std::string FeedbackRequest::getSessionId()const
{
	return sessionId_;
}

void FeedbackRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setParameter("SessionId", sessionId);
}

