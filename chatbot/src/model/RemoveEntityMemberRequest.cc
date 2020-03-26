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

#include <alibabacloud/chatbot/model/RemoveEntityMemberRequest.h>

using AlibabaCloud::Chatbot::Model::RemoveEntityMemberRequest;

RemoveEntityMemberRequest::RemoveEntityMemberRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "RemoveEntityMember")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveEntityMemberRequest::~RemoveEntityMemberRequest()
{}

long RemoveEntityMemberRequest::getEntityId()const
{
	return entityId_;
}

void RemoveEntityMemberRequest::setEntityId(long entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", std::to_string(entityId));
}

std::string RemoveEntityMemberRequest::getRemoveType()const
{
	return removeType_;
}

void RemoveEntityMemberRequest::setRemoveType(const std::string& removeType)
{
	removeType_ = removeType;
	setParameter("RemoveType", removeType);
}

std::string RemoveEntityMemberRequest::getMember()const
{
	return member_;
}

void RemoveEntityMemberRequest::setMember(const std::string& member)
{
	member_ = member;
	setBodyParameter("Member", member);
}

