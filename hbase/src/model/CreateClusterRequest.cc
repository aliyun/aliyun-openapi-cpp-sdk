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

#include <alibabacloud/hbase/model/CreateClusterRequest.h>

using AlibabaCloud::HBase::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest()
{}

std::string CreateClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string CreateClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateClusterRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateClusterRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateClusterRequest::getEngine()const
{
	return engine_;
}

void CreateClusterRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

int CreateClusterRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateClusterRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int CreateClusterRequest::getPeriod()const
{
	return period_;
}

void CreateClusterRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int CreateClusterRequest::getDiskSize()const
{
	return diskSize_;
}

void CreateClusterRequest::setDiskSize(int diskSize)
{
	diskSize_ = diskSize;
	setParameter("DiskSize", std::to_string(diskSize));
}

std::string CreateClusterRequest::getEncryptionKey()const
{
	return encryptionKey_;
}

void CreateClusterRequest::setEncryptionKey(const std::string& encryptionKey)
{
	encryptionKey_ = encryptionKey;
	setParameter("EncryptionKey", encryptionKey);
}

std::string CreateClusterRequest::getMasterInstanceType()const
{
	return masterInstanceType_;
}

void CreateClusterRequest::setMasterInstanceType(const std::string& masterInstanceType)
{
	masterInstanceType_ = masterInstanceType;
	setParameter("MasterInstanceType", masterInstanceType);
}

std::string CreateClusterRequest::getDiskType()const
{
	return diskType_;
}

void CreateClusterRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

std::string CreateClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateClusterRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateClusterRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setParameter("SecurityIPList", securityIPList);
}

int CreateClusterRequest::getColdStorageSize()const
{
	return coldStorageSize_;
}

void CreateClusterRequest::setColdStorageSize(int coldStorageSize)
{
	coldStorageSize_ = coldStorageSize;
	setParameter("ColdStorageSize", std::to_string(coldStorageSize));
}

std::string CreateClusterRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateClusterRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string CreateClusterRequest::getCoreInstanceType()const
{
	return coreInstanceType_;
}

void CreateClusterRequest::setCoreInstanceType(const std::string& coreInstanceType)
{
	coreInstanceType_ = coreInstanceType;
	setParameter("CoreInstanceType", coreInstanceType);
}

std::string CreateClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

int CreateClusterRequest::getNodeCount()const
{
	return nodeCount_;
}

void CreateClusterRequest::setNodeCount(int nodeCount)
{
	nodeCount_ = nodeCount;
	setParameter("NodeCount", std::to_string(nodeCount));
}

std::string CreateClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateClusterRequest::getPayType()const
{
	return payType_;
}

void CreateClusterRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

