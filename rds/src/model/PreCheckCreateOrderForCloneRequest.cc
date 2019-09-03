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

#include <alibabacloud/rds/model/PreCheckCreateOrderForCloneRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderForCloneRequest;

PreCheckCreateOrderForCloneRequest::PreCheckCreateOrderForCloneRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrderForClone")
{}

PreCheckCreateOrderForCloneRequest::~PreCheckCreateOrderForCloneRequest()
{}

long PreCheckCreateOrderForCloneRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckCreateOrderForCloneRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int PreCheckCreateOrderForCloneRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void PreCheckCreateOrderForCloneRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string PreCheckCreateOrderForCloneRequest::getCountryCode()const
{
	return countryCode_;
}

void PreCheckCreateOrderForCloneRequest::setCountryCode(const std::string& countryCode)
{
	countryCode_ = countryCode;
	setCoreParameter("CountryCode", countryCode);
}

std::string PreCheckCreateOrderForCloneRequest::getCurrencyCode()const
{
	return currencyCode_;
}

void PreCheckCreateOrderForCloneRequest::setCurrencyCode(const std::string& currencyCode)
{
	currencyCode_ = currencyCode;
	setCoreParameter("CurrencyCode", currencyCode);
}

std::string PreCheckCreateOrderForCloneRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void PreCheckCreateOrderForCloneRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string PreCheckCreateOrderForCloneRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void PreCheckCreateOrderForCloneRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string PreCheckCreateOrderForCloneRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void PreCheckCreateOrderForCloneRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

std::string PreCheckCreateOrderForCloneRequest::getAgentId()const
{
	return agentId_;
}

void PreCheckCreateOrderForCloneRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

std::string PreCheckCreateOrderForCloneRequest::getResource()const
{
	return resource_;
}

void PreCheckCreateOrderForCloneRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string PreCheckCreateOrderForCloneRequest::getBackupId()const
{
	return backupId_;
}

void PreCheckCreateOrderForCloneRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string PreCheckCreateOrderForCloneRequest::getCommodityCode()const
{
	return commodityCode_;
}

void PreCheckCreateOrderForCloneRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long PreCheckCreateOrderForCloneRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckCreateOrderForCloneRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckCreateOrderForCloneRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void PreCheckCreateOrderForCloneRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string PreCheckCreateOrderForCloneRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void PreCheckCreateOrderForCloneRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string PreCheckCreateOrderForCloneRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void PreCheckCreateOrderForCloneRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string PreCheckCreateOrderForCloneRequest::getAutoRenew()const
{
	return autoRenew_;
}

void PreCheckCreateOrderForCloneRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::string PreCheckCreateOrderForCloneRequest::getPromotionCode()const
{
	return promotionCode_;
}

void PreCheckCreateOrderForCloneRequest::setPromotionCode(const std::string& promotionCode)
{
	promotionCode_ = promotionCode;
	setCoreParameter("PromotionCode", promotionCode);
}

std::string PreCheckCreateOrderForCloneRequest::getZoneId()const
{
	return zoneId_;
}

void PreCheckCreateOrderForCloneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string PreCheckCreateOrderForCloneRequest::getTimeType()const
{
	return timeType_;
}

void PreCheckCreateOrderForCloneRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setCoreParameter("TimeType", timeType);
}

std::string PreCheckCreateOrderForCloneRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void PreCheckCreateOrderForCloneRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

std::string PreCheckCreateOrderForCloneRequest::getNodeType()const
{
	return nodeType_;
}

void PreCheckCreateOrderForCloneRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", nodeType);
}

std::string PreCheckCreateOrderForCloneRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckCreateOrderForCloneRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreCheckCreateOrderForCloneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckCreateOrderForCloneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckCreateOrderForCloneRequest::getTableMeta()const
{
	return tableMeta_;
}

void PreCheckCreateOrderForCloneRequest::setTableMeta(const std::string& tableMeta)
{
	tableMeta_ = tableMeta;
	setCoreParameter("TableMeta", tableMeta);
}

std::string PreCheckCreateOrderForCloneRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckCreateOrderForCloneRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckCreateOrderForCloneRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void PreCheckCreateOrderForCloneRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string PreCheckCreateOrderForCloneRequest::getRestoreTime()const
{
	return restoreTime_;
}

void PreCheckCreateOrderForCloneRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", restoreTime);
}

int PreCheckCreateOrderForCloneRequest::getQuantity()const
{
	return quantity_;
}

void PreCheckCreateOrderForCloneRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", std::to_string(quantity));
}

bool PreCheckCreateOrderForCloneRequest::getAutoPay()const
{
	return autoPay_;
}

void PreCheckCreateOrderForCloneRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderForCloneRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckCreateOrderForCloneRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckCreateOrderForCloneRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PreCheckCreateOrderForCloneRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PreCheckCreateOrderForCloneRequest::getRestoreTable()const
{
	return restoreTable_;
}

void PreCheckCreateOrderForCloneRequest::setRestoreTable(const std::string& restoreTable)
{
	restoreTable_ = restoreTable;
	setCoreParameter("RestoreTable", restoreTable);
}

std::string PreCheckCreateOrderForCloneRequest::getUsedTime()const
{
	return usedTime_;
}

void PreCheckCreateOrderForCloneRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string PreCheckCreateOrderForCloneRequest::getDBNames()const
{
	return dBNames_;
}

void PreCheckCreateOrderForCloneRequest::setDBNames(const std::string& dBNames)
{
	dBNames_ = dBNames;
	setCoreParameter("DBNames", dBNames);
}

int PreCheckCreateOrderForCloneRequest::getInstanceUsedType()const
{
	return instanceUsedType_;
}

void PreCheckCreateOrderForCloneRequest::setInstanceUsedType(int instanceUsedType)
{
	instanceUsedType_ = instanceUsedType;
	setCoreParameter("InstanceUsedType", std::to_string(instanceUsedType));
}

std::string PreCheckCreateOrderForCloneRequest::getVPCId()const
{
	return vPCId_;
}

void PreCheckCreateOrderForCloneRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string PreCheckCreateOrderForCloneRequest::getCloneInstanceDefaultValue()const
{
	return cloneInstanceDefaultValue_;
}

void PreCheckCreateOrderForCloneRequest::setCloneInstanceDefaultValue(const std::string& cloneInstanceDefaultValue)
{
	cloneInstanceDefaultValue_ = cloneInstanceDefaultValue;
	setCoreParameter("CloneInstanceDefaultValue", cloneInstanceDefaultValue);
}

std::string PreCheckCreateOrderForCloneRequest::getPayType()const
{
	return payType_;
}

void PreCheckCreateOrderForCloneRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

