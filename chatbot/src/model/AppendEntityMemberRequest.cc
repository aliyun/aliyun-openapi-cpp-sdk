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

#include <alibabacloud/chatbot/model/AppendEntityMemberRequest.h>

using AlibabaCloud::Chatbot::Model::AppendEntityMemberRequest;

AppendEntityMemberRequest::AppendEntityMemberRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "AppendEntityMember")
{
	setMethod(HttpRequest::Method::Post);
}

AppendEntityMemberRequest::~AppendEntityMemberRequest()
{}

long AppendEntityMemberRequest::getEntityId()const
{
	return entityId_;
}

void AppendEntityMemberRequest::setEntityId(long entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", std::to_string(entityId));
}

std::string AppendEntityMemberRequest::getMember()const
{
	return member_;
}

void AppendEntityMemberRequest::setMember(const std::string& member)
{
	member_ = member;
	setBodyParameter("Member", member);
}

std::string AppendEntityMemberRequest::getApplyType()const
{
	return applyType_;
}

void AppendEntityMemberRequest::setApplyType(const std::string& applyType)
{
	applyType_ = applyType;
	setParameter("ApplyType", applyType);
}

