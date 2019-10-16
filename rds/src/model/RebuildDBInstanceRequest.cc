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

#include <alibabacloud/rds/model/RebuildDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::RebuildDBInstanceRequest;

RebuildDBInstanceRequest::RebuildDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RebuildDBInstance")
{}

RebuildDBInstanceRequest::~RebuildDBInstanceRequest()
{}

long RebuildDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RebuildDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RebuildDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RebuildDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RebuildDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RebuildDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RebuildDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RebuildDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string RebuildDBInstanceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void RebuildDBInstanceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setCoreParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string RebuildDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RebuildDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RebuildDBInstanceRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void RebuildDBInstanceRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long RebuildDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RebuildDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

