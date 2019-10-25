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

#include <alibabacloud/polardb/model/DescribeDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterMigrationRequest;

DescribeDBClusterMigrationRequest::DescribeDBClusterMigrationRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterMigration")
{}

DescribeDBClusterMigrationRequest::~DescribeDBClusterMigrationRequest()
{}

long DescribeDBClusterMigrationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterMigrationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterMigrationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterMigrationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterMigrationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterMigrationRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterMigrationRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterMigrationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterMigrationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterMigrationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterMigrationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

