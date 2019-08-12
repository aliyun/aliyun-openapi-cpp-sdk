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

#include <alibabacloud/chatbot/model/CreateEntityRequest.h>

using AlibabaCloud::Chatbot::Model::CreateEntityRequest;

CreateEntityRequest::CreateEntityRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "CreateEntity")
{}

CreateEntityRequest::~CreateEntityRequest()
{}

std::string CreateEntityRequest::getRegex()const
{
	return regex_;
}

void CreateEntityRequest::setRegex(const std::string& regex)
{
	regex_ = regex;
	setCoreParameter("Regex", std::to_string(regex));
}

std::string CreateEntityRequest::getEntityType()const
{
	return entityType_;
}

void CreateEntityRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setCoreParameter("EntityType", std::to_string(entityType));
}

std::string CreateEntityRequest::getMembers()const
{
	return members_;
}

void CreateEntityRequest::setMembers(const std::string& members)
{
	members_ = members;
	setCoreParameter("Members", std::to_string(members));
}

std::string CreateEntityRequest::getEntityName()const
{
	return entityName_;
}

void CreateEntityRequest::setEntityName(const std::string& entityName)
{
	entityName_ = entityName;
	setCoreParameter("EntityName", std::to_string(entityName));
}

long CreateEntityRequest::getDialogId()const
{
	return dialogId_;
}

void CreateEntityRequest::setDialogId(long dialogId)
{
	dialogId_ = dialogId;
	setCoreParameter("DialogId", dialogId);
}

