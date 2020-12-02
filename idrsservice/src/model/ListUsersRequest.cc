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

#include <alibabacloud/idrsservice/model/ListUsersRequest.h>

using AlibabaCloud::Idrsservice::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "ListUsers")
{
	setMethod(HttpRequest::Method::Post);
}

ListUsersRequest::~ListUsersRequest()
{}

std::string ListUsersRequest::getDepartmentId()const
{
	return departmentId_;
}

void ListUsersRequest::setDepartmentId(const std::string& departmentId)
{
	departmentId_ = departmentId;
	setParameter("DepartmentId", departmentId);
}

int ListUsersRequest::getPageSize()const
{
	return pageSize_;
}

void ListUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListUsersRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListUsersRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListUsersRequest::getUsername()const
{
	return username_;
}

void ListUsersRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

