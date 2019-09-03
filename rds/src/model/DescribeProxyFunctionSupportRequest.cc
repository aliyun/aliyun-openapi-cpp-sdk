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

#include <alibabacloud/rds/model/DescribeProxyFunctionSupportRequest.h>

using AlibabaCloud::Rds::Model::DescribeProxyFunctionSupportRequest;

DescribeProxyFunctionSupportRequest::DescribeProxyFunctionSupportRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeProxyFunctionSupport")
{}

DescribeProxyFunctionSupportRequest::~DescribeProxyFunctionSupportRequest()
{}

long DescribeProxyFunctionSupportRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeProxyFunctionSupportRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeProxyFunctionSupportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeProxyFunctionSupportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeProxyFunctionSupportRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeProxyFunctionSupportRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeProxyFunctionSupportRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeProxyFunctionSupportRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeProxyFunctionSupportRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeProxyFunctionSupportRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeProxyFunctionSupportRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeProxyFunctionSupportRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeProxyFunctionSupportRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeProxyFunctionSupportRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

