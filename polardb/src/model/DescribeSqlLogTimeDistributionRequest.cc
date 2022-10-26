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

#include <alibabacloud/polardb/model/DescribeSqlLogTimeDistributionRequest.h>

using AlibabaCloud::Polardb::Model::DescribeSqlLogTimeDistributionRequest;

DescribeSqlLogTimeDistributionRequest::DescribeSqlLogTimeDistributionRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeSqlLogTimeDistribution")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSqlLogTimeDistributionRequest::~DescribeSqlLogTimeDistributionRequest()
{}

long DescribeSqlLogTimeDistributionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSqlLogTimeDistributionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSqlLogTimeDistributionRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSqlLogTimeDistributionRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeSqlLogTimeDistributionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSqlLogTimeDistributionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSqlLogTimeDistributionRequest::getJobId()const
{
	return jobId_;
}

void DescribeSqlLogTimeDistributionRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string DescribeSqlLogTimeDistributionRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSqlLogTimeDistributionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSqlLogTimeDistributionRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSqlLogTimeDistributionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSqlLogTimeDistributionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSqlLogTimeDistributionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSqlLogTimeDistributionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSqlLogTimeDistributionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSqlLogTimeDistributionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSqlLogTimeDistributionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSqlLogTimeDistributionRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSqlLogTimeDistributionRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeSqlLogTimeDistributionRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSqlLogTimeDistributionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSqlLogTimeDistributionRequest::getChildDBInstanceIDs()const
{
	return childDBInstanceIDs_;
}

void DescribeSqlLogTimeDistributionRequest::setChildDBInstanceIDs(const std::string& childDBInstanceIDs)
{
	childDBInstanceIDs_ = childDBInstanceIDs;
	setParameter("ChildDBInstanceIDs", childDBInstanceIDs);
}

std::string DescribeSqlLogTimeDistributionRequest::getTimeLevel()const
{
	return timeLevel_;
}

void DescribeSqlLogTimeDistributionRequest::setTimeLevel(const std::string& timeLevel)
{
	timeLevel_ = timeLevel;
	setParameter("TimeLevel", timeLevel);
}

