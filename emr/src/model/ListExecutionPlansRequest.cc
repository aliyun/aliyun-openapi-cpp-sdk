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

#include <alibabacloud/emr/model/ListExecutionPlansRequest.h>

using AlibabaCloud::Emr::Model::ListExecutionPlansRequest;

ListExecutionPlansRequest::ListExecutionPlansRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListExecutionPlans")
{}

ListExecutionPlansRequest::~ListExecutionPlansRequest()
{}

std::string ListExecutionPlansRequest::getJobId()const
{
	return jobId_;
}

void ListExecutionPlansRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", std::to_string(jobId));
}

long ListExecutionPlansRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListExecutionPlansRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::vector<std::string> ListExecutionPlansRequest::getStatusList()const
{
	return statusList_;
}

void ListExecutionPlansRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int i = 0; i!= statusList.size(); i++)
		setCoreParameter("StatusList."+ std::to_string(i), std::to_string(statusList.at(i)));
}

std::string ListExecutionPlansRequest::getRegionId()const
{
	return regionId_;
}

void ListExecutionPlansRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int ListExecutionPlansRequest::getPageSize()const
{
	return pageSize_;
}

void ListExecutionPlansRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListExecutionPlansRequest::getQueryString()const
{
	return queryString_;
}

void ListExecutionPlansRequest::setQueryString(const std::string& queryString)
{
	queryString_ = queryString;
	setCoreParameter("QueryString", std::to_string(queryString));
}

std::string ListExecutionPlansRequest::getClusterId()const
{
	return clusterId_;
}

void ListExecutionPlansRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

bool ListExecutionPlansRequest::getIsDesc()const
{
	return isDesc_;
}

void ListExecutionPlansRequest::setIsDesc(bool isDesc)
{
	isDesc_ = isDesc;
	setCoreParameter("IsDesc", isDesc ? "true" : "false");
}

std::string ListExecutionPlansRequest::getStrategy()const
{
	return strategy_;
}

void ListExecutionPlansRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setCoreParameter("Strategy", std::to_string(strategy));
}

int ListExecutionPlansRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListExecutionPlansRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListExecutionPlansRequest::getQueryType()const
{
	return queryType_;
}

void ListExecutionPlansRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", std::to_string(queryType));
}

std::string ListExecutionPlansRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListExecutionPlansRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

