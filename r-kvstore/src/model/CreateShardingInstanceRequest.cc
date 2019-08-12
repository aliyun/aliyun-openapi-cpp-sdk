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

#include <alibabacloud/r-kvstore/model/CreateShardingInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateShardingInstanceRequest;

CreateShardingInstanceRequest::CreateShardingInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateShardingInstance")
{}

CreateShardingInstanceRequest::~CreateShardingInstanceRequest()
{}

int CreateShardingInstanceRequest::getShardStorageQuantity()const
{
	return shardStorageQuantity_;
}

void CreateShardingInstanceRequest::setShardStorageQuantity(int shardStorageQuantity)
{
	shardStorageQuantity_ = shardStorageQuantity;
	setCoreParameter("ShardStorageQuantity", shardStorageQuantity);
}

long CreateShardingInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateShardingInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateShardingInstanceRequest::getNodeType()const
{
	return nodeType_;
}

void CreateShardingInstanceRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", nodeType);
}

std::string CreateShardingInstanceRequest::getCouponNo()const
{
	return couponNo_;
}

void CreateShardingInstanceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

std::string CreateShardingInstanceRequest::getNetworkType()const
{
	return networkType_;
}

void CreateShardingInstanceRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

std::string CreateShardingInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateShardingInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string CreateShardingInstanceRequest::getInstanceClass()const
{
	return instanceClass_;
}

void CreateShardingInstanceRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", instanceClass);
}

std::string CreateShardingInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateShardingInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long CreateShardingInstanceRequest::getCapacity()const
{
	return capacity_;
}

void CreateShardingInstanceRequest::setCapacity(long capacity)
{
	capacity_ = capacity;
	setCoreParameter("Capacity", capacity);
}

std::string CreateShardingInstanceRequest::getPassword()const
{
	return password_;
}

void CreateShardingInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string CreateShardingInstanceRequest::getShardReplicaClass()const
{
	return shardReplicaClass_;
}

void CreateShardingInstanceRequest::setShardReplicaClass(const std::string& shardReplicaClass)
{
	shardReplicaClass_ = shardReplicaClass;
	setCoreParameter("ShardReplicaClass", shardReplicaClass);
}

std::string CreateShardingInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateShardingInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateShardingInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateShardingInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateShardingInstanceRequest::getIncrementalBackupMode()const
{
	return incrementalBackupMode_;
}

void CreateShardingInstanceRequest::setIncrementalBackupMode(const std::string& incrementalBackupMode)
{
	incrementalBackupMode_ = incrementalBackupMode;
	setCoreParameter("IncrementalBackupMode", incrementalBackupMode);
}

std::string CreateShardingInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateShardingInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string CreateShardingInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateShardingInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

std::string CreateShardingInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateShardingInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateShardingInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateShardingInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateShardingInstanceRequest::getSrcDBInstanceId()const
{
	return srcDBInstanceId_;
}

void CreateShardingInstanceRequest::setSrcDBInstanceId(const std::string& srcDBInstanceId)
{
	srcDBInstanceId_ = srcDBInstanceId;
	setCoreParameter("SrcDBInstanceId", srcDBInstanceId);
}

std::string CreateShardingInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateShardingInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateShardingInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CreateShardingInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

long CreateShardingInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateShardingInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateShardingInstanceRequest::getToken()const
{
	return token_;
}

void CreateShardingInstanceRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", token);
}

int CreateShardingInstanceRequest::getShardQuantity()const
{
	return shardQuantity_;
}

void CreateShardingInstanceRequest::setShardQuantity(int shardQuantity)
{
	shardQuantity_ = shardQuantity;
	setCoreParameter("ShardQuantity", shardQuantity);
}

std::string CreateShardingInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateShardingInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateShardingInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateShardingInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateShardingInstanceRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateShardingInstanceRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setCoreParameter("SecurityIPList", securityIPList);
}

std::string CreateShardingInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateShardingInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

int CreateShardingInstanceRequest::getShardReplicaQuantity()const
{
	return shardReplicaQuantity_;
}

void CreateShardingInstanceRequest::setShardReplicaQuantity(int shardReplicaQuantity)
{
	shardReplicaQuantity_ = shardReplicaQuantity;
	setCoreParameter("ShardReplicaQuantity", shardReplicaQuantity);
}

std::string CreateShardingInstanceRequest::getArchitectureType()const
{
	return architectureType_;
}

void CreateShardingInstanceRequest::setArchitectureType(const std::string& architectureType)
{
	architectureType_ = architectureType;
	setCoreParameter("ArchitectureType", architectureType);
}

std::string CreateShardingInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateShardingInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateShardingInstanceRequest::getRedisManagerClass()const
{
	return redisManagerClass_;
}

void CreateShardingInstanceRequest::setRedisManagerClass(const std::string& redisManagerClass)
{
	redisManagerClass_ = redisManagerClass;
	setCoreParameter("RedisManagerClass", redisManagerClass);
}

std::string CreateShardingInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateShardingInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateShardingInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void CreateShardingInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

int CreateShardingInstanceRequest::getProxyQuantity()const
{
	return proxyQuantity_;
}

void CreateShardingInstanceRequest::setProxyQuantity(int proxyQuantity)
{
	proxyQuantity_ = proxyQuantity;
	setCoreParameter("ProxyQuantity", proxyQuantity);
}

std::string CreateShardingInstanceRequest::getConfig()const
{
	return config_;
}

void CreateShardingInstanceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

std::string CreateShardingInstanceRequest::getProxyMode()const
{
	return proxyMode_;
}

void CreateShardingInstanceRequest::setProxyMode(const std::string& proxyMode)
{
	proxyMode_ = proxyMode;
	setCoreParameter("ProxyMode", proxyMode);
}

