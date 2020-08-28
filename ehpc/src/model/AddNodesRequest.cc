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

#include <alibabacloud/ehpc/model/AddNodesRequest.h>

using AlibabaCloud::EHPC::Model::AddNodesRequest;

AddNodesRequest::AddNodesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "AddNodes")
{
	setMethod(HttpRequest::Method::Get);
}

AddNodesRequest::~AddNodesRequest()
{}

std::string AddNodesRequest::getImageId()const
{
	return imageId_;
}

void AddNodesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string AddNodesRequest::getClientToken()const
{
	return clientToken_;
}

void AddNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

bool AddNodesRequest::getAllocatePublicAddress()const
{
	return allocatePublicAddress_;
}

void AddNodesRequest::setAllocatePublicAddress(bool allocatePublicAddress)
{
	allocatePublicAddress_ = allocatePublicAddress;
	setParameter("AllocatePublicAddress", allocatePublicAddress ? "true" : "false");
}

int AddNodesRequest::getInternetMaxBandWidthOut()const
{
	return internetMaxBandWidthOut_;
}

void AddNodesRequest::setInternetMaxBandWidthOut(int internetMaxBandWidthOut)
{
	internetMaxBandWidthOut_ = internetMaxBandWidthOut;
	setParameter("InternetMaxBandWidthOut", std::to_string(internetMaxBandWidthOut));
}

std::string AddNodesRequest::getJobQueue()const
{
	return jobQueue_;
}

void AddNodesRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setParameter("JobQueue", jobQueue);
}

std::string AddNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddNodesRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void AddNodesRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setParameter("ImageOwnerAlias", imageOwnerAlias);
}

std::string AddNodesRequest::getSystemDiskType()const
{
	return systemDiskType_;
}

void AddNodesRequest::setSystemDiskType(const std::string& systemDiskType)
{
	systemDiskType_ = systemDiskType;
	setParameter("SystemDiskType", systemDiskType);
}

int AddNodesRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void AddNodesRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string AddNodesRequest::getInstanceType()const
{
	return instanceType_;
}

void AddNodesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string AddNodesRequest::getHostNamePrefix()const
{
	return hostNamePrefix_;
}

void AddNodesRequest::setHostNamePrefix(const std::string& hostNamePrefix)
{
	hostNamePrefix_ = hostNamePrefix;
	setParameter("HostNamePrefix", hostNamePrefix);
}

std::string AddNodesRequest::getComputeSpotPriceLimit()const
{
	return computeSpotPriceLimit_;
}

void AddNodesRequest::setComputeSpotPriceLimit(const std::string& computeSpotPriceLimit)
{
	computeSpotPriceLimit_ = computeSpotPriceLimit;
	setParameter("ComputeSpotPriceLimit", computeSpotPriceLimit);
}

int AddNodesRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void AddNodesRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int AddNodesRequest::getPeriod()const
{
	return period_;
}

void AddNodesRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int AddNodesRequest::getCount()const
{
	return count_;
}

void AddNodesRequest::setCount(int count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

std::string AddNodesRequest::getClusterId()const
{
	return clusterId_;
}

void AddNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string AddNodesRequest::getComputeSpotStrategy()const
{
	return computeSpotStrategy_;
}

void AddNodesRequest::setComputeSpotStrategy(const std::string& computeSpotStrategy)
{
	computeSpotStrategy_ = computeSpotStrategy;
	setParameter("ComputeSpotStrategy", computeSpotStrategy);
}

std::string AddNodesRequest::getHostNameSuffix()const
{
	return hostNameSuffix_;
}

void AddNodesRequest::setHostNameSuffix(const std::string& hostNameSuffix)
{
	hostNameSuffix_ = hostNameSuffix;
	setParameter("HostNameSuffix", hostNameSuffix);
}

std::string AddNodesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void AddNodesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string AddNodesRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void AddNodesRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

bool AddNodesRequest::getComputeEnableHt()const
{
	return computeEnableHt_;
}

void AddNodesRequest::setComputeEnableHt(bool computeEnableHt)
{
	computeEnableHt_ = computeEnableHt;
	setParameter("ComputeEnableHt", computeEnableHt ? "true" : "false");
}

std::string AddNodesRequest::getAutoRenew()const
{
	return autoRenew_;
}

void AddNodesRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

std::string AddNodesRequest::getEcsChargeType()const
{
	return ecsChargeType_;
}

void AddNodesRequest::setEcsChargeType(const std::string& ecsChargeType)
{
	ecsChargeType_ = ecsChargeType;
	setParameter("EcsChargeType", ecsChargeType);
}

std::string AddNodesRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void AddNodesRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string AddNodesRequest::getCreateMode()const
{
	return createMode_;
}

void AddNodesRequest::setCreateMode(const std::string& createMode)
{
	createMode_ = createMode;
	setParameter("CreateMode", createMode);
}

std::string AddNodesRequest::getZoneId()const
{
	return zoneId_;
}

void AddNodesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int AddNodesRequest::getInternetMaxBandWidthIn()const
{
	return internetMaxBandWidthIn_;
}

void AddNodesRequest::setInternetMaxBandWidthIn(int internetMaxBandWidthIn)
{
	internetMaxBandWidthIn_ = internetMaxBandWidthIn;
	setParameter("InternetMaxBandWidthIn", std::to_string(internetMaxBandWidthIn));
}

