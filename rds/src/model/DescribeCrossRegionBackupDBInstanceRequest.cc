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

#include <alibabacloud/rds/model/DescribeCrossRegionBackupDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::DescribeCrossRegionBackupDBInstanceRequest;

DescribeCrossRegionBackupDBInstanceRequest::DescribeCrossRegionBackupDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeCrossRegionBackupDBInstance")
{}

DescribeCrossRegionBackupDBInstanceRequest::~DescribeCrossRegionBackupDBInstanceRequest()
{}

long DescribeCrossRegionBackupDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeCrossRegionBackupDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeCrossRegionBackupDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int DescribeCrossRegionBackupDBInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeCrossRegionBackupDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long DescribeCrossRegionBackupDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeCrossRegionBackupDBInstanceRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeCrossRegionBackupDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCrossRegionBackupDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

