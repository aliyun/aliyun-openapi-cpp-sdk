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

#include <alibabacloud/hbase/model/CreateInstanceRequest.h>

using AlibabaCloud::HBase::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest()
{}

std::string CreateInstanceRequest::getClusterName()const
{
	return clusterName_;
}

void CreateInstanceRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setCoreParameter("ClusterName", clusterName);
}

std::string CreateInstanceRequest::getDbInstanceConnType()const
{
	return dbInstanceConnType_;
}

void CreateInstanceRequest::setDbInstanceConnType(const std::string& dbInstanceConnType)
{
	dbInstanceConnType_ = dbInstanceConnType;
	setCoreParameter("DbInstanceConnType", dbInstanceConnType);
}

std::string CreateInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string CreateInstanceRequest::getDepMode()const
{
	return depMode_;
}

void CreateInstanceRequest::setDepMode(const std::string& depMode)
{
	depMode_ = depMode;
	setCoreParameter("DepMode", depMode);
}

std::string CreateInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CreateInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string CreateInstanceRequest::getDbInstanceType()const
{
	return dbInstanceType_;
}

void CreateInstanceRequest::setDbInstanceType(const std::string& dbInstanceType)
{
	dbInstanceType_ = dbInstanceType;
	setCoreParameter("DbInstanceType", dbInstanceType);
}

std::string CreateInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateInstanceRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateInstanceRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setCoreParameter("SecurityIPList", securityIPList);
}

std::string CreateInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::string CreateInstanceRequest::getNetType()const
{
	return netType_;
}

void CreateInstanceRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::string CreateInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateInstanceRequest::getCoreDiskType()const
{
	return coreDiskType_;
}

void CreateInstanceRequest::setCoreDiskType(const std::string& coreDiskType)
{
	coreDiskType_ = coreDiskType;
	setCoreParameter("CoreDiskType", coreDiskType);
}

std::string CreateInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

std::string CreateInstanceRequest::getCoreInstanceQuantity()const
{
	return coreInstanceQuantity_;
}

void CreateInstanceRequest::setCoreInstanceQuantity(const std::string& coreInstanceQuantity)
{
	coreInstanceQuantity_ = coreInstanceQuantity;
	setCoreParameter("CoreInstanceQuantity", coreInstanceQuantity);
}

std::string CreateInstanceRequest::getDuration()const
{
	return duration_;
}

void CreateInstanceRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setCoreParameter("Duration", duration);
}

std::string CreateInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateInstanceRequest::getEngine()const
{
	return engine_;
}

void CreateInstanceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string CreateInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CreateInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", restoreTime);
}

std::string CreateInstanceRequest::getSrcDBInstanceId()const
{
	return srcDBInstanceId_;
}

void CreateInstanceRequest::setSrcDBInstanceId(const std::string& srcDBInstanceId)
{
	srcDBInstanceId_ = srcDBInstanceId;
	setCoreParameter("SrcDBInstanceId", srcDBInstanceId);
}

std::string CreateInstanceRequest::getMasterInstanceType()const
{
	return masterInstanceType_;
}

void CreateInstanceRequest::setMasterInstanceType(const std::string& masterInstanceType)
{
	masterInstanceType_ = masterInstanceType;
	setCoreParameter("MasterInstanceType", masterInstanceType);
}

std::string CreateInstanceRequest::getColdStorageSize()const
{
	return coldStorageSize_;
}

void CreateInstanceRequest::setColdStorageSize(const std::string& coldStorageSize)
{
	coldStorageSize_ = coldStorageSize;
	setCoreParameter("ColdStorageSize", coldStorageSize);
}

std::string CreateInstanceRequest::getCoreDiskQuantity()const
{
	return coreDiskQuantity_;
}

void CreateInstanceRequest::setCoreDiskQuantity(const std::string& coreDiskQuantity)
{
	coreDiskQuantity_ = coreDiskQuantity;
	setCoreParameter("CoreDiskQuantity", coreDiskQuantity);
}

std::string CreateInstanceRequest::getIsColdStorage()const
{
	return isColdStorage_;
}

void CreateInstanceRequest::setIsColdStorage(const std::string& isColdStorage)
{
	isColdStorage_ = isColdStorage;
	setCoreParameter("IsColdStorage", isColdStorage);
}

std::string CreateInstanceRequest::getCoreInstanceType()const
{
	return coreInstanceType_;
}

void CreateInstanceRequest::setCoreInstanceType(const std::string& coreInstanceType)
{
	coreInstanceType_ = coreInstanceType;
	setCoreParameter("CoreInstanceType", coreInstanceType);
}

std::string CreateInstanceRequest::getCoreDiskSize()const
{
	return coreDiskSize_;
}

void CreateInstanceRequest::setCoreDiskSize(const std::string& coreDiskSize)
{
	coreDiskSize_ = coreDiskSize;
	setCoreParameter("CoreDiskSize", coreDiskSize);
}

std::string CreateInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void CreateInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateInstanceRequest::getDbType()const
{
	return dbType_;
}

void CreateInstanceRequest::setDbType(const std::string& dbType)
{
	dbType_ = dbType;
	setCoreParameter("DbType", dbType);
}

std::string CreateInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

