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

#include <alibabacloud/dds/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "CreateDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceRequest::~CreateDBInstanceRequest()
{}

long CreateDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CreateDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CreateDBInstanceRequest::getCouponNo()const
{
	return couponNo_;
}

void CreateDBInstanceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string CreateDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateDBInstanceRequest::getNetworkType()const
{
	return networkType_;
}

void CreateDBInstanceRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string CreateDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CreateDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CreateDBInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateDBInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

int CreateDBInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateDBInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateDBInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CreateDBInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

long CreateDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CreateDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string CreateDBInstanceRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateDBInstanceRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setParameter("SecurityIPList", securityIPList);
}

std::string CreateDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateDBInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateDBInstanceRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

std::string CreateDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDBInstanceRequest::getReadonlyReplicas()const
{
	return readonlyReplicas_;
}

void CreateDBInstanceRequest::setReadonlyReplicas(const std::string& readonlyReplicas)
{
	readonlyReplicas_ = readonlyReplicas;
	setParameter("ReadonlyReplicas", readonlyReplicas);
}

std::string CreateDBInstanceRequest::getReplicationFactor()const
{
	return replicationFactor_;
}

void CreateDBInstanceRequest::setReplicationFactor(const std::string& replicationFactor)
{
	replicationFactor_ = replicationFactor;
	setParameter("ReplicationFactor", replicationFactor);
}

std::string CreateDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBInstanceRequest::getStorageEngine()const
{
	return storageEngine_;
}

void CreateDBInstanceRequest::setStorageEngine(const std::string& storageEngine)
{
	storageEngine_ = storageEngine;
	setParameter("StorageEngine", storageEngine);
}

std::string CreateDBInstanceRequest::getDatabaseNames()const
{
	return databaseNames_;
}

void CreateDBInstanceRequest::setDatabaseNames(const std::string& databaseNames)
{
	databaseNames_ = databaseNames;
	setParameter("DatabaseNames", databaseNames);
}

std::string CreateDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDBInstanceRequest::getEngine()const
{
	return engine_;
}

void CreateDBInstanceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string CreateDBInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CreateDBInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string CreateDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBInstanceRequest::getSrcDBInstanceId()const
{
	return srcDBInstanceId_;
}

void CreateDBInstanceRequest::setSrcDBInstanceId(const std::string& srcDBInstanceId)
{
	srcDBInstanceId_ = srcDBInstanceId;
	setParameter("SrcDBInstanceId", srcDBInstanceId);
}

std::string CreateDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateDBInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateDBInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateDBInstanceRequest::getAccountPassword()const
{
	return accountPassword_;
}

void CreateDBInstanceRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

std::string CreateDBInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateDBInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateDBInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void CreateDBInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

