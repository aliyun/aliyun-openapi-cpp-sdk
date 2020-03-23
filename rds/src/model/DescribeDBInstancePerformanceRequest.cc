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

#include <alibabacloud/rds/model/DescribeDBInstancePerformanceRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancePerformanceRequest;

DescribeDBInstancePerformanceRequest::DescribeDBInstancePerformanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstancePerformance")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancePerformanceRequest::~DescribeDBInstancePerformanceRequest()
{}

long DescribeDBInstancePerformanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstancePerformanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstancePerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDBInstancePerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDBInstancePerformanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstancePerformanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstancePerformanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstancePerformanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstancePerformanceRequest::getKey()const
{
	return key_;
}

void DescribeDBInstancePerformanceRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

std::string DescribeDBInstancePerformanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstancePerformanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstancePerformanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstancePerformanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDBInstancePerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDBInstancePerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDBInstancePerformanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstancePerformanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeDBInstancePerformanceRequest::getUseNullWhenMissingPoint()const
{
	return useNullWhenMissingPoint_;
}

void DescribeDBInstancePerformanceRequest::setUseNullWhenMissingPoint(bool useNullWhenMissingPoint)
{
	useNullWhenMissingPoint_ = useNullWhenMissingPoint;
	setParameter("UseNullWhenMissingPoint", useNullWhenMissingPoint ? "true" : "false");
}

