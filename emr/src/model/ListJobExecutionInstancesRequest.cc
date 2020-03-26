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

#include <alibabacloud/emr/model/ListJobExecutionInstancesRequest.h>

using AlibabaCloud::Emr::Model::ListJobExecutionInstancesRequest;

ListJobExecutionInstancesRequest::ListJobExecutionInstancesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListJobExecutionInstances")
{
	setMethod(HttpRequest::Method::Post);
}

ListJobExecutionInstancesRequest::~ListJobExecutionInstancesRequest()
{}

long ListJobExecutionInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListJobExecutionInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ListJobExecutionInstancesRequest::getIsDesc()const
{
	return isDesc_;
}

void ListJobExecutionInstancesRequest::setIsDesc(bool isDesc)
{
	isDesc_ = isDesc;
	setParameter("IsDesc", isDesc ? "true" : "false");
}

int ListJobExecutionInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobExecutionInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListJobExecutionInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListJobExecutionInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListJobExecutionInstancesRequest::getExecutionPlanInstanceId()const
{
	return executionPlanInstanceId_;
}

void ListJobExecutionInstancesRequest::setExecutionPlanInstanceId(const std::string& executionPlanInstanceId)
{
	executionPlanInstanceId_ = executionPlanInstanceId;
	setParameter("ExecutionPlanInstanceId", executionPlanInstanceId);
}

std::string ListJobExecutionInstancesRequest::getRegionId()const
{
	return regionId_;
}

void ListJobExecutionInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListJobExecutionInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobExecutionInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

