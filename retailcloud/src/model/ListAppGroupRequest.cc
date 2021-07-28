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

#include <alibabacloud/retailcloud/model/ListAppGroupRequest.h>

using AlibabaCloud::Retailcloud::Model::ListAppGroupRequest;

ListAppGroupRequest::ListAppGroupRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListAppGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ListAppGroupRequest::~ListAppGroupRequest()
{}

std::string ListAppGroupRequest::getBizCode()const
{
	return bizCode_;
}

void ListAppGroupRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

int ListAppGroupRequest::getPageSize()const
{
	return pageSize_;
}

void ListAppGroupRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListAppGroupRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAppGroupRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

