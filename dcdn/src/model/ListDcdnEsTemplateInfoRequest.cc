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

#include <alibabacloud/dcdn/model/ListDcdnEsTemplateInfoRequest.h>

using AlibabaCloud::Dcdn::Model::ListDcdnEsTemplateInfoRequest;

ListDcdnEsTemplateInfoRequest::ListDcdnEsTemplateInfoRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "ListDcdnEsTemplateInfo")
{
	setMethod(HttpRequest::Method::Get);
}

ListDcdnEsTemplateInfoRequest::~ListDcdnEsTemplateInfoRequest()
{}

std::string ListDcdnEsTemplateInfoRequest::getLanguage()const
{
	return language_;
}

void ListDcdnEsTemplateInfoRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setParameter("Language", language);
}

int ListDcdnEsTemplateInfoRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDcdnEsTemplateInfoRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListDcdnEsTemplateInfoRequest::getPageSize()const
{
	return pageSize_;
}

void ListDcdnEsTemplateInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDcdnEsTemplateInfoRequest::getOp()const
{
	return op_;
}

void ListDcdnEsTemplateInfoRequest::setOp(const std::string& op)
{
	op_ = op;
	setParameter("Op", op);
}

long ListDcdnEsTemplateInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void ListDcdnEsTemplateInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

