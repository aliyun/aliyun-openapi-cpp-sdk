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

#include <alibabacloud/rds/model/DescribeDBInstanceNetInfoRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceNetInfoRequest;

DescribeDBInstanceNetInfoRequest::DescribeDBInstanceNetInfoRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceNetInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceNetInfoRequest::~DescribeDBInstanceNetInfoRequest()
{}

long DescribeDBInstanceNetInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceNetInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeDBInstanceNetInfoRequest::getFlag()const
{
	return flag_;
}

void DescribeDBInstanceNetInfoRequest::setFlag(int flag)
{
	flag_ = flag;
	setParameter("Flag", std::to_string(flag));
}

std::string DescribeDBInstanceNetInfoRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeDBInstanceNetInfoRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeDBInstanceNetInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceNetInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstanceNetInfoRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceNetInfoRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstanceNetInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceNetInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceNetInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceNetInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstanceNetInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceNetInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceNetInfoRequest::getDBInstanceNetRWSplitType()const
{
	return dBInstanceNetRWSplitType_;
}

void DescribeDBInstanceNetInfoRequest::setDBInstanceNetRWSplitType(const std::string& dBInstanceNetRWSplitType)
{
	dBInstanceNetRWSplitType_ = dBInstanceNetRWSplitType;
	setParameter("DBInstanceNetRWSplitType", dBInstanceNetRWSplitType);
}

