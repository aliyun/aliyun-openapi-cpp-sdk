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

#include <alibabacloud/r-kvstore/model/CreateDedicatedInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateDedicatedInstanceRequest;

CreateDedicatedInstanceRequest::CreateDedicatedInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateDedicatedInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDedicatedInstanceRequest::~CreateDedicatedInstanceRequest()
{}

long CreateDedicatedInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDedicatedInstanceRequest::getNodeType()const
{
	return nodeType_;
}

void CreateDedicatedInstanceRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setParameter("NodeType", nodeType);
}

std::string CreateDedicatedInstanceRequest::getNetworkType()const
{
	return networkType_;
}

void CreateDedicatedInstanceRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string CreateDedicatedInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateDedicatedInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateDedicatedInstanceRequest::getInstanceClass()const
{
	return instanceClass_;
}

void CreateDedicatedInstanceRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setParameter("InstanceClass", instanceClass);
}

std::string CreateDedicatedInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDedicatedInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDedicatedInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDedicatedInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateDedicatedInstanceRequest::getPassword()const
{
	return password_;
}

void CreateDedicatedInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string CreateDedicatedInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateDedicatedInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateDedicatedInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDedicatedInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateDedicatedInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateDedicatedInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDedicatedInstanceRequest::getSrcDBInstanceId()const
{
	return srcDBInstanceId_;
}

void CreateDedicatedInstanceRequest::setSrcDBInstanceId(const std::string& srcDBInstanceId)
{
	srcDBInstanceId_ = srcDBInstanceId;
	setParameter("SrcDBInstanceId", srcDBInstanceId);
}

std::string CreateDedicatedInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDedicatedInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateDedicatedInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CreateDedicatedInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string CreateDedicatedInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateDedicatedInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long CreateDedicatedInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDedicatedInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDedicatedInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateDedicatedInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateDedicatedInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateDedicatedInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateDedicatedInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateDedicatedInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateDedicatedInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateDedicatedInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDedicatedInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDedicatedInstanceRequest::getConfig()const
{
	return config_;
}

void CreateDedicatedInstanceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setParameter("Config", config);
}

