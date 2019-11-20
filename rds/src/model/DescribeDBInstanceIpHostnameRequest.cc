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

#include <alibabacloud/rds/model/DescribeDBInstanceIpHostnameRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceIpHostnameRequest;

DescribeDBInstanceIpHostnameRequest::DescribeDBInstanceIpHostnameRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceIpHostname")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceIpHostnameRequest::~DescribeDBInstanceIpHostnameRequest()
{}

long DescribeDBInstanceIpHostnameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceIpHostnameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceIpHostnameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceIpHostnameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstanceIpHostnameRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDBInstanceIpHostnameRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDBInstanceIpHostnameRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstanceIpHostnameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDBInstanceIpHostnameRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceIpHostnameRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstanceIpHostnameRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceIpHostnameRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceIpHostnameRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceIpHostnameRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstanceIpHostnameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceIpHostnameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

