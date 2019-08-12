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

#include <alibabacloud/rds/model/DescribeReadDBInstanceDelayRequest.h>

using AlibabaCloud::Rds::Model::DescribeReadDBInstanceDelayRequest;

DescribeReadDBInstanceDelayRequest::DescribeReadDBInstanceDelayRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeReadDBInstanceDelay")
{}

DescribeReadDBInstanceDelayRequest::~DescribeReadDBInstanceDelayRequest()
{}

long DescribeReadDBInstanceDelayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReadDBInstanceDelayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeReadDBInstanceDelayRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReadDBInstanceDelayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeReadDBInstanceDelayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReadDBInstanceDelayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeReadDBInstanceDelayRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReadDBInstanceDelayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeReadDBInstanceDelayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReadDBInstanceDelayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeReadDBInstanceDelayRequest::getReadInstanceId()const
{
	return readInstanceId_;
}

void DescribeReadDBInstanceDelayRequest::setReadInstanceId(const std::string& readInstanceId)
{
	readInstanceId_ = readInstanceId;
	setCoreParameter("ReadInstanceId", std::to_string(readInstanceId));
}

std::string DescribeReadDBInstanceDelayRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeReadDBInstanceDelayRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long DescribeReadDBInstanceDelayRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReadDBInstanceDelayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeReadDBInstanceDelayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReadDBInstanceDelayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

