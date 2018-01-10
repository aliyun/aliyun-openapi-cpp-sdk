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

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateDBInstanceRequest::CreateDBInstanceRequest() :
	RdsRequest("CreateDBInstance")
{}

CreateDBInstanceRequest::~CreateDBInstanceRequest()
{}

std::string CreateDBInstanceRequest::getConnectionMode()const
{
	return connectionMode_;
}

void CreateDBInstanceRequest::setConnectionMode(const std::string& connectionMode)
{
	connectionMode_ = connectionMode;
	setParameter("ConnectionMode", connectionMode);
}

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

std::string CreateDBInstanceRequest::getSystemDBCharset()const
{
	return systemDBCharset_;
}

void CreateDBInstanceRequest::setSystemDBCharset(const std::string& systemDBCharset)
{
	systemDBCharset_ = systemDBCharset;
	setParameter("SystemDBCharset", systemDBCharset);
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

std::string CreateDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
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

std::string CreateDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
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

std::string CreateDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CreateDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CreateDBInstanceRequest::getDBInstanceNetType()const
{
	return dBInstanceNetType_;
}

void CreateDBInstanceRequest::setDBInstanceNetType(const std::string& dBInstanceNetType)
{
	dBInstanceNetType_ = dBInstanceNetType;
	setParameter("DBInstanceNetType", dBInstanceNetType);
}

std::string CreateDBInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
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

std::string CreateDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
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

std::string CreateDBInstanceRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", usedTime);
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

std::string CreateDBInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateDBInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CreateDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setParameter("VPCId", vPCId);
}

std::string CreateDBInstanceRequest::getTunnelId()const
{
	return tunnelId_;
}

void CreateDBInstanceRequest::setTunnelId(const std::string& tunnelId)
{
	tunnelId_ = tunnelId;
	setParameter("TunnelId", tunnelId);
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

std::string CreateDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreateDBInstanceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CreateDBInstanceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setParameter("InstanceNetworkType", instanceNetworkType);
}

