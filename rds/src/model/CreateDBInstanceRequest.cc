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

#include <alibabacloud/rds/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDBInstance")
{}

CreateDBInstanceRequest::~CreateDBInstanceRequest()
{}

long CreateDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CreateDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CreateDBInstanceRequest::getSystemDBCharset()const
{
	return systemDBCharset_;
}

void CreateDBInstanceRequest::setSystemDBCharset(const std::string& systemDBCharset)
{
	systemDBCharset_ = systemDBCharset;
	setCoreParameter("SystemDBCharset", systemDBCharset);
}

std::string CreateDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string CreateDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForMaster()const
{
	return targetDedicatedHostIdForMaster_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string& targetDedicatedHostIdForMaster)
{
	targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
	setCoreParameter("TargetDedicatedHostIdForMaster", targetDedicatedHostIdForMaster);
}

std::string CreateDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CreateDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CreateDBInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateDBInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

std::string CreateDBInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateDBInstanceRequest::getEncryptionKey()const
{
	return encryptionKey_;
}

void CreateDBInstanceRequest::setEncryptionKey(const std::string& encryptionKey)
{
	encryptionKey_ = encryptionKey;
	setCoreParameter("EncryptionKey", encryptionKey);
}

long CreateDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CreateDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string CreateDBInstanceRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateDBInstanceRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setCoreParameter("SecurityIPList", securityIPList);
}

std::string CreateDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateDBInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateDBInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForLog()const
{
	return targetDedicatedHostIdForLog_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForLog(const std::string& targetDedicatedHostIdForLog)
{
	targetDedicatedHostIdForLog_ = targetDedicatedHostIdForLog;
	setCoreParameter("TargetDedicatedHostIdForLog", targetDedicatedHostIdForLog);
}

std::string CreateDBInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateDBInstanceRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::string CreateDBInstanceRequest::getRoleARN()const
{
	return roleARN_;
}

void CreateDBInstanceRequest::setRoleARN(const std::string& roleARN)
{
	roleARN_ = roleARN;
	setCoreParameter("RoleARN", roleARN);
}

std::string CreateDBInstanceRequest::getTunnelId()const
{
	return tunnelId_;
}

void CreateDBInstanceRequest::setTunnelId(const std::string& tunnelId)
{
	tunnelId_ = tunnelId;
	setCoreParameter("TunnelId", tunnelId);
}

std::string CreateDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateDBInstanceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CreateDBInstanceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

std::string CreateDBInstanceRequest::getConnectionMode()const
{
	return connectionMode_;
}

void CreateDBInstanceRequest::setConnectionMode(const std::string& connectionMode)
{
	connectionMode_ = connectionMode;
	setCoreParameter("ConnectionMode", connectionMode);
}

std::string CreateDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForSlave()const
{
	return targetDedicatedHostIdForSlave_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForSlave(const std::string& targetDedicatedHostIdForSlave)
{
	targetDedicatedHostIdForSlave_ = targetDedicatedHostIdForSlave;
	setCoreParameter("TargetDedicatedHostIdForSlave", targetDedicatedHostIdForSlave);
}

std::string CreateDBInstanceRequest::getZoneIdSlave1()const
{
	return zoneIdSlave1_;
}

void CreateDBInstanceRequest::setZoneIdSlave1(const std::string& zoneIdSlave1)
{
	zoneIdSlave1_ = zoneIdSlave1;
	setCoreParameter("ZoneIdSlave1", zoneIdSlave1);
}

std::string CreateDBInstanceRequest::getZoneIdSlave2()const
{
	return zoneIdSlave2_;
}

void CreateDBInstanceRequest::setZoneIdSlave2(const std::string& zoneIdSlave2)
{
	zoneIdSlave2_ = zoneIdSlave2;
	setCoreParameter("ZoneIdSlave2", zoneIdSlave2);
}

std::string CreateDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDBInstanceRequest::getEngine()const
{
	return engine_;
}

void CreateDBInstanceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string CreateDBInstanceRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void CreateDBInstanceRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string CreateDBInstanceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void CreateDBInstanceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setCoreParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string CreateDBInstanceRequest::getDBInstanceNetType()const
{
	return dBInstanceNetType_;
}

void CreateDBInstanceRequest::setDBInstanceNetType(const std::string& dBInstanceNetType)
{
	dBInstanceNetType_ = dBInstanceNetType;
	setCoreParameter("DBInstanceNetType", dBInstanceNetType);
}

std::string CreateDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateDBInstanceRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string CreateDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CreateDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string CreateDBInstanceRequest::getCategory()const
{
	return category_;
}

void CreateDBInstanceRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string CreateDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

