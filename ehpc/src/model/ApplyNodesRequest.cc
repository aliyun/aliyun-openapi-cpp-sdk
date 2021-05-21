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

#include <alibabacloud/ehpc/model/ApplyNodesRequest.h>

using AlibabaCloud::EHPC::Model::ApplyNodesRequest;

ApplyNodesRequest::ApplyNodesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ApplyNodes")
{
	setMethod(HttpRequest::Method::Get);
}

ApplyNodesRequest::~ApplyNodesRequest()
{}

std::string ApplyNodesRequest::getImageId()const
{
	return imageId_;
}

void ApplyNodesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

int ApplyNodesRequest::getMemory()const
{
	return memory_;
}

void ApplyNodesRequest::setMemory(int memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

std::string ApplyNodesRequest::getSystemDiskLevel()const
{
	return systemDiskLevel_;
}

void ApplyNodesRequest::setSystemDiskLevel(const std::string& systemDiskLevel)
{
	systemDiskLevel_ = systemDiskLevel;
	setParameter("SystemDiskLevel", systemDiskLevel);
}

bool ApplyNodesRequest::getAllocatePublicAddress()const
{
	return allocatePublicAddress_;
}

void ApplyNodesRequest::setAllocatePublicAddress(bool allocatePublicAddress)
{
	allocatePublicAddress_ = allocatePublicAddress;
	setParameter("AllocatePublicAddress", allocatePublicAddress ? "true" : "false");
}

int ApplyNodesRequest::getInternetMaxBandWidthOut()const
{
	return internetMaxBandWidthOut_;
}

void ApplyNodesRequest::setInternetMaxBandWidthOut(int internetMaxBandWidthOut)
{
	internetMaxBandWidthOut_ = internetMaxBandWidthOut;
	setParameter("InternetMaxBandWidthOut", std::to_string(internetMaxBandWidthOut));
}

std::string ApplyNodesRequest::getResourceAmountType()const
{
	return resourceAmountType_;
}

void ApplyNodesRequest::setResourceAmountType(const std::string& resourceAmountType)
{
	resourceAmountType_ = resourceAmountType;
	setParameter("ResourceAmountType", resourceAmountType);
}

bool ApplyNodesRequest::getStrictResourceProvision()const
{
	return strictResourceProvision_;
}

void ApplyNodesRequest::setStrictResourceProvision(bool strictResourceProvision)
{
	strictResourceProvision_ = strictResourceProvision;
	setParameter("StrictResourceProvision", strictResourceProvision ? "true" : "false");
}

std::string ApplyNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ApplyNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ApplyNodesRequest::getSystemDiskType()const
{
	return systemDiskType_;
}

void ApplyNodesRequest::setSystemDiskType(const std::string& systemDiskType)
{
	systemDiskType_ = systemDiskType;
	setParameter("SystemDiskType", systemDiskType);
}

int ApplyNodesRequest::getCores()const
{
	return cores_;
}

void ApplyNodesRequest::setCores(int cores)
{
	cores_ = cores;
	setParameter("Cores", std::to_string(cores));
}

int ApplyNodesRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void ApplyNodesRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::vector<ApplyNodesRequest::ZoneInfos> ApplyNodesRequest::getZoneInfos()const
{
	return zoneInfos_;
}

void ApplyNodesRequest::setZoneInfos(const std::vector<ZoneInfos>& zoneInfos)
{
	zoneInfos_ = zoneInfos;
	for(int dep1 = 0; dep1!= zoneInfos.size(); dep1++) {
		auto zoneInfosObj = zoneInfos.at(dep1);
		std::string zoneInfosObjStr = "ZoneInfos." + std::to_string(dep1 + 1);
		setParameter(zoneInfosObjStr + ".VSwitchId", zoneInfosObj.vSwitchId);
		setParameter(zoneInfosObjStr + ".ZoneId", zoneInfosObj.zoneId);
	}
}

std::string ApplyNodesRequest::getHostNamePrefix()const
{
	return hostNamePrefix_;
}

void ApplyNodesRequest::setHostNamePrefix(const std::string& hostNamePrefix)
{
	hostNamePrefix_ = hostNamePrefix;
	setParameter("HostNamePrefix", hostNamePrefix);
}

float ApplyNodesRequest::getComputeSpotPriceLimit()const
{
	return computeSpotPriceLimit_;
}

void ApplyNodesRequest::setComputeSpotPriceLimit(float computeSpotPriceLimit)
{
	computeSpotPriceLimit_ = computeSpotPriceLimit;
	setParameter("ComputeSpotPriceLimit", std::to_string(computeSpotPriceLimit));
}

std::string ApplyNodesRequest::getClusterId()const
{
	return clusterId_;
}

void ApplyNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ApplyNodesRequest::getComputeSpotStrategy()const
{
	return computeSpotStrategy_;
}

void ApplyNodesRequest::setComputeSpotStrategy(const std::string& computeSpotStrategy)
{
	computeSpotStrategy_ = computeSpotStrategy;
	setParameter("ComputeSpotStrategy", computeSpotStrategy);
}

std::string ApplyNodesRequest::getHostNameSuffix()const
{
	return hostNameSuffix_;
}

void ApplyNodesRequest::setHostNameSuffix(const std::string& hostNameSuffix)
{
	hostNameSuffix_ = hostNameSuffix;
	setParameter("HostNameSuffix", hostNameSuffix);
}

std::string ApplyNodesRequest::getPriorityStrategy()const
{
	return priorityStrategy_;
}

void ApplyNodesRequest::setPriorityStrategy(const std::string& priorityStrategy)
{
	priorityStrategy_ = priorityStrategy;
	setParameter("PriorityStrategy", priorityStrategy);
}

std::string ApplyNodesRequest::getInstanceFamilyLevel()const
{
	return instanceFamilyLevel_;
}

void ApplyNodesRequest::setInstanceFamilyLevel(const std::string& instanceFamilyLevel)
{
	instanceFamilyLevel_ = instanceFamilyLevel;
	setParameter("InstanceFamilyLevel", instanceFamilyLevel);
}

std::string ApplyNodesRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ApplyNodesRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::vector<ApplyNodesRequest::InstanceTypeModel> ApplyNodesRequest::getInstanceTypeModel()const
{
	return instanceTypeModel_;
}

void ApplyNodesRequest::setInstanceTypeModel(const std::vector<InstanceTypeModel>& instanceTypeModel)
{
	instanceTypeModel_ = instanceTypeModel;
	for(int dep1 = 0; dep1!= instanceTypeModel.size(); dep1++) {
		auto instanceTypeModelObj = instanceTypeModel.at(dep1);
		std::string instanceTypeModelObjStr = "InstanceTypeModel." + std::to_string(dep1 + 1);
		setParameter(instanceTypeModelObjStr + ".MaxPrice", std::to_string(instanceTypeModelObj.maxPrice));
		setParameter(instanceTypeModelObjStr + ".TargetImageId", instanceTypeModelObj.targetImageId);
		setParameter(instanceTypeModelObjStr + ".InstanceType", instanceTypeModelObj.instanceType);
	}
}

int ApplyNodesRequest::getInternetMaxBandWidthIn()const
{
	return internetMaxBandWidthIn_;
}

void ApplyNodesRequest::setInternetMaxBandWidthIn(int internetMaxBandWidthIn)
{
	internetMaxBandWidthIn_ = internetMaxBandWidthIn;
	setParameter("InternetMaxBandWidthIn", std::to_string(internetMaxBandWidthIn));
}

int ApplyNodesRequest::getTargetCapacity()const
{
	return targetCapacity_;
}

void ApplyNodesRequest::setTargetCapacity(int targetCapacity)
{
	targetCapacity_ = targetCapacity;
	setParameter("TargetCapacity", std::to_string(targetCapacity));
}

bool ApplyNodesRequest::getStrictSatisfiedTargetCapacity()const
{
	return strictSatisfiedTargetCapacity_;
}

void ApplyNodesRequest::setStrictSatisfiedTargetCapacity(bool strictSatisfiedTargetCapacity)
{
	strictSatisfiedTargetCapacity_ = strictSatisfiedTargetCapacity;
	setParameter("StrictSatisfiedTargetCapacity", strictSatisfiedTargetCapacity ? "true" : "false");
}

