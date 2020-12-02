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

#include <alibabacloud/idrsservice/model/ListTaskGroupsRequest.h>

using AlibabaCloud::Idrsservice::Model::ListTaskGroupsRequest;

ListTaskGroupsRequest::ListTaskGroupsRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "ListTaskGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ListTaskGroupsRequest::~ListTaskGroupsRequest()
{}

int ListTaskGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListTaskGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListTaskGroupsRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListTaskGroupsRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListTaskGroupsRequest::getStatus()const
{
	return status_;
}

void ListTaskGroupsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

