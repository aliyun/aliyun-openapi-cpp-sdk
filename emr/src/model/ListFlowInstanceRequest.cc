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

#include <alibabacloud/emr/model/ListFlowInstanceRequest.h>

using AlibabaCloud::Emr::Model::ListFlowInstanceRequest;

ListFlowInstanceRequest::ListFlowInstanceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowInstance")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowInstanceRequest::~ListFlowInstanceRequest()
{}

std::vector<std::string> ListFlowInstanceRequest::getStatusList()const
{
	return statusList_;
}

void ListFlowInstanceRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

std::string ListFlowInstanceRequest::getNodeInstanceId()const
{
	return nodeInstanceId_;
}

void ListFlowInstanceRequest::setNodeInstanceId(const std::string& nodeInstanceId)
{
	nodeInstanceId_ = nodeInstanceId;
	setParameter("NodeInstanceId", nodeInstanceId);
}

int ListFlowInstanceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowInstanceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFlowInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowInstanceRequest::getId()const
{
	return id_;
}

void ListFlowInstanceRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ListFlowInstanceRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowInstanceRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string ListFlowInstanceRequest::getOwner()const
{
	return owner_;
}

void ListFlowInstanceRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setParameter("Owner", owner);
}

std::string ListFlowInstanceRequest::getTimeRange()const
{
	return timeRange_;
}

void ListFlowInstanceRequest::setTimeRange(const std::string& timeRange)
{
	timeRange_ = timeRange;
	setParameter("TimeRange", timeRange);
}

std::string ListFlowInstanceRequest::getOrderBy()const
{
	return orderBy_;
}

void ListFlowInstanceRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

std::string ListFlowInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ListFlowInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListFlowInstanceRequest::getFlowName()const
{
	return flowName_;
}

void ListFlowInstanceRequest::setFlowName(const std::string& flowName)
{
	flowName_ = flowName;
	setParameter("FlowName", flowName);
}

std::string ListFlowInstanceRequest::getFlowId()const
{
	return flowId_;
}

void ListFlowInstanceRequest::setFlowId(const std::string& flowId)
{
	flowId_ = flowId;
	setParameter("FlowId", flowId);
}

std::string ListFlowInstanceRequest::getOrderType()const
{
	return orderType_;
}

void ListFlowInstanceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

