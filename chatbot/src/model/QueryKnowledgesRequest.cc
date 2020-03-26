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

#include <alibabacloud/chatbot/model/QueryKnowledgesRequest.h>

using AlibabaCloud::Chatbot::Model::QueryKnowledgesRequest;

QueryKnowledgesRequest::QueryKnowledgesRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "QueryKnowledges")
{
	setMethod(HttpRequest::Method::Post);
}

QueryKnowledgesRequest::~QueryKnowledgesRequest()
{}

std::string QueryKnowledgesRequest::getKnowledgeTitle()const
{
	return knowledgeTitle_;
}

void QueryKnowledgesRequest::setKnowledgeTitle(const std::string& knowledgeTitle)
{
	knowledgeTitle_ = knowledgeTitle;
	setParameter("KnowledgeTitle", knowledgeTitle);
}

int QueryKnowledgesRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryKnowledgesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int QueryKnowledgesRequest::getPageSize()const
{
	return pageSize_;
}

void QueryKnowledgesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryKnowledgesRequest::getCoreWordName()const
{
	return coreWordName_;
}

void QueryKnowledgesRequest::setCoreWordName(const std::string& coreWordName)
{
	coreWordName_ = coreWordName;
	setParameter("CoreWordName", coreWordName);
}

long QueryKnowledgesRequest::getCategoryId()const
{
	return categoryId_;
}

void QueryKnowledgesRequest::setCategoryId(long categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", std::to_string(categoryId));
}

