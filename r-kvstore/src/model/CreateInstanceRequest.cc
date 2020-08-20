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

#include <alibabacloud/r-kvstore/model/CreateInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest()
{}

long CreateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateInstanceRequest::getCouponNo()const
{
	return couponNo_;
}

void CreateInstanceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string CreateInstanceRequest::getNetworkType()const
{
	return networkType_;
}

void CreateInstanceRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string CreateInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateInstanceRequest::getPassword()const
{
	return password_;
}

void CreateInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string CreateInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

int CreateInstanceRequest::getShardCount()const
{
	return shardCount_;
}

void CreateInstanceRequest::setShardCount(int shardCount)
{
	shardCount_ = shardCount;
	setParameter("ShardCount", std::to_string(shardCount));
}

std::string CreateInstanceRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(const std::string& autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", autoRenewPeriod);
}

std::string CreateInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CreateInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CreateInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

long CreateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

std::string CreateInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateInstanceRequest::getNodeType()const
{
	return nodeType_;
}

void CreateInstanceRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setParameter("NodeType", nodeType);
}

std::string CreateInstanceRequest::getAutoUseCoupon()const
{
	return autoUseCoupon_;
}

void CreateInstanceRequest::setAutoUseCoupon(const std::string& autoUseCoupon)
{
	autoUseCoupon_ = autoUseCoupon;
	setParameter("AutoUseCoupon", autoUseCoupon);
}

std::string CreateInstanceRequest::getInstanceClass()const
{
	return instanceClass_;
}

void CreateInstanceRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setParameter("InstanceClass", instanceClass);
}

std::string CreateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long CreateInstanceRequest::getCapacity()const
{
	return capacity_;
}

void CreateInstanceRequest::setCapacity(long capacity)
{
	capacity_ = capacity;
	setParameter("Capacity", std::to_string(capacity));
}

std::string CreateInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateInstanceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void CreateInstanceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string CreateInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CreateInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string CreateInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateInstanceRequest::getSrcDBInstanceId()const
{
	return srcDBInstanceId_;
}

void CreateInstanceRequest::setSrcDBInstanceId(const std::string& srcDBInstanceId)
{
	srcDBInstanceId_ = srcDBInstanceId;
	setParameter("SrcDBInstanceId", srcDBInstanceId);
}

std::string CreateInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool CreateInstanceRequest::getGlobalInstance()const
{
	return globalInstance_;
}

void CreateInstanceRequest::setGlobalInstance(bool globalInstance)
{
	globalInstance_ = globalInstance;
	setParameter("GlobalInstance", globalInstance ? "true" : "false");
}

std::string CreateInstanceRequest::getToken()const
{
	return token_;
}

void CreateInstanceRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string CreateInstanceRequest::getGlobalInstanceId()const
{
	return globalInstanceId_;
}

void CreateInstanceRequest::setGlobalInstanceId(const std::string& globalInstanceId)
{
	globalInstanceId_ = globalInstanceId;
	setParameter("GlobalInstanceId", globalInstanceId);
}

std::string CreateInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void CreateInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

std::string CreateInstanceRequest::getConfig()const
{
	return config_;
}

void CreateInstanceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setParameter("Config", config);
}

