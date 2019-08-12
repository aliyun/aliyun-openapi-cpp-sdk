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

#include <alibabacloud/r-kvstore/model/DescribeMonthlyServiceStatusDetailRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeMonthlyServiceStatusDetailRequest;

DescribeMonthlyServiceStatusDetailRequest::DescribeMonthlyServiceStatusDetailRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeMonthlyServiceStatusDetail")
{}

DescribeMonthlyServiceStatusDetailRequest::~DescribeMonthlyServiceStatusDetailRequest()
{}

long DescribeMonthlyServiceStatusDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMonthlyServiceStatusDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeMonthlyServiceStatusDetailRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeMonthlyServiceStatusDetailRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeMonthlyServiceStatusDetailRequest::getMonth()const
{
	return month_;
}

void DescribeMonthlyServiceStatusDetailRequest::setMonth(const std::string& month)
{
	month_ = month;
	setCoreParameter("Month", month);
}

std::string DescribeMonthlyServiceStatusDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeMonthlyServiceStatusDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeMonthlyServiceStatusDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMonthlyServiceStatusDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMonthlyServiceStatusDetailRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMonthlyServiceStatusDetailRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeMonthlyServiceStatusDetailRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMonthlyServiceStatusDetailRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeMonthlyServiceStatusDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMonthlyServiceStatusDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeMonthlyServiceStatusDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMonthlyServiceStatusDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

