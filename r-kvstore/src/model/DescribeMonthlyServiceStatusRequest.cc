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

#include <alibabacloud/r-kvstore/model/DescribeMonthlyServiceStatusRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeMonthlyServiceStatusRequest;

DescribeMonthlyServiceStatusRequest::DescribeMonthlyServiceStatusRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeMonthlyServiceStatus")
{}

DescribeMonthlyServiceStatusRequest::~DescribeMonthlyServiceStatusRequest()
{}

long DescribeMonthlyServiceStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMonthlyServiceStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMonthlyServiceStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMonthlyServiceStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeMonthlyServiceStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeMonthlyServiceStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeMonthlyServiceStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMonthlyServiceStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMonthlyServiceStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMonthlyServiceStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeMonthlyServiceStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMonthlyServiceStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeMonthlyServiceStatusRequest::getMonth()const
{
	return month_;
}

void DescribeMonthlyServiceStatusRequest::setMonth(const std::string& month)
{
	month_ = month;
	setCoreParameter("Month", month);
}

std::string DescribeMonthlyServiceStatusRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeMonthlyServiceStatusRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

