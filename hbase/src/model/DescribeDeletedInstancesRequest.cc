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

#include <alibabacloud/hbase/model/DescribeDeletedInstancesRequest.h>

using AlibabaCloud::HBase::Model::DescribeDeletedInstancesRequest;

DescribeDeletedInstancesRequest::DescribeDeletedInstancesRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DescribeDeletedInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDeletedInstancesRequest::~DescribeDeletedInstancesRequest()
{}

int DescribeDeletedInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDeletedInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDeletedInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDeletedInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDeletedInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDeletedInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

