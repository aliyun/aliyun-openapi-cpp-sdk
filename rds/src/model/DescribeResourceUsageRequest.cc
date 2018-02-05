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

#include <alibabacloud/rds/model/DescribeResourceUsageRequest.h>

using AlibabaCloud::Rds::Model::DescribeResourceUsageRequest;

DescribeResourceUsageRequest::DescribeResourceUsageRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeResourceUsage")
{}

DescribeResourceUsageRequest::~DescribeResourceUsageRequest()
{}

long DescribeResourceUsageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeResourceUsageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeResourceUsageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeResourceUsageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeResourceUsageRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeResourceUsageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeResourceUsageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeResourceUsageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeResourceUsageRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeResourceUsageRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeResourceUsageRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeResourceUsageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeResourceUsageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeResourceUsageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

