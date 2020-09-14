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

#include <alibabacloud/vcs/model/ListCorpsRequest.h>

using AlibabaCloud::Vcs::Model::ListCorpsRequest;

ListCorpsRequest::ListCorpsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListCorps")
{
	setMethod(HttpRequest::Method::Post);
}

ListCorpsRequest::~ListCorpsRequest()
{}

int ListCorpsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCorpsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int ListCorpsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCorpsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListCorpsRequest::getCorpName()const
{
	return corpName_;
}

void ListCorpsRequest::setCorpName(const std::string& corpName)
{
	corpName_ = corpName;
	setBodyParameter("CorpName", corpName);
}

