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
{
	setMethod(HttpRequest::Method::Post);
}

ListExecutionPlansRequest::~ListExecutionPlansRequest()
{}

long ListExecutionPlansRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListExecutionPlansRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListExecutionPlansRequest::getStatusList()const
{
	return statusList_;
}

void ListExecutionPlansRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

bool ListExecutionPlansRequest::getIsDesc()const
{
	return isDesc_;
}

void ListExecutionPlansRequest::setIsDesc(bool isDesc)
{
	isDesc_ = isDesc;
	setParameter("IsDesc", isDesc ? "true" : "false");
}

int ListExecutionPlansRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListExecutionPlansRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListExecutionPlansRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListExecutionPlansRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListExecutionPlansRequest::getJobId()const
{
	return jobId_;
}

void ListExecutionPlansRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string ListExecutionPlansRequest::getRegionId()const
{
	return regionId_;
}

void ListExecutionPlansRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListExecutionPlansRequest::getPageSize()const
{
	return pageSize_;
}

void ListExecutionPlansRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListExecutionPlansRequest::getQueryType()const
{
	return queryType_;
}

void ListExecutionPlansRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", queryType);
}

std::string ListExecutionPlansRequest::getQueryString()const
{
	return queryString_;
}

void ListExecutionPlansRequest::setQueryString(const std::string& queryString)
{
	queryString_ = queryString;
	setParameter("QueryString", queryString);
}

std::string ListExecutionPlansRequest::getClusterId()const
{
	return clusterId_;
}

void ListExecutionPlansRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListExecutionPlansRequest::getStrategy()const
{
	return strategy_;
}

void ListExecutionPlansRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setParameter("Strategy", strategy);
}

