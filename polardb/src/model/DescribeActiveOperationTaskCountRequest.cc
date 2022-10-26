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

#include <alibabacloud/polardb/model/DescribeActiveOperationTaskCountRequest.h>

using AlibabaCloud::Polardb::Model::DescribeActiveOperationTaskCountRequest;

DescribeActiveOperationTaskCountRequest::DescribeActiveOperationTaskCountRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeActiveOperationTaskCount")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeActiveOperationTaskCountRequest::~DescribeActiveOperationTaskCountRequest()
{}

long DescribeActiveOperationTaskCountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeActiveOperationTaskCountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeActiveOperationTaskCountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeActiveOperationTaskCountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeActiveOperationTaskCountRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeActiveOperationTaskCountRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeActiveOperationTaskCountRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeActiveOperationTaskCountRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeActiveOperationTaskCountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeActiveOperationTaskCountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeActiveOperationTaskCountRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeActiveOperationTaskCountRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeActiveOperationTaskCountRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeActiveOperationTaskCountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

