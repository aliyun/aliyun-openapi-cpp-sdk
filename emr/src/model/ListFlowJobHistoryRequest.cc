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

#include <alibabacloud/emr/model/ListFlowJobHistoryRequest.h>

using AlibabaCloud::Emr::Model::ListFlowJobHistoryRequest;

ListFlowJobHistoryRequest::ListFlowJobHistoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowJobHistory")
{}

ListFlowJobHistoryRequest::~ListFlowJobHistoryRequest()
{}

std::string ListFlowJobHistoryRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowJobHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFlowJobHistoryRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowJobHistoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowJobHistoryRequest::getId()const
{
	return id_;
}

void ListFlowJobHistoryRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ListFlowJobHistoryRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowJobHistoryRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

int ListFlowJobHistoryRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowJobHistoryRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

