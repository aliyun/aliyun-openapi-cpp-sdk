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

#include <alibabacloud/r-kvstore/model/UnlinkReplicaInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::UnlinkReplicaInstanceRequest;

UnlinkReplicaInstanceRequest::UnlinkReplicaInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "UnlinkReplicaInstance")
{}

UnlinkReplicaInstanceRequest::~UnlinkReplicaInstanceRequest()
{}

long UnlinkReplicaInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnlinkReplicaInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnlinkReplicaInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void UnlinkReplicaInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string UnlinkReplicaInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnlinkReplicaInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UnlinkReplicaInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnlinkReplicaInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnlinkReplicaInstanceRequest::getRegionId()const
{
	return regionId_;
}

void UnlinkReplicaInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnlinkReplicaInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnlinkReplicaInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UnlinkReplicaInstanceRequest::getReplicaId()const
{
	return replicaId_;
}

void UnlinkReplicaInstanceRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

long UnlinkReplicaInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void UnlinkReplicaInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnlinkReplicaInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnlinkReplicaInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

