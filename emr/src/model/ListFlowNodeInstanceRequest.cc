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
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowNodeInstanceRequest::~ListFlowNodeInstanceRequest()
{}

std::vector<std::string> ListFlowNodeInstanceRequest::getStatusList()const
{
	return statusList_;
}

void ListFlowNodeInstanceRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

std::string ListFlowNodeInstanceRequest::getOrderBy()const
{
	return orderBy_;
}

void ListFlowNodeInstanceRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

long ListFlowNodeInstanceRequest::getStartTime()const
{
	return startTime_;
}

void ListFlowNodeInstanceRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int ListFlowNodeInstanceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowNodeInstanceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowNodeInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListFlowNodeInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListFlowNodeInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowNodeInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFlowNodeInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowNodeInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowNodeInstanceRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowNodeInstanceRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string ListFlowNodeInstanceRequest::getOrderType()const
{
	return orderType_;
}

void ListFlowNodeInstanceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

