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

#include <alibabacloud/ess/model/DescribePatternTypesRequest.h>

using AlibabaCloud::Ess::Model::DescribePatternTypesRequest;

DescribePatternTypesRequest::DescribePatternTypesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribePatternTypes") {
  setMethod(HttpRequest::Method::Get);
}

DescribePatternTypesRequest::~DescribePatternTypesRequest() {}

int DescribePatternTypesRequest::getMaximumCpuCoreCount() const {
  return maximumCpuCoreCount_;
}

void DescribePatternTypesRequest::setMaximumCpuCoreCount(int maximumCpuCoreCount) {
  maximumCpuCoreCount_ = maximumCpuCoreCount;
  setParameter(std::string("MaximumCpuCoreCount"), std::to_string(maximumCpuCoreCount));
}

int DescribePatternTypesRequest::getMaximumGpuAmount() const {
  return maximumGpuAmount_;
}

void DescribePatternTypesRequest::setMaximumGpuAmount(int maximumGpuAmount) {
  maximumGpuAmount_ = maximumGpuAmount;
  setParameter(std::string("MaximumGpuAmount"), std::to_string(maximumGpuAmount));
}

float DescribePatternTypesRequest::getMaximumMemorySize() const {
  return maximumMemorySize_;
}

void DescribePatternTypesRequest::setMaximumMemorySize(float maximumMemorySize) {
  maximumMemorySize_ = maximumMemorySize;
  setParameter(std::string("MaximumMemorySize"), std::to_string(maximumMemorySize));
}

int DescribePatternTypesRequest::getMinimumCpuCoreCount() const {
  return minimumCpuCoreCount_;
}

void DescribePatternTypesRequest::setMinimumCpuCoreCount(int minimumCpuCoreCount) {
  minimumCpuCoreCount_ = minimumCpuCoreCount;
  setParameter(std::string("MinimumCpuCoreCount"), std::to_string(minimumCpuCoreCount));
}

int DescribePatternTypesRequest::getCores() const {
  return cores_;
}

void DescribePatternTypesRequest::setCores(int cores) {
  cores_ = cores;
  setParameter(std::string("Cores"), std::to_string(cores));
}

std::vector<std::string> DescribePatternTypesRequest::getInstanceTypeFamilies() const {
  return instanceTypeFamilies_;
}

void DescribePatternTypesRequest::setInstanceTypeFamilies(const std::vector<std::string> &instanceTypeFamilies) {
  instanceTypeFamilies_ = instanceTypeFamilies;
}

int DescribePatternTypesRequest::getMinimumBaselineCredit() const {
  return minimumBaselineCredit_;
}

void DescribePatternTypesRequest::setMinimumBaselineCredit(int minimumBaselineCredit) {
  minimumBaselineCredit_ = minimumBaselineCredit;
  setParameter(std::string("MinimumBaselineCredit"), std::to_string(minimumBaselineCredit));
}

std::vector<std::string> DescribePatternTypesRequest::getCpuArchitectures() const {
  return cpuArchitectures_;
}

void DescribePatternTypesRequest::setCpuArchitectures(const std::vector<std::string> &cpuArchitectures) {
  cpuArchitectures_ = cpuArchitectures;
}

std::vector<std::string> DescribePatternTypesRequest::getInstanceCategories() const {
  return instanceCategories_;
}

void DescribePatternTypesRequest::setInstanceCategories(const std::vector<std::string> &instanceCategories) {
  instanceCategories_ = instanceCategories;
}

float DescribePatternTypesRequest::getMaxPrice() const {
  return maxPrice_;
}

void DescribePatternTypesRequest::setMaxPrice(float maxPrice) {
  maxPrice_ = maxPrice;
  setParameter(std::string("MaxPrice"), std::to_string(maxPrice));
}

int DescribePatternTypesRequest::getMinimumGpuAmount() const {
  return minimumGpuAmount_;
}

void DescribePatternTypesRequest::setMinimumGpuAmount(int minimumGpuAmount) {
  minimumGpuAmount_ = minimumGpuAmount;
  setParameter(std::string("MinimumGpuAmount"), std::to_string(minimumGpuAmount));
}

std::string DescribePatternTypesRequest::getBurstablePerformance() const {
  return burstablePerformance_;
}

void DescribePatternTypesRequest::setBurstablePerformance(const std::string &burstablePerformance) {
  burstablePerformance_ = burstablePerformance;
  setParameter(std::string("BurstablePerformance"), burstablePerformance);
}

std::vector<std::string> DescribePatternTypesRequest::getPhysicalProcessorModels() const {
  return physicalProcessorModels_;
}

void DescribePatternTypesRequest::setPhysicalProcessorModels(const std::vector<std::string> &physicalProcessorModels) {
  physicalProcessorModels_ = physicalProcessorModels;
}

std::string DescribePatternTypesRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void DescribePatternTypesRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::vector<std::string> DescribePatternTypesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribePatternTypesRequest::setVSwitchId(const std::vector<std::string> &vSwitchId) {
  vSwitchId_ = vSwitchId;
}

int DescribePatternTypesRequest::getMinimumEniQuantity() const {
  return minimumEniQuantity_;
}

void DescribePatternTypesRequest::setMinimumEniQuantity(int minimumEniQuantity) {
  minimumEniQuantity_ = minimumEniQuantity;
  setParameter(std::string("MinimumEniQuantity"), std::to_string(minimumEniQuantity));
}

float DescribePatternTypesRequest::getMinimumMemorySize() const {
  return minimumMemorySize_;
}

void DescribePatternTypesRequest::setMinimumMemorySize(float minimumMemorySize) {
  minimumMemorySize_ = minimumMemorySize;
  setParameter(std::string("MinimumMemorySize"), std::to_string(minimumMemorySize));
}

std::string DescribePatternTypesRequest::getInstanceFamilyLevel() const {
  return instanceFamilyLevel_;
}

void DescribePatternTypesRequest::setInstanceFamilyLevel(const std::string &instanceFamilyLevel) {
  instanceFamilyLevel_ = instanceFamilyLevel;
  setParameter(std::string("InstanceFamilyLevel"), instanceFamilyLevel);
}

std::vector<std::string> DescribePatternTypesRequest::getZoneId() const {
  return zoneId_;
}

void DescribePatternTypesRequest::setZoneId(const std::vector<std::string> &zoneId) {
  zoneId_ = zoneId;
}

std::vector<float> DescribePatternTypesRequest::getMemoryList() const {
  return memoryList_;
}

void DescribePatternTypesRequest::setMemoryList(const std::vector<float> &memoryList) {
  memoryList_ = memoryList;
}

float DescribePatternTypesRequest::getMemory() const {
  return memory_;
}

void DescribePatternTypesRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

int DescribePatternTypesRequest::getMinimumEniIpv6AddressQuantity() const {
  return minimumEniIpv6AddressQuantity_;
}

void DescribePatternTypesRequest::setMinimumEniIpv6AddressQuantity(int minimumEniIpv6AddressQuantity) {
  minimumEniIpv6AddressQuantity_ = minimumEniIpv6AddressQuantity;
  setParameter(std::string("MinimumEniIpv6AddressQuantity"), std::to_string(minimumEniIpv6AddressQuantity));
}

std::string DescribePatternTypesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePatternTypesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<int> DescribePatternTypesRequest::getCoresList() const {
  return coresList_;
}

void DescribePatternTypesRequest::setCoresList(const std::vector<int> &coresList) {
  coresList_ = coresList;
}

std::string DescribePatternTypesRequest::getRegionId() const {
  return regionId_;
}

void DescribePatternTypesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> DescribePatternTypesRequest::getArchitecture() const {
  return architecture_;
}

void DescribePatternTypesRequest::setArchitecture(const std::vector<std::string> &architecture) {
  architecture_ = architecture;
}

int DescribePatternTypesRequest::getMinimumInitialCredit() const {
  return minimumInitialCredit_;
}

void DescribePatternTypesRequest::setMinimumInitialCredit(int minimumInitialCredit) {
  minimumInitialCredit_ = minimumInitialCredit;
  setParameter(std::string("MinimumInitialCredit"), std::to_string(minimumInitialCredit));
}

std::vector<std::string> DescribePatternTypesRequest::getExcludedInstanceType() const {
  return excludedInstanceType_;
}

void DescribePatternTypesRequest::setExcludedInstanceType(const std::vector<std::string> &excludedInstanceType) {
  excludedInstanceType_ = excludedInstanceType;
}

int DescribePatternTypesRequest::getMinimumEniPrivateIpAddressQuantity() const {
  return minimumEniPrivateIpAddressQuantity_;
}

void DescribePatternTypesRequest::setMinimumEniPrivateIpAddressQuantity(int minimumEniPrivateIpAddressQuantity) {
  minimumEniPrivateIpAddressQuantity_ = minimumEniPrivateIpAddressQuantity;
  setParameter(std::string("MinimumEniPrivateIpAddressQuantity"), std::to_string(minimumEniPrivateIpAddressQuantity));
}

std::vector<std::string> DescribePatternTypesRequest::getGpuSpecs() const {
  return gpuSpecs_;
}

void DescribePatternTypesRequest::setGpuSpecs(const std::vector<std::string> &gpuSpecs) {
  gpuSpecs_ = gpuSpecs;
}

long DescribePatternTypesRequest::getChannelId() const {
  return channelId_;
}

void DescribePatternTypesRequest::setChannelId(long channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), std::to_string(channelId));
}

