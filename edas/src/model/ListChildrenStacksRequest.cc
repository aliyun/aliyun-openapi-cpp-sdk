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

#include <alibabacloud/edas/model/ListChildrenStacksRequest.h>

using AlibabaCloud::Edas::Model::ListChildrenStacksRequest;

ListChildrenStacksRequest::ListChildrenStacksRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/s2i/list_children_stack");
	setMethod(HttpRequest::Method::Get);
}

ListChildrenStacksRequest::~ListChildrenStacksRequest()
{}

long ListChildrenStacksRequest::getStackId()const
{
	return stackId_;
}

void ListChildrenStacksRequest::setStackId(long stackId)
{
	stackId_ = stackId;
	setParameter("StackId", std::to_string(stackId));
}

int ListChildrenStacksRequest::getPageSize()const
{
	return pageSize_;
}

void ListChildrenStacksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListChildrenStacksRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListChildrenStacksRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

