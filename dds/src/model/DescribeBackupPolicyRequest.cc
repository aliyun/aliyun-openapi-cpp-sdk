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

#include <alibabacloud/dds/model/DescribeBackupPolicyRequest.h>

using AlibabaCloud::Dds::Model::DescribeBackupPolicyRequest;

DescribeBackupPolicyRequest::DescribeBackupPolicyRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeBackupPolicy")
{}

DescribeBackupPolicyRequest::~DescribeBackupPolicyRequest()
{}

long DescribeBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBackupPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupPolicyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBackupPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeBackupPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBackupPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBackupPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeBackupPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DescribeBackupPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

