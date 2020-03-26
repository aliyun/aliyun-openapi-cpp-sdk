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

#include <alibabacloud/chatbot/model/QueryCoreWordsRequest.h>

using AlibabaCloud::Chatbot::Model::QueryCoreWordsRequest;

QueryCoreWordsRequest::QueryCoreWordsRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "QueryCoreWords")
{
	setMethod(HttpRequest::Method::Post);
}

QueryCoreWordsRequest::~QueryCoreWordsRequest()
{}

int QueryCoreWordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryCoreWordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryCoreWordsRequest::getSynonym()const
{
	return synonym_;
}

void QueryCoreWordsRequest::setSynonym(const std::string& synonym)
{
	synonym_ = synonym;
	setParameter("Synonym", synonym);
}

int QueryCoreWordsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryCoreWordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryCoreWordsRequest::getCoreWordName()const
{
	return coreWordName_;
}

void QueryCoreWordsRequest::setCoreWordName(const std::string& coreWordName)
{
	coreWordName_ = coreWordName;
	setParameter("CoreWordName", coreWordName);
}

