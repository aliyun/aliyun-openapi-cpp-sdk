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

#include <alibabacloud/dds/model/UpgradeDBInstanceKernelVersionRequest.h>

using AlibabaCloud::Dds::Model::UpgradeDBInstanceKernelVersionRequest;

UpgradeDBInstanceKernelVersionRequest::UpgradeDBInstanceKernelVersionRequest() :
	RpcServiceRequest("dds", "2015-12-01", "UpgradeDBInstanceKernelVersion")
{}

UpgradeDBInstanceKernelVersionRequest::~UpgradeDBInstanceKernelVersionRequest()
{}

long UpgradeDBInstanceKernelVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeDBInstanceKernelVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceKernelVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpgradeDBInstanceKernelVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UpgradeDBInstanceKernelVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeDBInstanceKernelVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeDBInstanceKernelVersionRequest::getRegionId()const
{
	return regionId_;
}

void UpgradeDBInstanceKernelVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpgradeDBInstanceKernelVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpgradeDBInstanceKernelVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UpgradeDBInstanceKernelVersionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void UpgradeDBInstanceKernelVersionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long UpgradeDBInstanceKernelVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBInstanceKernelVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBInstanceKernelVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBInstanceKernelVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

