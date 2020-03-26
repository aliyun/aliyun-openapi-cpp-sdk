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

#include <alibabacloud/chatbot/model/QueryEntitiesRequest.h>

using AlibabaCloud::Chatbot::Model::QueryEntitiesRequest;

QueryEntitiesRequest::QueryEntitiesRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "QueryEntities")
{
	setMethod(HttpRequest::Method::Post);
}

QueryEntitiesRequest::~QueryEntitiesRequest()
{}

std::string QueryEntitiesRequest::getEntityName()const
{
	return entityName_;
}

void QueryEntitiesRequest::setEntityName(const std::string& entityName)
{
	entityName_ = entityName;
	setParameter("EntityName", entityName);
}

long QueryEntitiesRequest::getDialogId()const
{
	return dialogId_;
}

void QueryEntitiesRequest::setDialogId(long dialogId)
{
	dialogId_ = dialogId;
	setParameter("DialogId", std::to_string(dialogId));
}

int QueryEntitiesRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryEntitiesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int QueryEntitiesRequest::getPageSize()const
{
	return pageSize_;
}

void QueryEntitiesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

