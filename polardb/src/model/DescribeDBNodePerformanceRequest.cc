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

#include <alibabacloud/polardb/model/DescribeDBNodePerformanceRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBNodePerformanceRequest;

DescribeDBNodePerformanceRequest::DescribeDBNodePerformanceRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBNodePerformance")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBNodePerformanceRequest::~DescribeDBNodePerformanceRequest()
{}

long DescribeDBNodePerformanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBNodePerformanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBNodePerformanceRequest::getDBNodeId()const
{
	return dBNodeId_;
}

void DescribeDBNodePerformanceRequest::setDBNodeId(const std::string& dBNodeId)
{
	dBNodeId_ = dBNodeId;
	setCoreParameter("DBNodeId", dBNodeId);
}

std::string DescribeDBNodePerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDBNodePerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDBNodePerformanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBNodePerformanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBNodePerformanceRequest::getKey()const
{
	return key_;
}

void DescribeDBNodePerformanceRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}

std::string DescribeDBNodePerformanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBNodePerformanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBNodePerformanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBNodePerformanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDBNodePerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDBNodePerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDBNodePerformanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBNodePerformanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBNodePerformanceRequest::getMetric()const
{
	return metric_;
}

void DescribeDBNodePerformanceRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setCoreParameter("Metric", metric);
}

