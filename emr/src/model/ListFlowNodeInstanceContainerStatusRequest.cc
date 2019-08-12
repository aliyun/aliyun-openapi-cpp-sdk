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

#include <alibabacloud/emr/model/ListFlowNodeInstanceContainerStatusRequest.h>

using AlibabaCloud::Emr::Model::ListFlowNodeInstanceContainerStatusRequest;

ListFlowNodeInstanceContainerStatusRequest::ListFlowNodeInstanceContainerStatusRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowNodeInstanceContainerStatus")
{}

ListFlowNodeInstanceContainerStatusRequest::~ListFlowNodeInstanceContainerStatusRequest()
{}

std::string ListFlowNodeInstanceContainerStatusRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowNodeInstanceContainerStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int ListFlowNodeInstanceContainerStatusRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowNodeInstanceContainerStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListFlowNodeInstanceContainerStatusRequest::getNodeInstanceId()const
{
	return nodeInstanceId_;
}

void ListFlowNodeInstanceContainerStatusRequest::setNodeInstanceId(const std::string& nodeInstanceId)
{
	nodeInstanceId_ = nodeInstanceId;
	setCoreParameter("NodeInstanceId", std::to_string(nodeInstanceId));
}

std::string ListFlowNodeInstanceContainerStatusRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowNodeInstanceContainerStatusRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

int ListFlowNodeInstanceContainerStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowNodeInstanceContainerStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

