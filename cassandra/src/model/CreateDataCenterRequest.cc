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

#include <alibabacloud/cassandra/model/CreateDataCenterRequest.h>

using AlibabaCloud::Cassandra::Model::CreateDataCenterRequest;

CreateDataCenterRequest::CreateDataCenterRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "CreateDataCenter")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDataCenterRequest::~CreateDataCenterRequest()
{}

std::string CreateDataCenterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDataCenterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDataCenterRequest::getRegionId()const
{
	return regionId_;
}

void CreateDataCenterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDataCenterRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateDataCenterRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

int CreateDataCenterRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateDataCenterRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int CreateDataCenterRequest::getPeriod()const
{
	return period_;
}

void CreateDataCenterRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int CreateDataCenterRequest::getDiskSize()const
{
	return diskSize_;
}

void CreateDataCenterRequest::setDiskSize(int diskSize)
{
	diskSize_ = diskSize;
	setParameter("DiskSize", std::to_string(diskSize));
}

std::string CreateDataCenterRequest::getClusterId()const
{
	return clusterId_;
}

void CreateDataCenterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateDataCenterRequest::getDiskType()const
{
	return diskType_;
}

void CreateDataCenterRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

std::string CreateDataCenterRequest::getVswitchId()const
{
	return vswitchId_;
}

void CreateDataCenterRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
}

std::string CreateDataCenterRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateDataCenterRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

bool CreateDataCenterRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateDataCenterRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string CreateDataCenterRequest::getDataCenterName()const
{
	return dataCenterName_;
}

void CreateDataCenterRequest::setDataCenterName(const std::string& dataCenterName)
{
	dataCenterName_ = dataCenterName;
	setParameter("DataCenterName", dataCenterName);
}

int CreateDataCenterRequest::getNodeCount()const
{
	return nodeCount_;
}

void CreateDataCenterRequest::setNodeCount(int nodeCount)
{
	nodeCount_ = nodeCount;
	setParameter("NodeCount", std::to_string(nodeCount));
}

std::string CreateDataCenterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateDataCenterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateDataCenterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDataCenterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDataCenterRequest::getPayType()const
{
	return payType_;
}

void CreateDataCenterRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

