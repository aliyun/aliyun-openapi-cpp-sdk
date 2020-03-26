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

#include <alibabacloud/teslamaxcompute/model/GetInstancesStatusCountRequest.h>

using AlibabaCloud::TeslaMaxCompute::Model::GetInstancesStatusCountRequest;

GetInstancesStatusCountRequest::GetInstancesStatusCountRequest() :
	RpcServiceRequest("teslamaxcompute", "2018-01-04", "GetInstancesStatusCount")
{
	setMethod(HttpRequest::Method::Get);
}

GetInstancesStatusCountRequest::~GetInstancesStatusCountRequest()
{}

std::string GetInstancesStatusCountRequest::getCluster()const
{
	return cluster_;
}

void GetInstancesStatusCountRequest::setCluster(const std::string& cluster)
{
	cluster_ = cluster;
	setParameter("Cluster", cluster);
}

std::string GetInstancesStatusCountRequest::getQuotaId()const
{
	return quotaId_;
}

void GetInstancesStatusCountRequest::setQuotaId(const std::string& quotaId)
{
	quotaId_ = quotaId;
	setParameter("QuotaId", quotaId);
}

std::string GetInstancesStatusCountRequest::getRegion()const
{
	return region_;
}

void GetInstancesStatusCountRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetInstancesStatusCountRequest::getQuotaName()const
{
	return quotaName_;
}

void GetInstancesStatusCountRequest::setQuotaName(const std::string& quotaName)
{
	quotaName_ = quotaName;
	setParameter("QuotaName", quotaName);
}

