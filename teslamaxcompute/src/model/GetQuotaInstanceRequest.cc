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

#include <alibabacloud/teslamaxcompute/model/GetQuotaInstanceRequest.h>

using AlibabaCloud::TeslaMaxCompute::Model::GetQuotaInstanceRequest;

GetQuotaInstanceRequest::GetQuotaInstanceRequest() :
	RpcServiceRequest("teslamaxcompute", "2018-01-04", "GetQuotaInstance")
{
	setMethod(HttpRequest::Method::Get);
}

GetQuotaInstanceRequest::~GetQuotaInstanceRequest()
{}

std::string GetQuotaInstanceRequest::getCluster()const
{
	return cluster_;
}

void GetQuotaInstanceRequest::setCluster(const std::string& cluster)
{
	cluster_ = cluster;
	setParameter("Cluster", cluster);
}

int GetQuotaInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void GetQuotaInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetQuotaInstanceRequest::getQuotaId()const
{
	return quotaId_;
}

void GetQuotaInstanceRequest::setQuotaId(const std::string& quotaId)
{
	quotaId_ = quotaId;
	setParameter("QuotaId", quotaId);
}

int GetQuotaInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void GetQuotaInstanceRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string GetQuotaInstanceRequest::getRegion()const
{
	return region_;
}

void GetQuotaInstanceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetQuotaInstanceRequest::getQuotaName()const
{
	return quotaName_;
}

void GetQuotaInstanceRequest::setQuotaName(const std::string& quotaName)
{
	quotaName_ = quotaName;
	setParameter("QuotaName", quotaName);
}

std::string GetQuotaInstanceRequest::getStatus()const
{
	return status_;
}

void GetQuotaInstanceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

