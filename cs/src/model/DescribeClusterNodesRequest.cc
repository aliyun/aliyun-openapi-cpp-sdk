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

#include <alibabacloud/cs/model/DescribeClusterNodesRequest.h>

using AlibabaCloud::CS::Model::DescribeClusterNodesRequest;

DescribeClusterNodesRequest::DescribeClusterNodesRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]/nodes");
	setMethod(HttpRequest::Method::Get);
}

DescribeClusterNodesRequest::~DescribeClusterNodesRequest()
{}

std::string DescribeClusterNodesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeClusterNodesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeClusterNodesRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeClusterNodesRequest::getState()const
{
	return state_;
}

void DescribeClusterNodesRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::string DescribeClusterNodesRequest::getNodepool_id()const
{
	return nodepool_id_;
}

void DescribeClusterNodesRequest::setNodepool_id(const std::string& nodepool_id)
{
	nodepool_id_ = nodepool_id;
	setParameter("Nodepool_id", nodepool_id);
}

std::string DescribeClusterNodesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeClusterNodesRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

