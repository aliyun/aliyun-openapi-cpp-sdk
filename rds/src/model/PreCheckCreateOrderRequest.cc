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

#include <alibabacloud/rds/model/PreCheckCreateOrderRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderRequest;

PreCheckCreateOrderRequest::PreCheckCreateOrderRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrder")
{}

PreCheckCreateOrderRequest::~PreCheckCreateOrderRequest()
{}

long PreCheckCreateOrderRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckCreateOrderRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int PreCheckCreateOrderRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void PreCheckCreateOrderRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string PreCheckCreateOrderRequest::getSystemDBCharset()const
{
	return systemDBCharset_;
}

void PreCheckCreateOrderRequest::setSystemDBCharset(const std::string& systemDBCharset)
{
	systemDBCharset_ = systemDBCharset;
	setCoreParameter("SystemDBCharset", systemDBCharset);
}

std::string PreCheckCreateOrderRequest::getCountryCode()const
{
	return countryCode_;
}

void PreCheckCreateOrderRequest::setCountryCode(const std::string& countryCode)
{
	countryCode_ = countryCode;
	setCoreParameter("CountryCode", countryCode);
}

std::string PreCheckCreateOrderRequest::getEngineVersion()const
{
	return engineVersion_;
}

void PreCheckCreateOrderRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string PreCheckCreateOrderRequest::getCurrencyCode()const
{
	return currencyCode_;
}

void PreCheckCreateOrderRequest::setCurrencyCode(const std::string& currencyCode)
{
	currencyCode_ = currencyCode;
	setCoreParameter("CurrencyCode", currencyCode);
}

std::string PreCheckCreateOrderRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void PreCheckCreateOrderRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string PreCheckCreateOrderRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void PreCheckCreateOrderRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string PreCheckCreateOrderRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void PreCheckCreateOrderRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

std::string PreCheckCreateOrderRequest::getAgentId()const
{
	return agentId_;
}

void PreCheckCreateOrderRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

std::string PreCheckCreateOrderRequest::getResource()const
{
	return resource_;
}

void PreCheckCreateOrderRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string PreCheckCreateOrderRequest::getBackupId()const
{
	return backupId_;
}

void PreCheckCreateOrderRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string PreCheckCreateOrderRequest::getCommodityCode()const
{
	return commodityCode_;
}

void PreCheckCreateOrderRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

std::string PreCheckCreateOrderRequest::getEncryptionKey()const
{
	return encryptionKey_;
}

void PreCheckCreateOrderRequest::setEncryptionKey(const std::string& encryptionKey)
{
	encryptionKey_ = encryptionKey;
	setCoreParameter("EncryptionKey", encryptionKey);
}

long PreCheckCreateOrderRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckCreateOrderRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckCreateOrderRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void PreCheckCreateOrderRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string PreCheckCreateOrderRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void PreCheckCreateOrderRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setCoreParameter("SecurityIPList", securityIPList);
}

std::string PreCheckCreateOrderRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void PreCheckCreateOrderRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string PreCheckCreateOrderRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void PreCheckCreateOrderRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string PreCheckCreateOrderRequest::getAutoRenew()const
{
	return autoRenew_;
}

void PreCheckCreateOrderRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::string PreCheckCreateOrderRequest::getPromotionCode()const
{
	return promotionCode_;
}

void PreCheckCreateOrderRequest::setPromotionCode(const std::string& promotionCode)
{
	promotionCode_ = promotionCode;
	setCoreParameter("PromotionCode", promotionCode);
}

std::string PreCheckCreateOrderRequest::getRoleARN()const
{
	return roleARN_;
}

void PreCheckCreateOrderRequest::setRoleARN(const std::string& roleARN)
{
	roleARN_ = roleARN;
	setCoreParameter("RoleARN", roleARN);
}

std::string PreCheckCreateOrderRequest::getZoneId()const
{
	return zoneId_;
}

void PreCheckCreateOrderRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string PreCheckCreateOrderRequest::getTimeType()const
{
	return timeType_;
}

void PreCheckCreateOrderRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setCoreParameter("TimeType", timeType);
}

std::string PreCheckCreateOrderRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void PreCheckCreateOrderRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

std::string PreCheckCreateOrderRequest::getConnectionMode()const
{
	return connectionMode_;
}

void PreCheckCreateOrderRequest::setConnectionMode(const std::string& connectionMode)
{
	connectionMode_ = connectionMode;
	setCoreParameter("ConnectionMode", connectionMode);
}

std::string PreCheckCreateOrderRequest::getNodeType()const
{
	return nodeType_;
}

void PreCheckCreateOrderRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", nodeType);
}

std::string PreCheckCreateOrderRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckCreateOrderRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreCheckCreateOrderRequest::getZoneIdSlave1()const
{
	return zoneIdSlave1_;
}

void PreCheckCreateOrderRequest::setZoneIdSlave1(const std::string& zoneIdSlave1)
{
	zoneIdSlave1_ = zoneIdSlave1;
	setCoreParameter("ZoneIdSlave1", zoneIdSlave1);
}

std::string PreCheckCreateOrderRequest::getZoneIdSlave2()const
{
	return zoneIdSlave2_;
}

void PreCheckCreateOrderRequest::setZoneIdSlave2(const std::string& zoneIdSlave2)
{
	zoneIdSlave2_ = zoneIdSlave2;
	setCoreParameter("ZoneIdSlave2", zoneIdSlave2);
}

std::string PreCheckCreateOrderRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckCreateOrderRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckCreateOrderRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckCreateOrderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreCheckCreateOrderRequest::getEngine()const
{
	return engine_;
}

void PreCheckCreateOrderRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string PreCheckCreateOrderRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckCreateOrderRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckCreateOrderRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void PreCheckCreateOrderRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string PreCheckCreateOrderRequest::getDBInstanceNetType()const
{
	return dBInstanceNetType_;
}

void PreCheckCreateOrderRequest::setDBInstanceNetType(const std::string& dBInstanceNetType)
{
	dBInstanceNetType_ = dBInstanceNetType;
	setCoreParameter("DBInstanceNetType", dBInstanceNetType);
}

std::string PreCheckCreateOrderRequest::getRestoreTime()const
{
	return restoreTime_;
}

void PreCheckCreateOrderRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", restoreTime);
}

int PreCheckCreateOrderRequest::getQuantity()const
{
	return quantity_;
}

void PreCheckCreateOrderRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", std::to_string(quantity));
}

bool PreCheckCreateOrderRequest::getAutoPay()const
{
	return autoPay_;
}

void PreCheckCreateOrderRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckCreateOrderRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckCreateOrderRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PreCheckCreateOrderRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PreCheckCreateOrderRequest::getUsedTime()const
{
	return usedTime_;
}

void PreCheckCreateOrderRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

int PreCheckCreateOrderRequest::getInstanceUsedType()const
{
	return instanceUsedType_;
}

void PreCheckCreateOrderRequest::setInstanceUsedType(int instanceUsedType)
{
	instanceUsedType_ = instanceUsedType;
	setCoreParameter("InstanceUsedType", std::to_string(instanceUsedType));
}

std::string PreCheckCreateOrderRequest::getVPCId()const
{
	return vPCId_;
}

void PreCheckCreateOrderRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string PreCheckCreateOrderRequest::getCategory()const
{
	return category_;
}

void PreCheckCreateOrderRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string PreCheckCreateOrderRequest::getPayType()const
{
	return payType_;
}

void PreCheckCreateOrderRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

