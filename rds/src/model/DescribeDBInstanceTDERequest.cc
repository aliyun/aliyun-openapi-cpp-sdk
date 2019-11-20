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

#include <alibabacloud/rds/model/DescribeDBInstanceTDERequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceTDERequest;

DescribeDBInstanceTDERequest::DescribeDBInstanceTDERequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceTDE")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceTDERequest::~DescribeDBInstanceTDERequest()
{}

long DescribeDBInstanceTDERequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceTDERequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceTDERequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceTDERequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceTDERequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceTDERequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstanceTDERequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceTDERequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceTDERequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceTDERequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstanceTDERequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceTDERequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

