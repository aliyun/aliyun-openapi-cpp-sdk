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

#include <alibabacloud/cloudesl/model/QueryContainerListRequest.h>

using AlibabaCloud::Cloudesl::Model::QueryContainerListRequest;

QueryContainerListRequest::QueryContainerListRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "QueryContainerList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryContainerListRequest::~QueryContainerListRequest()
{}

std::string QueryContainerListRequest::getLayoutId()const
{
	return layoutId_;
}

void QueryContainerListRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setBodyParameter("LayoutId", layoutId);
}

int QueryContainerListRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryContainerListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int QueryContainerListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryContainerListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

