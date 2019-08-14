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

#include <alibabacloud/emr/model/ListJobsRequest.h>

using AlibabaCloud::Emr::Model::ListJobsRequest;

ListJobsRequest::ListJobsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListJobs")
{}

ListJobsRequest::~ListJobsRequest()
{}

long ListJobsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListJobsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListJobsRequest::getRegionId()const
{
	return regionId_;
}

void ListJobsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListJobsRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListJobsRequest::getQueryString()const
{
	return queryString_;
}

void ListJobsRequest::setQueryString(const std::string& queryString)
{
	queryString_ = queryString;
	setCoreParameter("QueryString", queryString);
}

bool ListJobsRequest::getIsDesc()const
{
	return isDesc_;
}

void ListJobsRequest::setIsDesc(bool isDesc)
{
	isDesc_ = isDesc;
	setCoreParameter("IsDesc", isDesc ? "true" : "false");
}

int ListJobsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListJobsRequest::getQueryType()const
{
	return queryType_;
}

void ListJobsRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", queryType);
}

std::string ListJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

