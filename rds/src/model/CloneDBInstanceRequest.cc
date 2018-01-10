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

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CloneDBInstanceRequest::CloneDBInstanceRequest() :
	RdsRequest("CloneDBInstance")
{}

CloneDBInstanceRequest::~CloneDBInstanceRequest()
{}

long CloneDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CloneDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CloneDBInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CloneDBInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string CloneDBInstanceRequest::getPeriod()const
{
	return period_;
}

void CloneDBInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

int CloneDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CloneDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CloneDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CloneDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CloneDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CloneDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CloneDBInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CloneDBInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string CloneDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CloneDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CloneDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CloneDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CloneDBInstanceRequest::getUsedTime()const
{
	return usedTime_;
}

void CloneDBInstanceRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", usedTime);
}

std::string CloneDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CloneDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CloneDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CloneDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string CloneDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CloneDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CloneDBInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CloneDBInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CloneDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CloneDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CloneDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CloneDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setParameter("VPCId", vPCId);
}

std::string CloneDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CloneDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CloneDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CloneDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CloneDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CloneDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CloneDBInstanceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CloneDBInstanceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setParameter("InstanceNetworkType", instanceNetworkType);
}

