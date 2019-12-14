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

#include <alibabacloud/r-kvstore/model/DescribeAccountsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeAccountsRequest;

DescribeAccountsRequest::DescribeAccountsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeAccounts")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAccountsRequest::~DescribeAccountsRequest()
{}

long DescribeAccountsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAccountsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAccountsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAccountsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAccountsRequest::getAccountName()const
{
	return accountName_;
}

void DescribeAccountsRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string DescribeAccountsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAccountsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAccountsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAccountsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAccountsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAccountsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeAccountsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAccountsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAccountsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeAccountsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

