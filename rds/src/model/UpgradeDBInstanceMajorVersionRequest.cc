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

#include <alibabacloud/rds/model/UpgradeDBInstanceMajorVersionRequest.h>

using AlibabaCloud::Rds::Model::UpgradeDBInstanceMajorVersionRequest;

UpgradeDBInstanceMajorVersionRequest::UpgradeDBInstanceMajorVersionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "UpgradeDBInstanceMajorVersion")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceMajorVersionRequest::~UpgradeDBInstanceMajorVersionRequest()
{}

long UpgradeDBInstanceMajorVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeDBInstanceMajorVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int UpgradeDBInstanceMajorVersionRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string UpgradeDBInstanceMajorVersionRequest::getClientToken()const
{
	return clientToken_;
}

void UpgradeDBInstanceMajorVersionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpgradeDBInstanceMajorVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBInstanceMajorVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getSwitchTimeMode()const
{
	return switchTimeMode_;
}

void UpgradeDBInstanceMajorVersionRequest::setSwitchTimeMode(const std::string& switchTimeMode)
{
	switchTimeMode_ = switchTimeMode;
	setParameter("SwitchTimeMode", switchTimeMode);
}

std::string UpgradeDBInstanceMajorVersionRequest::getSwitchOver()const
{
	return switchOver_;
}

void UpgradeDBInstanceMajorVersionRequest::setSwitchOver(const std::string& switchOver)
{
	switchOver_ = switchOver;
	setParameter("SwitchOver", switchOver);
}

std::string UpgradeDBInstanceMajorVersionRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UpgradeDBInstanceMajorVersionRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getCollectStatMode()const
{
	return collectStatMode_;
}

void UpgradeDBInstanceMajorVersionRequest::setCollectStatMode(const std::string& collectStatMode)
{
	collectStatMode_ = collectStatMode;
	setParameter("CollectStatMode", collectStatMode);
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string UpgradeDBInstanceMajorVersionRequest::getSwitchTime()const
{
	return switchTime_;
}

void UpgradeDBInstanceMajorVersionRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setParameter("SwitchTime", switchTime);
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string UpgradeDBInstanceMajorVersionRequest::getPeriod()const
{
	return period_;
}

void UpgradeDBInstanceMajorVersionRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string UpgradeDBInstanceMajorVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeDBInstanceMajorVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeDBInstanceMajorVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpgradeDBInstanceMajorVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpgradeDBInstanceMajorVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBInstanceMajorVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBInstanceMajorVersionRequest::getUsedTime()const
{
	return usedTime_;
}

void UpgradeDBInstanceMajorVersionRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", usedTime);
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string UpgradeDBInstanceMajorVersionRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void UpgradeDBInstanceMajorVersionRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void UpgradeDBInstanceMajorVersionRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string UpgradeDBInstanceMajorVersionRequest::getVPCId()const
{
	return vPCId_;
}

void UpgradeDBInstanceMajorVersionRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setParameter("VPCId", vPCId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getPayType()const
{
	return payType_;
}

void UpgradeDBInstanceMajorVersionRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string UpgradeDBInstanceMajorVersionRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void UpgradeDBInstanceMajorVersionRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setParameter("InstanceNetworkType", instanceNetworkType);
}

std::string UpgradeDBInstanceMajorVersionRequest::getTargetMajorVersion()const
{
	return targetMajorVersion_;
}

void UpgradeDBInstanceMajorVersionRequest::setTargetMajorVersion(const std::string& targetMajorVersion)
{
	targetMajorVersion_ = targetMajorVersion;
	setParameter("TargetMajorVersion", targetMajorVersion);
}

