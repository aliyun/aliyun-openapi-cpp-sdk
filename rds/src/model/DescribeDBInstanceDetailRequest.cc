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

#include <alibabacloud/rds/model/DescribeDBInstanceDetailRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceDetailRequest;

DescribeDBInstanceDetailRequest::DescribeDBInstanceDetailRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceDetailRequest::~DescribeDBInstanceDetailRequest()
{}

long DescribeDBInstanceDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceDetailRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeDBInstanceDetailRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long DescribeDBInstanceDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstanceDetailRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceDetailRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

