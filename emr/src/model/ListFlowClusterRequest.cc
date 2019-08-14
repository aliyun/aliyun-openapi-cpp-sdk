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

#include <alibabacloud/emr/model/ListFlowClusterRequest.h>

using AlibabaCloud::Emr::Model::ListFlowClusterRequest;

ListFlowClusterRequest::ListFlowClusterRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowCluster")
{}

ListFlowClusterRequest::~ListFlowClusterRequest()
{}

std::string ListFlowClusterRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListFlowClusterRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowClusterRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowClusterRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowClusterRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

int ListFlowClusterRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowClusterRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

