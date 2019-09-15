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
{}

AddNodesRequest::~AddNodesRequest()
{}

std::string AddNodesRequest::getImageId()const
{
	return imageId_;
}

void AddNodesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string AddNodesRequest::getJobQueue()const
{
	return jobQueue_;
}

void AddNodesRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setCoreParameter("JobQueue", jobQueue);
}

std::string AddNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddNodesRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void AddNodesRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setCoreParameter("ImageOwnerAlias", imageOwnerAlias);
}

std::string AddNodesRequest::getSystemDiskType()const
{
	return systemDiskType_;
}

void AddNodesRequest::setSystemDiskType(const std::string& systemDiskType)
{
	systemDiskType_ = systemDiskType;
	setCoreParameter("SystemDiskType", systemDiskType);
}

int AddNodesRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void AddNodesRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string AddNodesRequest::getInstanceType()const
{
	return instanceType_;
}

void AddNodesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string AddNodesRequest::getComputeSpotPriceLimit()const
{
	return computeSpotPriceLimit_;
}

void AddNodesRequest::setComputeSpotPriceLimit(const std::string& computeSpotPriceLimit)
{
	computeSpotPriceLimit_ = computeSpotPriceLimit;
	setCoreParameter("ComputeSpotPriceLimit", computeSpotPriceLimit);
}

int AddNodesRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void AddNodesRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setCoreParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int AddNodesRequest::getPeriod()const
{
	return period_;
}

void AddNodesRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

int AddNodesRequest::getCount()const
{
	return count_;
}

void AddNodesRequest::setCount(int count)
{
	count_ = count;
	setCoreParameter("Count", std::to_string(count));
}

std::string AddNodesRequest::getClusterId()const
{
	return clusterId_;
}

void AddNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string AddNodesRequest::getComputeSpotStrategy()const
{
	return computeSpotStrategy_;
}

void AddNodesRequest::setComputeSpotStrategy(const std::string& computeSpotStrategy)
{
	computeSpotStrategy_ = computeSpotStrategy;
	setCoreParameter("ComputeSpotStrategy", computeSpotStrategy);
}

std::string AddNodesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void AddNodesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string AddNodesRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void AddNodesRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string AddNodesRequest::getAutoRenew()const
{
	return autoRenew_;
}

void AddNodesRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::string AddNodesRequest::getEcsChargeType()const
{
	return ecsChargeType_;
}

void AddNodesRequest::setEcsChargeType(const std::string& ecsChargeType)
{
	ecsChargeType_ = ecsChargeType;
	setCoreParameter("EcsChargeType", ecsChargeType);
}

std::string AddNodesRequest::getCreateMode()const
{
	return createMode_;
}

void AddNodesRequest::setCreateMode(const std::string& createMode)
{
	createMode_ = createMode;
	setCoreParameter("CreateMode", createMode);
}

std::string AddNodesRequest::getZoneId()const
{
	return zoneId_;
}

void AddNodesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

