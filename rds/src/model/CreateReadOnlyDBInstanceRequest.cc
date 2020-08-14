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

#include <alibabacloud/rds/model/CreateReadOnlyDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateReadOnlyDBInstanceRequest;

CreateReadOnlyDBInstanceRequest::CreateReadOnlyDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateReadOnlyDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateReadOnlyDBInstanceRequest::~CreateReadOnlyDBInstanceRequest()
{}

long CreateReadOnlyDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateReadOnlyDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateReadOnlyDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CreateReadOnlyDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateReadOnlyDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateReadOnlyDBInstanceRequest::getInstructionSetArch()const
{
	return instructionSetArch_;
}

void CreateReadOnlyDBInstanceRequest::setInstructionSetArch(const std::string& instructionSetArch)
{
	instructionSetArch_ = instructionSetArch;
	setParameter("InstructionSetArch", instructionSetArch);
}

std::string CreateReadOnlyDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateReadOnlyDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateReadOnlyDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateReadOnlyDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateReadOnlyDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateReadOnlyDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateReadOnlyDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateReadOnlyDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateReadOnlyDBInstanceRequest::getTddlRegionConfig()const
{
	return tddlRegionConfig_;
}

void CreateReadOnlyDBInstanceRequest::setTddlRegionConfig(const std::string& tddlRegionConfig)
{
	tddlRegionConfig_ = tddlRegionConfig;
	setParameter("TddlRegionConfig", tddlRegionConfig);
}

std::string CreateReadOnlyDBInstanceRequest::getTargetDedicatedHostIdForMaster()const
{
	return targetDedicatedHostIdForMaster_;
}

void CreateReadOnlyDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string& targetDedicatedHostIdForMaster)
{
	targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
	setParameter("TargetDedicatedHostIdForMaster", targetDedicatedHostIdForMaster);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CreateReadOnlyDBInstanceRequest::getGdnInstanceName()const
{
	return gdnInstanceName_;
}

void CreateReadOnlyDBInstanceRequest::setGdnInstanceName(const std::string& gdnInstanceName)
{
	gdnInstanceName_ = gdnInstanceName;
	setParameter("GdnInstanceName", gdnInstanceName);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string CreateReadOnlyDBInstanceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void CreateReadOnlyDBInstanceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string CreateReadOnlyDBInstanceRequest::getTddlBizType()const
{
	return tddlBizType_;
}

void CreateReadOnlyDBInstanceRequest::setTddlBizType(const std::string& tddlBizType)
{
	tddlBizType_ = tddlBizType;
	setParameter("TddlBizType", tddlBizType);
}

std::string CreateReadOnlyDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateReadOnlyDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateReadOnlyDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateReadOnlyDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateReadOnlyDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateReadOnlyDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string CreateReadOnlyDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateReadOnlyDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateReadOnlyDBInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateReadOnlyDBInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateReadOnlyDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CreateReadOnlyDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setParameter("VPCId", vPCId);
}

std::string CreateReadOnlyDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateReadOnlyDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateReadOnlyDBInstanceRequest::getCategory()const
{
	return category_;
}

void CreateReadOnlyDBInstanceRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string CreateReadOnlyDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateReadOnlyDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreateReadOnlyDBInstanceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CreateReadOnlyDBInstanceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setParameter("InstanceNetworkType", instanceNetworkType);
}

