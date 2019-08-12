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

#include <alibabacloud/emr/model/ListExecutionPlanInstancesRequest.h>

using AlibabaCloud::Emr::Model::ListExecutionPlanInstancesRequest;

ListExecutionPlanInstancesRequest::ListExecutionPlanInstancesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListExecutionPlanInstances")
{}

ListExecutionPlanInstancesRequest::~ListExecutionPlanInstancesRequest()
{}

bool ListExecutionPlanInstancesRequest::getOnlyLastInstance()const
{
	return onlyLastInstance_;
}

void ListExecutionPlanInstancesRequest::setOnlyLastInstance(bool onlyLastInstance)
{
	onlyLastInstance_ = onlyLastInstance;
	setCoreParameter("OnlyLastInstance", onlyLastInstance ? "true" : "false");
}

long ListExecutionPlanInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListExecutionPlanInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListExecutionPlanInstancesRequest::getExecutionPlanIdList()const
{
	return executionPlanIdList_;
}

void ListExecutionPlanInstancesRequest::setExecutionPlanIdList(const std::vector<std::string>& executionPlanIdList)
{
	executionPlanIdList_ = executionPlanIdList;
	for(int i = 0; i!= executionPlanIdList.size(); i++)
		setCoreParameter("ExecutionPlanIdList."+ std::to_string(i), executionPlanIdList.at(i));
}

std::vector<std::string> ListExecutionPlanInstancesRequest::getStatusList()const
{
	return statusList_;
}

void ListExecutionPlanInstancesRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int i = 0; i!= statusList.size(); i++)
		setCoreParameter("StatusList."+ std::to_string(i), statusList.at(i));
}

std::string ListExecutionPlanInstancesRequest::getRegionId()const
{
	return regionId_;
}

void ListExecutionPlanInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListExecutionPlanInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void ListExecutionPlanInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

bool ListExecutionPlanInstancesRequest::getIsDesc()const
{
	return isDesc_;
}

void ListExecutionPlanInstancesRequest::setIsDesc(bool isDesc)
{
	isDesc_ = isDesc;
	setCoreParameter("IsDesc", isDesc ? "true" : "false");
}

int ListExecutionPlanInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListExecutionPlanInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListExecutionPlanInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListExecutionPlanInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

