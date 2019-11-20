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

#include <alibabacloud/ehpc/model/ListUsersRequest.h>

using AlibabaCloud::EHPC::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListUsers")
{
	setMethod(HttpRequest::Method::Get);
}

ListUsersRequest::~ListUsersRequest()
{}

std::string ListUsersRequest::getClusterId()const
{
	return clusterId_;
}

void ListUsersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int ListUsersRequest::getPageSize()const
{
	return pageSize_;
}

void ListUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

