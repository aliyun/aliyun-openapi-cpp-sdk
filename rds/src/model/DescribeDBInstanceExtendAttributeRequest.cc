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

#include <alibabacloud/rds/model/DescribeDBInstanceExtendAttributeRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceExtendAttributeRequest;

DescribeDBInstanceExtendAttributeRequest::DescribeDBInstanceExtendAttributeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceExtendAttribute")
{}

DescribeDBInstanceExtendAttributeRequest::~DescribeDBInstanceExtendAttributeRequest()
{}

long DescribeDBInstanceExtendAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceExtendAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceExtendAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceExtendAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceExtendAttributeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceExtendAttributeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeDBInstanceExtendAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceExtendAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceExtendAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceExtendAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

