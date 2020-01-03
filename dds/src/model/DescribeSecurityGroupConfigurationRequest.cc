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

#include <alibabacloud/dds/model/DescribeSecurityGroupConfigurationRequest.h>

using AlibabaCloud::Dds::Model::DescribeSecurityGroupConfigurationRequest;

DescribeSecurityGroupConfigurationRequest::DescribeSecurityGroupConfigurationRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeSecurityGroupConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSecurityGroupConfigurationRequest::~DescribeSecurityGroupConfigurationRequest()
{}

long DescribeSecurityGroupConfigurationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSecurityGroupConfigurationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSecurityGroupConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSecurityGroupConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSecurityGroupConfigurationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSecurityGroupConfigurationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeSecurityGroupConfigurationRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSecurityGroupConfigurationRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSecurityGroupConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSecurityGroupConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSecurityGroupConfigurationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSecurityGroupConfigurationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeSecurityGroupConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSecurityGroupConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

