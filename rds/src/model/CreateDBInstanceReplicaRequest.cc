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

#include <alibabacloud/rds/model/CreateDBInstanceReplicaRequest.h>

using AlibabaCloud::Rds::Model::CreateDBInstanceReplicaRequest;

CreateDBInstanceReplicaRequest::CreateDBInstanceReplicaRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDBInstanceReplica")
{}

CreateDBInstanceReplicaRequest::~CreateDBInstanceReplicaRequest()
{}

std::string CreateDBInstanceReplicaRequest::getConnectionMode()const
{
	return connectionMode_;
}

void CreateDBInstanceReplicaRequest::setConnectionMode(const std::string& connectionMode)
{
	connectionMode_ = connectionMode;
	setCoreParameter("ConnectionMode", connectionMode);
}

std::string CreateDBInstanceReplicaRequest::getDomainMode()const
{
	return domainMode_;
}

void CreateDBInstanceReplicaRequest::setDomainMode(const std::string& domainMode)
{
	domainMode_ = domainMode;
	setCoreParameter("DomainMode", domainMode);
}

std::string CreateDBInstanceReplicaRequest::getReplicaDescription()const
{
	return replicaDescription_;
}

void CreateDBInstanceReplicaRequest::setReplicaDescription(const std::string& replicaDescription)
{
	replicaDescription_ = replicaDescription;
	setCoreParameter("ReplicaDescription", replicaDescription);
}

long CreateDBInstanceReplicaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBInstanceReplicaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateDBInstanceReplicaRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CreateDBInstanceReplicaRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CreateDBInstanceReplicaRequest::getSystemDBCharset()const
{
	return systemDBCharset_;
}

void CreateDBInstanceReplicaRequest::setSystemDBCharset(const std::string& systemDBCharset)
{
	systemDBCharset_ = systemDBCharset;
	setCoreParameter("SystemDBCharset", systemDBCharset);
}

std::string CreateDBInstanceReplicaRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBInstanceReplicaRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateDBInstanceReplicaRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateDBInstanceReplicaRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string CreateDBInstanceReplicaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBInstanceReplicaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBInstanceReplicaRequest::getRegionId()const
{
	return regionId_;
}

void CreateDBInstanceReplicaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDBInstanceReplicaRequest::getEngine()const
{
	return engine_;
}

void CreateDBInstanceReplicaRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string CreateDBInstanceReplicaRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CreateDBInstanceReplicaRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CreateDBInstanceReplicaRequest::getDBInstanceNetType()const
{
	return dBInstanceNetType_;
}

void CreateDBInstanceReplicaRequest::setDBInstanceNetType(const std::string& dBInstanceNetType)
{
	dBInstanceNetType_ = dBInstanceNetType;
	setCoreParameter("DBInstanceNetType", dBInstanceNetType);
}

std::string CreateDBInstanceReplicaRequest::getPeriod()const
{
	return period_;
}

void CreateDBInstanceReplicaRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateDBInstanceReplicaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBInstanceReplicaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBInstanceReplicaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBInstanceReplicaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateDBInstanceReplicaRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBInstanceReplicaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBInstanceReplicaRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateDBInstanceReplicaRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string CreateDBInstanceReplicaRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CreateDBInstanceReplicaRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string CreateDBInstanceReplicaRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateDBInstanceReplicaRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setCoreParameter("SecurityIPList", securityIPList);
}

std::string CreateDBInstanceReplicaRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDBInstanceReplicaRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateDBInstanceReplicaRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateDBInstanceReplicaRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateDBInstanceReplicaRequest::getSourceDBInstanceId()const
{
	return sourceDBInstanceId_;
}

void CreateDBInstanceReplicaRequest::setSourceDBInstanceId(const std::string& sourceDBInstanceId)
{
	sourceDBInstanceId_ = sourceDBInstanceId;
	setCoreParameter("SourceDBInstanceId", sourceDBInstanceId);
}

std::string CreateDBInstanceReplicaRequest::getReplicaMode()const
{
	return replicaMode_;
}

void CreateDBInstanceReplicaRequest::setReplicaMode(const std::string& replicaMode)
{
	replicaMode_ = replicaMode;
	setCoreParameter("ReplicaMode", replicaMode);
}

std::string CreateDBInstanceReplicaRequest::getVPCId()const
{
	return vPCId_;
}

void CreateDBInstanceReplicaRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string CreateDBInstanceReplicaRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDBInstanceReplicaRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateDBInstanceReplicaRequest::getPayType()const
{
	return payType_;
}

void CreateDBInstanceReplicaRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::string CreateDBInstanceReplicaRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CreateDBInstanceReplicaRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

