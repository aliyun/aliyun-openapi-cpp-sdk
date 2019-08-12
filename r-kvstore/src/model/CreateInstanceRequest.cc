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
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

long CreateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateInstanceRequest::getNodeType()const
{
	return nodeType_;
}

void CreateInstanceRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", std::to_string(nodeType));
}

std::string CreateInstanceRequest::getCouponNo()const
{
	return couponNo_;
}

void CreateInstanceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", std::to_string(couponNo));
}

std::string CreateInstanceRequest::getNetworkType()const
{
	return networkType_;
}

void CreateInstanceRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", std::to_string(networkType));
}

std::string CreateInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", std::to_string(engineVersion));
}

std::string CreateInstanceRequest::getAutoUseCoupon()const
{
	return autoUseCoupon_;
}

void CreateInstanceRequest::setAutoUseCoupon(const std::string& autoUseCoupon)
{
	autoUseCoupon_ = autoUseCoupon;
	setCoreParameter("AutoUseCoupon", std::to_string(autoUseCoupon));
}

std::string CreateInstanceRequest::getInstanceClass()const
{
	return instanceClass_;
}

void CreateInstanceRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", std::to_string(instanceClass));
}

std::string CreateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

long CreateInstanceRequest::getCapacity()const
{
	return capacity_;
}

void CreateInstanceRequest::setCapacity(long capacity)
{
	capacity_ = capacity;
	setCoreParameter("Capacity", capacity);
}

std::string CreateInstanceRequest::getPassword()const
{
	return password_;
}

void CreateInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", std::to_string(password));
}

std::string CreateInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

std::string CreateInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", std::to_string(businessInfo));
}

std::string CreateInstanceRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(const std::string& autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setCoreParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

std::string CreateInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string CreateInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateInstanceRequest::getSrcDBInstanceId()const
{
	return srcDBInstanceId_;
}

void CreateInstanceRequest::setSrcDBInstanceId(const std::string& srcDBInstanceId)
{
	srcDBInstanceId_ = srcDBInstanceId;
	setCoreParameter("SrcDBInstanceId", std::to_string(srcDBInstanceId));
}

std::string CreateInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CreateInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", std::to_string(backupId));
}

long CreateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateInstanceRequest::getToken()const
{
	return token_;
}

void CreateInstanceRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", std::to_string(token));
}

std::string CreateInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string CreateInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", std::to_string(privateIpAddress));
}

std::string CreateInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", std::to_string(instanceName));
}

std::string CreateInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", std::to_string(autoRenew));
}

std::string CreateInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string CreateInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string CreateInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void CreateInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", std::to_string(chargeType));
}

std::string CreateInstanceRequest::getConfig()const
{
	return config_;
}

void CreateInstanceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", std::to_string(config));
}

