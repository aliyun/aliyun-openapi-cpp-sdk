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

#include <alibabacloud/cassandra/model/DescribeParameterModificationHistoriesRequest.h>

using AlibabaCloud::Cassandra::Model::DescribeParameterModificationHistoriesRequest;

DescribeParameterModificationHistoriesRequest::DescribeParameterModificationHistoriesRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "DescribeParameterModificationHistories")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeParameterModificationHistoriesRequest::~DescribeParameterModificationHistoriesRequest()
{}

std::string DescribeParameterModificationHistoriesRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeParameterModificationHistoriesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int DescribeParameterModificationHistoriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeParameterModificationHistoriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeParameterModificationHistoriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeParameterModificationHistoriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

