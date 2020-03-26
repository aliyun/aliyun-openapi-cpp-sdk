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

#include <alibabacloud/chatbot/model/UpdateEntityRequest.h>

using AlibabaCloud::Chatbot::Model::UpdateEntityRequest;

UpdateEntityRequest::UpdateEntityRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "UpdateEntity")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateEntityRequest::~UpdateEntityRequest()
{}

std::string UpdateEntityRequest::getEntityName()const
{
	return entityName_;
}

void UpdateEntityRequest::setEntityName(const std::string& entityName)
{
	entityName_ = entityName;
	setParameter("EntityName", entityName);
}

long UpdateEntityRequest::getEntityId()const
{
	return entityId_;
}

void UpdateEntityRequest::setEntityId(long entityId)
{
	entityId_ = entityId;
	setParameter("EntityId", std::to_string(entityId));
}

std::string UpdateEntityRequest::getRegex()const
{
	return regex_;
}

void UpdateEntityRequest::setRegex(const std::string& regex)
{
	regex_ = regex;
	setParameter("Regex", regex);
}

std::string UpdateEntityRequest::getEntityType()const
{
	return entityType_;
}

void UpdateEntityRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

std::string UpdateEntityRequest::getMembers()const
{
	return members_;
}

void UpdateEntityRequest::setMembers(const std::string& members)
{
	members_ = members;
	setBodyParameter("Members", members);
}

