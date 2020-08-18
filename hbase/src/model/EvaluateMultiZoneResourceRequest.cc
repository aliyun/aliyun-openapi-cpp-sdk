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

#include <alibabacloud/hbase/model/EvaluateMultiZoneResourceRequest.h>

using AlibabaCloud::HBase::Model::EvaluateMultiZoneResourceRequest;

EvaluateMultiZoneResourceRequest::EvaluateMultiZoneResourceRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "EvaluateMultiZoneResource")
{
	setMethod(HttpRequest::Method::Post);
}

EvaluateMultiZoneResourceRequest::~EvaluateMultiZoneResourceRequest()
{}

std::string EvaluateMultiZoneResourceRequest::getArchVersion()const
{
	return archVersion_;
}

void EvaluateMultiZoneResourceRequest::setArchVersion(const std::string& archVersion)
{
	archVersion_ = archVersion;
	setParameter("ArchVersion", archVersion);
}

std::string EvaluateMultiZoneResourceRequest::getClusterName()const
{
	return clusterName_;
}

void EvaluateMultiZoneResourceRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string EvaluateMultiZoneResourceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void EvaluateMultiZoneResourceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string EvaluateMultiZoneResourceRequest::getLogDiskType()const
{
	return logDiskType_;
}

void EvaluateMultiZoneResourceRequest::setLogDiskType(const std::string& logDiskType)
{
	logDiskType_ = logDiskType;
	setParameter("LogDiskType", logDiskType);
}

std::string EvaluateMultiZoneResourceRequest::getPrimaryVSwitchId()const
{
	return primaryVSwitchId_;
}

void EvaluateMultiZoneResourceRequest::setPrimaryVSwitchId(const std::string& primaryVSwitchId)
{
	primaryVSwitchId_ = primaryVSwitchId;
	setParameter("PrimaryVSwitchId", primaryVSwitchId);
}

std::string EvaluateMultiZoneResourceRequest::getLogInstanceType()const
{
	return logInstanceType_;
}

void EvaluateMultiZoneResourceRequest::setLogInstanceType(const std::string& logInstanceType)
{
	logInstanceType_ = logInstanceType;
	setParameter("LogInstanceType", logInstanceType);
}

int EvaluateMultiZoneResourceRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void EvaluateMultiZoneResourceRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int EvaluateMultiZoneResourceRequest::getPeriod()const
{
	return period_;
}

void EvaluateMultiZoneResourceRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int EvaluateMultiZoneResourceRequest::getLogNodeCount()const
{
	return logNodeCount_;
}

void EvaluateMultiZoneResourceRequest::setLogNodeCount(int logNodeCount)
{
	logNodeCount_ = logNodeCount;
	setParameter("LogNodeCount", std::to_string(logNodeCount));
}

std::string EvaluateMultiZoneResourceRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void EvaluateMultiZoneResourceRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setParameter("SecurityIPList", securityIPList);
}

std::string EvaluateMultiZoneResourceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void EvaluateMultiZoneResourceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string EvaluateMultiZoneResourceRequest::getCoreDiskType()const
{
	return coreDiskType_;
}

void EvaluateMultiZoneResourceRequest::setCoreDiskType(const std::string& coreDiskType)
{
	coreDiskType_ = coreDiskType;
	setParameter("CoreDiskType", coreDiskType);
}

std::string EvaluateMultiZoneResourceRequest::getArbiterZoneId()const
{
	return arbiterZoneId_;
}

void EvaluateMultiZoneResourceRequest::setArbiterZoneId(const std::string& arbiterZoneId)
{
	arbiterZoneId_ = arbiterZoneId;
	setParameter("ArbiterZoneId", arbiterZoneId);
}

std::string EvaluateMultiZoneResourceRequest::getClientToken()const
{
	return clientToken_;
}

void EvaluateMultiZoneResourceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string EvaluateMultiZoneResourceRequest::getMultiZoneCombination()const
{
	return multiZoneCombination_;
}

void EvaluateMultiZoneResourceRequest::setMultiZoneCombination(const std::string& multiZoneCombination)
{
	multiZoneCombination_ = multiZoneCombination;
	setParameter("MultiZoneCombination", multiZoneCombination);
}

std::string EvaluateMultiZoneResourceRequest::getPrimaryZoneId()const
{
	return primaryZoneId_;
}

void EvaluateMultiZoneResourceRequest::setPrimaryZoneId(const std::string& primaryZoneId)
{
	primaryZoneId_ = primaryZoneId;
	setParameter("PrimaryZoneId", primaryZoneId);
}

std::string EvaluateMultiZoneResourceRequest::getEngine()const
{
	return engine_;
}

void EvaluateMultiZoneResourceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string EvaluateMultiZoneResourceRequest::getRegionId()const
{
	return regionId_;
}

void EvaluateMultiZoneResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string EvaluateMultiZoneResourceRequest::getStandbyVSwitchId()const
{
	return standbyVSwitchId_;
}

void EvaluateMultiZoneResourceRequest::setStandbyVSwitchId(const std::string& standbyVSwitchId)
{
	standbyVSwitchId_ = standbyVSwitchId;
	setParameter("StandbyVSwitchId", standbyVSwitchId);
}

std::string EvaluateMultiZoneResourceRequest::getStandbyZoneId()const
{
	return standbyZoneId_;
}

void EvaluateMultiZoneResourceRequest::setStandbyZoneId(const std::string& standbyZoneId)
{
	standbyZoneId_ = standbyZoneId;
	setParameter("StandbyZoneId", standbyZoneId);
}

std::string EvaluateMultiZoneResourceRequest::getMasterInstanceType()const
{
	return masterInstanceType_;
}

void EvaluateMultiZoneResourceRequest::setMasterInstanceType(const std::string& masterInstanceType)
{
	masterInstanceType_ = masterInstanceType;
	setParameter("MasterInstanceType", masterInstanceType);
}

int EvaluateMultiZoneResourceRequest::getCoreNodeCount()const
{
	return coreNodeCount_;
}

void EvaluateMultiZoneResourceRequest::setCoreNodeCount(int coreNodeCount)
{
	coreNodeCount_ = coreNodeCount;
	setParameter("CoreNodeCount", std::to_string(coreNodeCount));
}

int EvaluateMultiZoneResourceRequest::getLogDiskSize()const
{
	return logDiskSize_;
}

void EvaluateMultiZoneResourceRequest::setLogDiskSize(int logDiskSize)
{
	logDiskSize_ = logDiskSize;
	setParameter("LogDiskSize", std::to_string(logDiskSize));
}

std::string EvaluateMultiZoneResourceRequest::getCoreInstanceType()const
{
	return coreInstanceType_;
}

void EvaluateMultiZoneResourceRequest::setCoreInstanceType(const std::string& coreInstanceType)
{
	coreInstanceType_ = coreInstanceType;
	setParameter("CoreInstanceType", coreInstanceType);
}

int EvaluateMultiZoneResourceRequest::getCoreDiskSize()const
{
	return coreDiskSize_;
}

void EvaluateMultiZoneResourceRequest::setCoreDiskSize(int coreDiskSize)
{
	coreDiskSize_ = coreDiskSize;
	setParameter("CoreDiskSize", std::to_string(coreDiskSize));
}

std::string EvaluateMultiZoneResourceRequest::getVpcId()const
{
	return vpcId_;
}

void EvaluateMultiZoneResourceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string EvaluateMultiZoneResourceRequest::getPayType()const
{
	return payType_;
}

void EvaluateMultiZoneResourceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string EvaluateMultiZoneResourceRequest::getArbiterVSwitchId()const
{
	return arbiterVSwitchId_;
}

void EvaluateMultiZoneResourceRequest::setArbiterVSwitchId(const std::string& arbiterVSwitchId)
{
	arbiterVSwitchId_ = arbiterVSwitchId;
	setParameter("ArbiterVSwitchId", arbiterVSwitchId);
}

