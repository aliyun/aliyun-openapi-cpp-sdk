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

#include <alibabacloud/teslamaxcompute/model/GetClusterInstanceRequest.h>

using AlibabaCloud::TeslaMaxCompute::Model::GetClusterInstanceRequest;

GetClusterInstanceRequest::GetClusterInstanceRequest() :
	RpcServiceRequest("teslamaxcompute", "2018-01-04", "GetClusterInstance")
{
	setMethod(HttpRequest::Method::Get);
}

GetClusterInstanceRequest::~GetClusterInstanceRequest()
{}

std::string GetClusterInstanceRequest::getCluster()const
{
	return cluster_;
}

void GetClusterInstanceRequest::setCluster(const std::string& cluster)
{
	cluster_ = cluster;
	setParameter("Cluster", cluster);
}

int GetClusterInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void GetClusterInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int GetClusterInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void GetClusterInstanceRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string GetClusterInstanceRequest::getRegion()const
{
	return region_;
}

void GetClusterInstanceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetClusterInstanceRequest::getStatus()const
{
	return status_;
}

void GetClusterInstanceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

