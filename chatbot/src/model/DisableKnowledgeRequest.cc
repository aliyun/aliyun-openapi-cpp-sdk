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

#include <alibabacloud/chatbot/model/DisableKnowledgeRequest.h>

using AlibabaCloud::Chatbot::Model::DisableKnowledgeRequest;

DisableKnowledgeRequest::DisableKnowledgeRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "DisableKnowledge")
{
	setMethod(HttpRequest::Method::Post);
}

DisableKnowledgeRequest::~DisableKnowledgeRequest()
{}

long DisableKnowledgeRequest::getKnowledgeId()const
{
	return knowledgeId_;
}

void DisableKnowledgeRequest::setKnowledgeId(long knowledgeId)
{
	knowledgeId_ = knowledgeId;
	setParameter("KnowledgeId", std::to_string(knowledgeId));
}

