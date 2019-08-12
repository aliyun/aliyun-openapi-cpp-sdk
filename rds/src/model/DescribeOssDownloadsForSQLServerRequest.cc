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

#include <alibabacloud/rds/model/DescribeOssDownloadsForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::DescribeOssDownloadsForSQLServerRequest;

DescribeOssDownloadsForSQLServerRequest::DescribeOssDownloadsForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeOssDownloadsForSQLServer")
{}

DescribeOssDownloadsForSQLServerRequest::~DescribeOssDownloadsForSQLServerRequest()
{}

long DescribeOssDownloadsForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeOssDownloadsForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeOssDownloadsForSQLServerRequest::getMigrateTaskId()const
{
	return migrateTaskId_;
}

void DescribeOssDownloadsForSQLServerRequest::setMigrateTaskId(const std::string& migrateTaskId)
{
	migrateTaskId_ = migrateTaskId;
	setCoreParameter("MigrateTaskId", migrateTaskId);
}

std::string DescribeOssDownloadsForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeOssDownloadsForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeOssDownloadsForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeOssDownloadsForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DescribeOssDownloadsForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeOssDownloadsForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeOssDownloadsForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeOssDownloadsForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

