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

#include <alibabacloud/retailcloud/model/ListAppGroupMappingRequest.h>

using AlibabaCloud::Retailcloud::Model::ListAppGroupMappingRequest;

ListAppGroupMappingRequest::ListAppGroupMappingRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListAppGroupMapping")
{
	setMethod(HttpRequest::Method::Post);
}

ListAppGroupMappingRequest::~ListAppGroupMappingRequest()
{}

std::string ListAppGroupMappingRequest::getBizCode()const
{
	return bizCode_;
}

void ListAppGroupMappingRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string ListAppGroupMappingRequest::getName()const
{
	return name_;
}

void ListAppGroupMappingRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListAppGroupMappingRequest::getPageSize()const
{
	return pageSize_;
}

void ListAppGroupMappingRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListAppGroupMappingRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAppGroupMappingRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

