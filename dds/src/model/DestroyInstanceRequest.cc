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

#include <alibabacloud/dds/model/DestroyInstanceRequest.h>

using AlibabaCloud::Dds::Model::DestroyInstanceRequest;

DestroyInstanceRequest::DestroyInstanceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DestroyInstance")
{}

DestroyInstanceRequest::~DestroyInstanceRequest()
{}

long DestroyInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DestroyInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DestroyInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DestroyInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DestroyInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DestroyInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DestroyInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DestroyInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DestroyInstanceRequest::getRegionId()const
{
	return regionId_;
}

void DestroyInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DestroyInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void DestroyInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DestroyInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DestroyInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DestroyInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DestroyInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DestroyInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DestroyInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DestroyInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DestroyInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

