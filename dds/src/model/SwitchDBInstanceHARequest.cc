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

#include <alibabacloud/dds/model/SwitchDBInstanceHARequest.h>

using AlibabaCloud::Dds::Model::SwitchDBInstanceHARequest;

SwitchDBInstanceHARequest::SwitchDBInstanceHARequest() :
	RpcServiceRequest("dds", "2015-12-01", "SwitchDBInstanceHA")
{}

SwitchDBInstanceHARequest::~SwitchDBInstanceHARequest()
{}

long SwitchDBInstanceHARequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchDBInstanceHARequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SwitchDBInstanceHARequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchDBInstanceHARequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SwitchDBInstanceHARequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchDBInstanceHARequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SwitchDBInstanceHARequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchDBInstanceHARequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SwitchDBInstanceHARequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchDBInstanceHARequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int SwitchDBInstanceHARequest::getTargetInstanceId()const
{
	return targetInstanceId_;
}

void SwitchDBInstanceHARequest::setTargetInstanceId(int targetInstanceId)
{
	targetInstanceId_ = targetInstanceId;
	setCoreParameter("TargetInstanceId", std::to_string(targetInstanceId));
}

std::string SwitchDBInstanceHARequest::getRoleIds()const
{
	return roleIds_;
}

void SwitchDBInstanceHARequest::setRoleIds(const std::string& roleIds)
{
	roleIds_ = roleIds;
	setCoreParameter("RoleIds", roleIds);
}

std::string SwitchDBInstanceHARequest::getSecurityToken()const
{
	return securityToken_;
}

void SwitchDBInstanceHARequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SwitchDBInstanceHARequest::getRegionId()const
{
	return regionId_;
}

void SwitchDBInstanceHARequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int SwitchDBInstanceHARequest::getSwitchType()const
{
	return switchType_;
}

void SwitchDBInstanceHARequest::setSwitchType(int switchType)
{
	switchType_ = switchType;
	setCoreParameter("SwitchType", std::to_string(switchType));
}

std::string SwitchDBInstanceHARequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SwitchDBInstanceHARequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

int SwitchDBInstanceHARequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void SwitchDBInstanceHARequest::setSourceInstanceId(int sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setCoreParameter("SourceInstanceId", std::to_string(sourceInstanceId));
}

std::string SwitchDBInstanceHARequest::getNodeId()const
{
	return nodeId_;
}

void SwitchDBInstanceHARequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

