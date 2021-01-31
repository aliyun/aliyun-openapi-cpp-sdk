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

#include <alibabacloud/hbase/model/CreateServerlessClusterRequest.h>

using AlibabaCloud::HBase::Model::CreateServerlessClusterRequest;

CreateServerlessClusterRequest::CreateServerlessClusterRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateServerlessCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateServerlessClusterRequest::~CreateServerlessClusterRequest()
{}

std::string CreateServerlessClusterRequest::getClientType()const
{
	return clientType_;
}

void CreateServerlessClusterRequest::setClientType(const std::string& clientType)
{
	clientType_ = clientType;
	setParameter("ClientType", clientType);
}

std::string CreateServerlessClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateServerlessClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string CreateServerlessClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateServerlessClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateServerlessClusterRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateServerlessClusterRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateServerlessClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateServerlessClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateServerlessClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateServerlessClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateServerlessClusterRequest::getEngine()const
{
	return engine_;
}

void CreateServerlessClusterRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

int CreateServerlessClusterRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateServerlessClusterRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int CreateServerlessClusterRequest::getPeriod()const
{
	return period_;
}

void CreateServerlessClusterRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateServerlessClusterRequest::getDiskType()const
{
	return diskType_;
}

void CreateServerlessClusterRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

std::string CreateServerlessClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateServerlessClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateServerlessClusterRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateServerlessClusterRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

int CreateServerlessClusterRequest::getServerlessCapability()const
{
	return serverlessCapability_;
}

void CreateServerlessClusterRequest::setServerlessCapability(int serverlessCapability)
{
	serverlessCapability_ = serverlessCapability;
	setParameter("ServerlessCapability", std::to_string(serverlessCapability));
}

std::string CreateServerlessClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateServerlessClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateServerlessClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateServerlessClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int CreateServerlessClusterRequest::getServerlessStorage()const
{
	return serverlessStorage_;
}

void CreateServerlessClusterRequest::setServerlessStorage(int serverlessStorage)
{
	serverlessStorage_ = serverlessStorage;
	setParameter("ServerlessStorage", std::to_string(serverlessStorage));
}

std::string CreateServerlessClusterRequest::getPayType()const
{
	return payType_;
}

void CreateServerlessClusterRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreateServerlessClusterRequest::getServerlessSpec()const
{
	return serverlessSpec_;
}

void CreateServerlessClusterRequest::setServerlessSpec(const std::string& serverlessSpec)
{
	serverlessSpec_ = serverlessSpec;
	setParameter("ServerlessSpec", serverlessSpec);
}

