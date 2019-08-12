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

#include <alibabacloud/emr/model/ListFlowNodeInstanceRequest.h>

using AlibabaCloud::Emr::Model::ListFlowNodeInstanceRequest;

ListFlowNodeInstanceRequest::ListFlowNodeInstanceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowNodeInstance")
{}

ListFlowNodeInstanceRequest::~ListFlowNodeInstanceRequest()
{}

std::vector<std::string> ListFlowNodeInstanceRequest::getStatusList()const
{
	return statusList_;
}

void ListFlowNodeInstanceRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int i = 0; i!= statusList.size(); i++)
		setCoreParameter("StatusList."+ std::to_string(i), std::to_string(statusList.at(i)));
}

std::string ListFlowNodeInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowNodeInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListFlowNodeInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowNodeInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListFlowNodeInstanceRequest::getOrderBy()const
{
	return orderBy_;
}

void ListFlowNodeInstanceRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
}

long ListFlowNodeInstanceRequest::getStartTime()const
{
	return startTime_;
}

void ListFlowNodeInstanceRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string ListFlowNodeInstanceRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowNodeInstanceRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

int ListFlowNodeInstanceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowNodeInstanceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListFlowNodeInstanceRequest::getOrderType()const
{
	return orderType_;
}

void ListFlowNodeInstanceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

