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

#include <alibabacloud/polardb/model/DescribeDBProxyPerformanceRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBProxyPerformanceRequest;

DescribeDBProxyPerformanceRequest::DescribeDBProxyPerformanceRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBProxyPerformance")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBProxyPerformanceRequest::~DescribeDBProxyPerformanceRequest()
{}

long DescribeDBProxyPerformanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBProxyPerformanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBProxyPerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDBProxyPerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDBProxyPerformanceRequest::getKey()const
{
	return key_;
}

void DescribeDBProxyPerformanceRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

std::string DescribeDBProxyPerformanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBProxyPerformanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBProxyPerformanceRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBProxyPerformanceRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBProxyPerformanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBProxyPerformanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDBProxyPerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDBProxyPerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDBProxyPerformanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBProxyPerformanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBProxyPerformanceRequest::getMetric()const
{
	return metric_;
}

void DescribeDBProxyPerformanceRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

