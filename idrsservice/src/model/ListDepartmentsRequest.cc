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

#include <alibabacloud/idrsservice/model/ListDepartmentsRequest.h>

using AlibabaCloud::Idrsservice::Model::ListDepartmentsRequest;

ListDepartmentsRequest::ListDepartmentsRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "ListDepartments")
{
	setMethod(HttpRequest::Method::Post);
}

ListDepartmentsRequest::~ListDepartmentsRequest()
{}

std::string ListDepartmentsRequest::getUserId()const
{
	return userId_;
}

void ListDepartmentsRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string ListDepartmentsRequest::getName()const
{
	return name_;
}

void ListDepartmentsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListDepartmentsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDepartmentsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListDepartmentsRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListDepartmentsRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

