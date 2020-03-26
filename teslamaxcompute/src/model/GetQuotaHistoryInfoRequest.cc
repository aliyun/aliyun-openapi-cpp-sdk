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

#include <alibabacloud/teslamaxcompute/model/GetQuotaHistoryInfoRequest.h>

using AlibabaCloud::TeslaMaxCompute::Model::GetQuotaHistoryInfoRequest;

GetQuotaHistoryInfoRequest::GetQuotaHistoryInfoRequest() :
	RpcServiceRequest("teslamaxcompute", "2018-01-04", "GetQuotaHistoryInfo")
{
	setMethod(HttpRequest::Method::Get);
}

GetQuotaHistoryInfoRequest::~GetQuotaHistoryInfoRequest()
{}

std::string GetQuotaHistoryInfoRequest::getCluster()const
{
	return cluster_;
}

void GetQuotaHistoryInfoRequest::setCluster(const std::string& cluster)
{
	cluster_ = cluster;
	setParameter("Cluster", cluster);
}

int GetQuotaHistoryInfoRequest::getEndTime()const
{
	return endTime_;
}

void GetQuotaHistoryInfoRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int GetQuotaHistoryInfoRequest::getStartTime()const
{
	return startTime_;
}

void GetQuotaHistoryInfoRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string GetQuotaHistoryInfoRequest::getRegion()const
{
	return region_;
}

void GetQuotaHistoryInfoRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetQuotaHistoryInfoRequest::getQuotaName()const
{
	return quotaName_;
}

void GetQuotaHistoryInfoRequest::setQuotaName(const std::string& quotaName)
{
	quotaName_ = quotaName;
	setParameter("QuotaName", quotaName);
}

