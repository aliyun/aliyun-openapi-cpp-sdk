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

#include <alibabacloud/rds/model/DescribeDBInstanceUserRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceUserRequest;

DescribeDBInstanceUserRequest::DescribeDBInstanceUserRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceUser")
{}

DescribeDBInstanceUserRequest::~DescribeDBInstanceUserRequest()
{}

long DescribeDBInstanceUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceUserRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceUserRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceUserRequest::getConnectionString()const
{
	return connectionString_;
}

void DescribeDBInstanceUserRequest::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
	setParameter("ConnectionString", connectionString);
}

std::string DescribeDBInstanceUserRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceUserRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeDBInstanceUserRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceUserRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

