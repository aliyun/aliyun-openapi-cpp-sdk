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

#include <alibabacloud/hbase/model/CreateMultiZoneClusterRequest.h>

using AlibabaCloud::HBase::Model::CreateMultiZoneClusterRequest;

CreateMultiZoneClusterRequest::CreateMultiZoneClusterRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateMultiZoneCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMultiZoneClusterRequest::~CreateMultiZoneClusterRequest()
{}

std::string CreateMultiZoneClusterRequest::getArchVersion()const
{
	return archVersion_;
}

void CreateMultiZoneClusterRequest::setArchVersion(const std::string& archVersion)
{
	archVersion_ = archVersion;
	setParameter("ArchVersion", archVersion);
}

std::string CreateMultiZoneClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateMultiZoneClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string CreateMultiZoneClusterRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateMultiZoneClusterRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateMultiZoneClusterRequest::getLogDiskType()const
{
	return logDiskType_;
}

void CreateMultiZoneClusterRequest::setLogDiskType(const std::string& logDiskType)
{
	logDiskType_ = logDiskType;
	setParameter("LogDiskType", logDiskType);
}

std::string CreateMultiZoneClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateMultiZoneClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateMultiZoneClusterRequest::getPrimaryVSwitchId()const
{
	return primaryVSwitchId_;
}

void CreateMultiZoneClusterRequest::setPrimaryVSwitchId(const std::string& primaryVSwitchId)
{
	primaryVSwitchId_ = primaryVSwitchId;
	setParameter("PrimaryVSwitchId", primaryVSwitchId);
}

std::string CreateMultiZoneClusterRequest::getLogInstanceType()const
{
	return logInstanceType_;
}

void CreateMultiZoneClusterRequest::setLogInstanceType(const std::string& logInstanceType)
{
	logInstanceType_ = logInstanceType;
	setParameter("LogInstanceType", logInstanceType);
}

int CreateMultiZoneClusterRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateMultiZoneClusterRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int CreateMultiZoneClusterRequest::getPeriod()const
{
	return period_;
}

void CreateMultiZoneClusterRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int CreateMultiZoneClusterRequest::getLogNodeCount()const
{
	return logNodeCount_;
}

void CreateMultiZoneClusterRequest::setLogNodeCount(int logNodeCount)
{
	logNodeCount_ = logNodeCount;
	setParameter("LogNodeCount", std::to_string(logNodeCount));
}

std::string CreateMultiZoneClusterRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateMultiZoneClusterRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setParameter("SecurityIPList", securityIPList);
}

std::string CreateMultiZoneClusterRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateMultiZoneClusterRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string CreateMultiZoneClusterRequest::getCoreDiskType()const
{
	return coreDiskType_;
}

void CreateMultiZoneClusterRequest::setCoreDiskType(const std::string& coreDiskType)
{
	coreDiskType_ = coreDiskType;
	setParameter("CoreDiskType", coreDiskType);
}

std::string CreateMultiZoneClusterRequest::getArbiterZoneId()const
{
	return arbiterZoneId_;
}

void CreateMultiZoneClusterRequest::setArbiterZoneId(const std::string& arbiterZoneId)
{
	arbiterZoneId_ = arbiterZoneId;
	setParameter("ArbiterZoneId", arbiterZoneId);
}

std::string CreateMultiZoneClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateMultiZoneClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateMultiZoneClusterRequest::getMultiZoneCombination()const
{
	return multiZoneCombination_;
}

void CreateMultiZoneClusterRequest::setMultiZoneCombination(const std::string& multiZoneCombination)
{
	multiZoneCombination_ = multiZoneCombination;
	setParameter("MultiZoneCombination", multiZoneCombination);
}

std::string CreateMultiZoneClusterRequest::getPrimaryZoneId()const
{
	return primaryZoneId_;
}

void CreateMultiZoneClusterRequest::setPrimaryZoneId(const std::string& primaryZoneId)
{
	primaryZoneId_ = primaryZoneId;
	setParameter("PrimaryZoneId", primaryZoneId);
}

std::string CreateMultiZoneClusterRequest::getEngine()const
{
	return engine_;
}

void CreateMultiZoneClusterRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string CreateMultiZoneClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateMultiZoneClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateMultiZoneClusterRequest::getStandbyVSwitchId()const
{
	return standbyVSwitchId_;
}

void CreateMultiZoneClusterRequest::setStandbyVSwitchId(const std::string& standbyVSwitchId)
{
	standbyVSwitchId_ = standbyVSwitchId;
	setParameter("StandbyVSwitchId", standbyVSwitchId);
}

std::string CreateMultiZoneClusterRequest::getStandbyZoneId()const
{
	return standbyZoneId_;
}

void CreateMultiZoneClusterRequest::setStandbyZoneId(const std::string& standbyZoneId)
{
	standbyZoneId_ = standbyZoneId;
	setParameter("StandbyZoneId", standbyZoneId);
}

std::string CreateMultiZoneClusterRequest::getMasterInstanceType()const
{
	return masterInstanceType_;
}

void CreateMultiZoneClusterRequest::setMasterInstanceType(const std::string& masterInstanceType)
{
	masterInstanceType_ = masterInstanceType;
	setParameter("MasterInstanceType", masterInstanceType);
}

int CreateMultiZoneClusterRequest::getCoreNodeCount()const
{
	return coreNodeCount_;
}

void CreateMultiZoneClusterRequest::setCoreNodeCount(int coreNodeCount)
{
	coreNodeCount_ = coreNodeCount;
	setParameter("CoreNodeCount", std::to_string(coreNodeCount));
}

int CreateMultiZoneClusterRequest::getLogDiskSize()const
{
	return logDiskSize_;
}

void CreateMultiZoneClusterRequest::setLogDiskSize(int logDiskSize)
{
	logDiskSize_ = logDiskSize;
	setParameter("LogDiskSize", std::to_string(logDiskSize));
}

std::string CreateMultiZoneClusterRequest::getCoreInstanceType()const
{
	return coreInstanceType_;
}

void CreateMultiZoneClusterRequest::setCoreInstanceType(const std::string& coreInstanceType)
{
	coreInstanceType_ = coreInstanceType;
	setParameter("CoreInstanceType", coreInstanceType);
}

int CreateMultiZoneClusterRequest::getCoreDiskSize()const
{
	return coreDiskSize_;
}

void CreateMultiZoneClusterRequest::setCoreDiskSize(int coreDiskSize)
{
	coreDiskSize_ = coreDiskSize;
	setParameter("CoreDiskSize", std::to_string(coreDiskSize));
}

std::string CreateMultiZoneClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateMultiZoneClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateMultiZoneClusterRequest::getPayType()const
{
	return payType_;
}

void CreateMultiZoneClusterRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreateMultiZoneClusterRequest::getArbiterVSwitchId()const
{
	return arbiterVSwitchId_;
}

void CreateMultiZoneClusterRequest::setArbiterVSwitchId(const std::string& arbiterVSwitchId)
{
	arbiterVSwitchId_ = arbiterVSwitchId;
	setParameter("ArbiterVSwitchId", arbiterVSwitchId);
}

