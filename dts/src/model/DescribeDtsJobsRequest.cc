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

#include <alibabacloud/dts/model/DescribeDtsJobsRequest.h>

using AlibabaCloud::Dts::Model::DescribeDtsJobsRequest;

DescribeDtsJobsRequest::DescribeDtsJobsRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeDtsJobs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDtsJobsRequest::~DescribeDtsJobsRequest()
{}

std::string DescribeDtsJobsRequest::getOrderDirection()const
{
	return orderDirection_;
}

void DescribeDtsJobsRequest::setOrderDirection(const std::string& orderDirection)
{
	orderDirection_ = orderDirection;
	setParameter("OrderDirection", orderDirection);
}

std::string DescribeDtsJobsRequest::getType()const
{
	return type_;
}

void DescribeDtsJobsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeDtsJobsRequest::getParams()const
{
	return params_;
}

void DescribeDtsJobsRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string DescribeDtsJobsRequest::getJobType()const
{
	return jobType_;
}

void DescribeDtsJobsRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}

int DescribeDtsJobsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDtsJobsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDtsJobsRequest::getTags()const
{
	return tags_;
}

void DescribeDtsJobsRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DescribeDtsJobsRequest::getOrderColumn()const
{
	return orderColumn_;
}

void DescribeDtsJobsRequest::setOrderColumn(const std::string& orderColumn)
{
	orderColumn_ = orderColumn;
	setParameter("OrderColumn", orderColumn);
}

int DescribeDtsJobsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDtsJobsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDtsJobsRequest::getRegion()const
{
	return region_;
}

void DescribeDtsJobsRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string DescribeDtsJobsRequest::getStatus()const
{
	return status_;
}

void DescribeDtsJobsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

