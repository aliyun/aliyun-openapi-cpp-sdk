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

#include <alibabacloud/dds/model/DescribeDBInstanceAttributeRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstanceAttributeRequest;

DescribeDBInstanceAttributeRequest::DescribeDBInstanceAttributeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstanceAttribute")
{}

DescribeDBInstanceAttributeRequest::~DescribeDBInstanceAttributeRequest()
{}

long DescribeDBInstanceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstanceAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDBInstanceAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDBInstanceAttributeRequest::getEngine()const
{
	return engine_;
}

void DescribeDBInstanceAttributeRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string DescribeDBInstanceAttributeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceAttributeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstanceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstanceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

