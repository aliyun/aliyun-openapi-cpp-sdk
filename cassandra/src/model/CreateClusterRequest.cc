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

#include <alibabacloud/cassandra/model/CreateClusterRequest.h>

using AlibabaCloud::Cassandra::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "CreateCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest()
{}

std::string CreateClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
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

std::string CreateClusterRequest::getPassword()const
{
	return password_;
}

void CreateClusterRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
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

std::string CreateClusterRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateClusterRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
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

std::string CreateClusterRequest::getMajorVersion()const
{
	return majorVersion_;
}

void CreateClusterRequest::setMajorVersion(const std::string& majorVersion)
{
	majorVersion_ = majorVersion;
	setParameter("MajorVersion", majorVersion);
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

std::string CreateClusterRequest::getDiskType()const
{
	return diskType_;
}

void CreateClusterRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

std::string CreateClusterRequest::getVswitchId()const
{
	return vswitchId_;
}

void CreateClusterRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
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

bool CreateClusterRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string CreateClusterRequest::getDataCenterName()const
{
	return dataCenterName_;
}

void CreateClusterRequest::setDataCenterName(const std::string& dataCenterName)
{
	dataCenterName_ = dataCenterName;
	setParameter("DataCenterName", dataCenterName);
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

std::string CreateClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
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

