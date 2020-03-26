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

#include <alibabacloud/emr/model/ListFlowRequest.h>

using AlibabaCloud::Emr::Model::ListFlowRequest;

ListFlowRequest::ListFlowRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlow")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowRequest::~ListFlowRequest()
{}

bool ListFlowRequest::getPeriodic()const
{
	return periodic_;
}

void ListFlowRequest::setPeriodic(bool periodic)
{
	periodic_ = periodic;
	setParameter("Periodic", periodic ? "true" : "false");
}

std::string ListFlowRequest::getClusterId()const
{
	return clusterId_;
}

void ListFlowRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListFlowRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowRequest::getJobId()const
{
	return jobId_;
}

void ListFlowRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string ListFlowRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListFlowRequest::getName()const
{
	return name_;
}

void ListFlowRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListFlowRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowRequest::getId()const
{
	return id_;
}

void ListFlowRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ListFlowRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string ListFlowRequest::getStatus()const
{
	return status_;
}

void ListFlowRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

