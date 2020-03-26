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

#include <alibabacloud/ccc/model/ListUsersRequest.h>

using AlibabaCloud::CCC::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListUsers")
{
	setMethod(HttpRequest::Method::Post);
}

ListUsersRequest::~ListUsersRequest()
{}

int ListUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListUsersRequest::getInstanceId()const
{
	return instanceId_;
}

void ListUsersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
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

