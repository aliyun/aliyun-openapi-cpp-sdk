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

#include <alibabacloud/rds/model/CloneDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CloneDBInstanceRequest;

CloneDBInstanceRequest::CloneDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CloneDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CloneDBInstanceRequest::~CloneDBInstanceRequest()
{}

long CloneDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CloneDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CloneDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CloneDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CloneDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CloneDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CloneDBInstanceRequest::getZoneIdSlave1()const
{
	return zoneIdSlave1_;
}

void CloneDBInstanceRequest::setZoneIdSlave1(const std::string& zoneIdSlave1)
{
	zoneIdSlave1_ = zoneIdSlave1;
	setCoreParameter("ZoneIdSlave1", zoneIdSlave1);
}

std::string CloneDBInstanceRequest::getZoneIdSlave2()const
{
	return zoneIdSlave2_;
}

void CloneDBInstanceRequest::setZoneIdSlave2(const std::string& zoneIdSlave2)
{
	zoneIdSlave2_ = zoneIdSlave2;
	setCoreParameter("ZoneIdSlave2", zoneIdSlave2);
}

std::string CloneDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CloneDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CloneDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CloneDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CloneDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CloneDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CloneDBInstanceRequest::getTableMeta()const
{
	return tableMeta_;
}

void CloneDBInstanceRequest::setTableMeta(const std::string& tableMeta)
{
	tableMeta_ = tableMeta;
	setCoreParameter("TableMeta", tableMeta);
}

std::string CloneDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CloneDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CloneDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CloneDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string CloneDBInstanceRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void CloneDBInstanceRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string CloneDBInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CloneDBInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", restoreTime);
}

std::string CloneDBInstanceRequest::getPeriod()const
{
	return period_;
}

void CloneDBInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CloneDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CloneDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CloneDBInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CloneDBInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string CloneDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CloneDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CloneDBInstanceRequest::getRestoreTable()const
{
	return restoreTable_;
}

void CloneDBInstanceRequest::setRestoreTable(const std::string& restoreTable)
{
	restoreTable_ = restoreTable;
	setCoreParameter("RestoreTable", restoreTable);
}

long CloneDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CloneDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CloneDBInstanceRequest::getUsedTime()const
{
	return usedTime_;
}

void CloneDBInstanceRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string CloneDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CloneDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string CloneDBInstanceRequest::getDbNames()const
{
	return dbNames_;
}

void CloneDBInstanceRequest::setDbNames(const std::string& dbNames)
{
	dbNames_ = dbNames;
	setCoreParameter("DbNames", dbNames);
}

std::string CloneDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CloneDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CloneDBInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CloneDBInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string CloneDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CloneDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string CloneDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CloneDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CloneDBInstanceRequest::getCategory()const
{
	return category_;
}

void CloneDBInstanceRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string CloneDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CloneDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::string CloneDBInstanceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CloneDBInstanceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

