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

#include <alibabacloud/dds/model/DescribeDBInstanceSSLRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstanceSSLRequest;

DescribeDBInstanceSSLRequest::DescribeDBInstanceSSLRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstanceSSL")
{}

DescribeDBInstanceSSLRequest::~DescribeDBInstanceSSLRequest()
{}

long DescribeDBInstanceSSLRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceSSLRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceSSLRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceSSLRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstanceSSLRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDBInstanceSSLRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDBInstanceSSLRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceSSLRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstanceSSLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceSSLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceSSLRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceSSLRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstanceSSLRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceSSLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

