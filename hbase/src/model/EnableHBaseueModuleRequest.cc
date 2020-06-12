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

#include <alibabacloud/hbase/model/EnableHBaseueModuleRequest.h>

using AlibabaCloud::HBase::Model::EnableHBaseueModuleRequest;

EnableHBaseueModuleRequest::EnableHBaseueModuleRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "EnableHBaseueModule")
{
	setMethod(HttpRequest::Method::Post);
}

EnableHBaseueModuleRequest::~EnableHBaseueModuleRequest()
{}

std::string EnableHBaseueModuleRequest::getClientToken()const
{
	return clientToken_;
}

void EnableHBaseueModuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string EnableHBaseueModuleRequest::getModuleTypeName()const
{
	return moduleTypeName_;
}

void EnableHBaseueModuleRequest::setModuleTypeName(const std::string& moduleTypeName)
{
	moduleTypeName_ = moduleTypeName;
	setParameter("ModuleTypeName", moduleTypeName);
}

std::string EnableHBaseueModuleRequest::getRegionId()const
{
	return regionId_;
}

void EnableHBaseueModuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string EnableHBaseueModuleRequest::getHbaseueClusterId()const
{
	return hbaseueClusterId_;
}

void EnableHBaseueModuleRequest::setHbaseueClusterId(const std::string& hbaseueClusterId)
{
	hbaseueClusterId_ = hbaseueClusterId;
	setParameter("HbaseueClusterId", hbaseueClusterId);
}

std::string EnableHBaseueModuleRequest::getBdsId()const
{
	return bdsId_;
}

void EnableHBaseueModuleRequest::setBdsId(const std::string& bdsId)
{
	bdsId_ = bdsId;
	setParameter("BdsId", bdsId);
}

std::string EnableHBaseueModuleRequest::getModuleClusterName()const
{
	return moduleClusterName_;
}

void EnableHBaseueModuleRequest::setModuleClusterName(const std::string& moduleClusterName)
{
	moduleClusterName_ = moduleClusterName;
	setParameter("ModuleClusterName", moduleClusterName);
}

int EnableHBaseueModuleRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void EnableHBaseueModuleRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int EnableHBaseueModuleRequest::getPeriod()const
{
	return period_;
}

void EnableHBaseueModuleRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int EnableHBaseueModuleRequest::getDiskSize()const
{
	return diskSize_;
}

void EnableHBaseueModuleRequest::setDiskSize(int diskSize)
{
	diskSize_ = diskSize;
	setParameter("DiskSize", std::to_string(diskSize));
}

std::string EnableHBaseueModuleRequest::getMasterInstanceType()const
{
	return masterInstanceType_;
}

void EnableHBaseueModuleRequest::setMasterInstanceType(const std::string& masterInstanceType)
{
	masterInstanceType_ = masterInstanceType;
	setParameter("MasterInstanceType", masterInstanceType);
}

std::string EnableHBaseueModuleRequest::getDiskType()const
{
	return diskType_;
}

void EnableHBaseueModuleRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

std::string EnableHBaseueModuleRequest::getVswitchId()const
{
	return vswitchId_;
}

void EnableHBaseueModuleRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setParameter("VswitchId", vswitchId);
}

std::string EnableHBaseueModuleRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void EnableHBaseueModuleRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string EnableHBaseueModuleRequest::getCoreInstanceType()const
{
	return coreInstanceType_;
}

void EnableHBaseueModuleRequest::setCoreInstanceType(const std::string& coreInstanceType)
{
	coreInstanceType_ = coreInstanceType;
	setParameter("CoreInstanceType", coreInstanceType);
}

std::string EnableHBaseueModuleRequest::getVpcId()const
{
	return vpcId_;
}

void EnableHBaseueModuleRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

int EnableHBaseueModuleRequest::getNodeCount()const
{
	return nodeCount_;
}

void EnableHBaseueModuleRequest::setNodeCount(int nodeCount)
{
	nodeCount_ = nodeCount;
	setParameter("NodeCount", std::to_string(nodeCount));
}

std::string EnableHBaseueModuleRequest::getZoneId()const
{
	return zoneId_;
}

void EnableHBaseueModuleRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string EnableHBaseueModuleRequest::getPayType()const
{
	return payType_;
}

void EnableHBaseueModuleRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

