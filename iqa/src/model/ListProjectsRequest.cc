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

#include <alibabacloud/iqa/model/ListProjectsRequest.h>

using AlibabaCloud::Iqa::Model::ListProjectsRequest;

ListProjectsRequest::ListProjectsRequest() :
	RpcServiceRequest("iqa", "2019-08-13", "ListProjects")
{
	setMethod(HttpRequest::Method::Post);
}

ListProjectsRequest::~ListProjectsRequest()
{}

std::string ListProjectsRequest::getFilterParam()const
{
	return filterParam_;
}

void ListProjectsRequest::setFilterParam(const std::string& filterParam)
{
	filterParam_ = filterParam;
	setParameter("FilterParam", filterParam);
}

int ListProjectsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListProjectsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListProjectsRequest::getPageSize()const
{
	return pageSize_;
}

void ListProjectsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListProjectsRequest::getProjectType()const
{
	return projectType_;
}

void ListProjectsRequest::setProjectType(const std::string& projectType)
{
	projectType_ = projectType;
	setParameter("ProjectType", projectType);
}

