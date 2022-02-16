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

#include <alibabacloud/emr/model/ListFlowProjectUserRequest.h>

using AlibabaCloud::Emr::Model::ListFlowProjectUserRequest;

ListFlowProjectUserRequest::ListFlowProjectUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowProjectUser")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowProjectUserRequest::~ListFlowProjectUserRequest()
{}

int ListFlowProjectUserRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowProjectUserRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowProjectUserRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowProjectUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFlowProjectUserRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowProjectUserRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowProjectUserRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowProjectUserRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

