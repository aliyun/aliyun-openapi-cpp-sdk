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

#include <alibabacloud/cassandra/model/DescribeDeletedClustersRequest.h>

using AlibabaCloud::Cassandra::Model::DescribeDeletedClustersRequest;

DescribeDeletedClustersRequest::DescribeDeletedClustersRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "DescribeDeletedClusters")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDeletedClustersRequest::~DescribeDeletedClustersRequest()
{}

int DescribeDeletedClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDeletedClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDeletedClustersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDeletedClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDeletedClustersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDeletedClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

