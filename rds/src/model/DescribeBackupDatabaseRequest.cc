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

#include <alibabacloud/rds/model/DescribeBackupDatabaseRequest.h>

using AlibabaCloud::Rds::Model::DescribeBackupDatabaseRequest;

DescribeBackupDatabaseRequest::DescribeBackupDatabaseRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeBackupDatabase")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBackupDatabaseRequest::~DescribeBackupDatabaseRequest()
{}

long DescribeBackupDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupDatabaseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupDatabaseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupDatabaseRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupDatabaseRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

long DescribeBackupDatabaseRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupDatabaseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBackupDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBackupDatabaseRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeBackupDatabaseRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

