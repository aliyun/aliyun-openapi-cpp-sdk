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

#include <alibabacloud/ecs/model/DescribeInstanceTypesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceTypesRequest;

DescribeInstanceTypesRequest::DescribeInstanceTypesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceTypes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceTypesRequest::~DescribeInstanceTypesRequest() {}

std::string DescribeInstanceTypesRequest::getGPUSpec() const {
  return gPUSpec_;
}

void DescribeInstanceTypesRequest::setGPUSpec(const std::string &gPUSpec) {
  gPUSpec_ = gPUSpec;
  setParameter(std::string("GPUSpec"), gPUSpec);
}

long DescribeInstanceTypesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceTypesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeInstanceTypesRequest::getMaximumCpuCoreCount() const {
  return maximumCpuCoreCount_;
}

void DescribeInstanceTypesRequest::setMaximumCpuCoreCount(int maximumCpuCoreCount) {
  maximumCpuCoreCount_ = maximumCpuCoreCount;
  setParameter(std::string("MaximumCpuCoreCount"), std::to_string(maximumCpuCoreCount));
}

int DescribeInstanceTypesRequest::getMaximumGPUAmount() const {
  return maximumGPUAmount_;
}

void DescribeInstanceTypesRequest::setMaximumGPUAmount(int maximumGPUAmount) {
  maximumGPUAmount_ = maximumGPUAmount;
  setParameter(std::string("MaximumGPUAmount"), std::to_string(maximumGPUAmount));
}

std::string DescribeInstanceTypesRequest::getLocalStorageCategory() const {
  return localStorageCategory_;
}

void DescribeInstanceTypesRequest::setLocalStorageCategory(const std::string &localStorageCategory) {
  localStorageCategory_ = localStorageCategory;
  setParameter(std::string("LocalStorageCategory"), localStorageCategory);
}

bool DescribeInstanceTypesRequest::getSupportHotModify() const {
  return supportHotModify_;
}

void DescribeInstanceTypesRequest::setSupportHotModify(bool supportHotModify) {
  supportHotModify_ = supportHotModify;
  setParameter(std::string("SupportHotModify"), supportHotModify ? "true" : "false");
}

float DescribeInstanceTypesRequest::getMaximumMemorySize() const {
  return maximumMemorySize_;
}

void DescribeInstanceTypesRequest::setMaximumMemorySize(float maximumMemorySize) {
  maximumMemorySize_ = maximumMemorySize;
  setParameter(std::string("MaximumMemorySize"), std::to_string(maximumMemorySize));
}

std::string DescribeInstanceTypesRequest::getInstanceCategory() const {
  return instanceCategory_;
}

void DescribeInstanceTypesRequest::setInstanceCategory(const std::string &instanceCategory) {
  instanceCategory_ = instanceCategory;
  setParameter(std::string("InstanceCategory"), instanceCategory);
}

long DescribeInstanceTypesRequest::getMinimumInstancePpsTx() const {
  return minimumInstancePpsTx_;
}

void DescribeInstanceTypesRequest::setMinimumInstancePpsTx(long minimumInstancePpsTx) {
  minimumInstancePpsTx_ = minimumInstancePpsTx;
  setParameter(std::string("MinimumInstancePpsTx"), std::to_string(minimumInstancePpsTx));
}

int DescribeInstanceTypesRequest::getMinimumCpuCoreCount() const {
  return minimumCpuCoreCount_;
}

void DescribeInstanceTypesRequest::setMinimumCpuCoreCount(int minimumCpuCoreCount) {
  minimumCpuCoreCount_ = minimumCpuCoreCount;
  setParameter(std::string("MinimumCpuCoreCount"), std::to_string(minimumCpuCoreCount));
}

std::vector<std::string> DescribeInstanceTypesRequest::getLocalStorageCategories() const {
  return localStorageCategories_;
}

void DescribeInstanceTypesRequest::setLocalStorageCategories(const std::vector<std::string> &localStorageCategories) {
  localStorageCategories_ = localStorageCategories;
}

int DescribeInstanceTypesRequest::getMinimumPrimaryEniQueueNumber() const {
  return minimumPrimaryEniQueueNumber_;
}

void DescribeInstanceTypesRequest::setMinimumPrimaryEniQueueNumber(int minimumPrimaryEniQueueNumber) {
  minimumPrimaryEniQueueNumber_ = minimumPrimaryEniQueueNumber;
  setParameter(std::string("MinimumPrimaryEniQueueNumber"), std::to_string(minimumPrimaryEniQueueNumber));
}

std::vector<std::string> DescribeInstanceTypesRequest::getInstanceTypeFamilies() const {
  return instanceTypeFamilies_;
}

void DescribeInstanceTypesRequest::setInstanceTypeFamilies(const std::vector<std::string> &instanceTypeFamilies) {
  instanceTypeFamilies_ = instanceTypeFamilies;
}

int DescribeInstanceTypesRequest::getMinimumBaselineCredit() const {
  return minimumBaselineCredit_;
}

void DescribeInstanceTypesRequest::setMinimumBaselineCredit(int minimumBaselineCredit) {
  minimumBaselineCredit_ = minimumBaselineCredit;
  setParameter(std::string("MinimumBaselineCredit"), std::to_string(minimumBaselineCredit));
}

int DescribeInstanceTypesRequest::getMinimumSecondaryEniQueueNumber() const {
  return minimumSecondaryEniQueueNumber_;
}

void DescribeInstanceTypesRequest::setMinimumSecondaryEniQueueNumber(int minimumSecondaryEniQueueNumber) {
  minimumSecondaryEniQueueNumber_ = minimumSecondaryEniQueueNumber;
  setParameter(std::string("MinimumSecondaryEniQueueNumber"), std::to_string(minimumSecondaryEniQueueNumber));
}

std::vector<std::string> DescribeInstanceTypesRequest::getCpuArchitectures() const {
  return cpuArchitectures_;
}

void DescribeInstanceTypesRequest::setCpuArchitectures(const std::vector<std::string> &cpuArchitectures) {
  cpuArchitectures_ = cpuArchitectures;
}

int DescribeInstanceTypesRequest::getMinimumInstanceBandwidthTx() const {
  return minimumInstanceBandwidthTx_;
}

void DescribeInstanceTypesRequest::setMinimumInstanceBandwidthTx(int minimumInstanceBandwidthTx) {
  minimumInstanceBandwidthTx_ = minimumInstanceBandwidthTx;
  setParameter(std::string("MinimumInstanceBandwidthTx"), std::to_string(minimumInstanceBandwidthTx));
}

std::vector<std::string> DescribeInstanceTypesRequest::getInstanceCategories() const {
  return instanceCategories_;
}

void DescribeInstanceTypesRequest::setInstanceCategories(const std::vector<std::string> &instanceCategories) {
  instanceCategories_ = instanceCategories;
}

int DescribeInstanceTypesRequest::getMinimumGPUAmount() const {
  return minimumGPUAmount_;
}

void DescribeInstanceTypesRequest::setMinimumGPUAmount(int minimumGPUAmount) {
  minimumGPUAmount_ = minimumGPUAmount;
  setParameter(std::string("MinimumGPUAmount"), std::to_string(minimumGPUAmount));
}

float DescribeInstanceTypesRequest::getMaximumCpuSpeedFrequency() const {
  return maximumCpuSpeedFrequency_;
}

void DescribeInstanceTypesRequest::setMaximumCpuSpeedFrequency(float maximumCpuSpeedFrequency) {
  maximumCpuSpeedFrequency_ = maximumCpuSpeedFrequency;
  setParameter(std::string("MaximumCpuSpeedFrequency"), std::to_string(maximumCpuSpeedFrequency));
}

std::string DescribeInstanceTypesRequest::getCpuArchitecture() const {
  return cpuArchitecture_;
}

void DescribeInstanceTypesRequest::setCpuArchitecture(const std::string &cpuArchitecture) {
  cpuArchitecture_ = cpuArchitecture;
  setParameter(std::string("CpuArchitecture"), cpuArchitecture);
}

long DescribeInstanceTypesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceTypesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeInstanceTypesRequest::getPhysicalProcessorModels() const {
  return physicalProcessorModels_;
}

void DescribeInstanceTypesRequest::setPhysicalProcessorModels(const std::vector<std::string> &physicalProcessorModels) {
  physicalProcessorModels_ = physicalProcessorModels;
}

float DescribeInstanceTypesRequest::getMinimumMemorySize() const {
  return minimumMemorySize_;
}

void DescribeInstanceTypesRequest::setMinimumMemorySize(float minimumMemorySize) {
  minimumMemorySize_ = minimumMemorySize;
  setParameter(std::string("MinimumMemorySize"), std::to_string(minimumMemorySize));
}

int DescribeInstanceTypesRequest::getMinimumEniQuantity() const {
  return minimumEniQuantity_;
}

void DescribeInstanceTypesRequest::setMinimumEniQuantity(int minimumEniQuantity) {
  minimumEniQuantity_ = minimumEniQuantity;
  setParameter(std::string("MinimumEniQuantity"), std::to_string(minimumEniQuantity));
}

std::string DescribeInstanceTypesRequest::getInstanceFamilyLevel() const {
  return instanceFamilyLevel_;
}

void DescribeInstanceTypesRequest::setInstanceFamilyLevel(const std::string &instanceFamilyLevel) {
  instanceFamilyLevel_ = instanceFamilyLevel;
  setParameter(std::string("InstanceFamilyLevel"), instanceFamilyLevel);
}

int DescribeInstanceTypesRequest::getMinimumQueuePairNumber() const {
  return minimumQueuePairNumber_;
}

void DescribeInstanceTypesRequest::setMinimumQueuePairNumber(int minimumQueuePairNumber) {
  minimumQueuePairNumber_ = minimumQueuePairNumber;
  setParameter(std::string("MinimumQueuePairNumber"), std::to_string(minimumQueuePairNumber));
}

int DescribeInstanceTypesRequest::getMinimumLocalStorageAmount() const {
  return minimumLocalStorageAmount_;
}

void DescribeInstanceTypesRequest::setMinimumLocalStorageAmount(int minimumLocalStorageAmount) {
  minimumLocalStorageAmount_ = minimumLocalStorageAmount;
  setParameter(std::string("MinimumLocalStorageAmount"), std::to_string(minimumLocalStorageAmount));
}

long DescribeInstanceTypesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInstanceTypesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeInstanceTypesRequest::getPhysicalProcessorModel() const {
  return physicalProcessorModel_;
}

void DescribeInstanceTypesRequest::setPhysicalProcessorModel(const std::string &physicalProcessorModel) {
  physicalProcessorModel_ = physicalProcessorModel;
  setParameter(std::string("PhysicalProcessorModel"), physicalProcessorModel);
}

float DescribeInstanceTypesRequest::getMaximumCpuTurboFrequency() const {
  return maximumCpuTurboFrequency_;
}

void DescribeInstanceTypesRequest::setMaximumCpuTurboFrequency(float maximumCpuTurboFrequency) {
  maximumCpuTurboFrequency_ = maximumCpuTurboFrequency;
  setParameter(std::string("MaximumCpuTurboFrequency"), std::to_string(maximumCpuTurboFrequency));
}

std::vector<std::string> DescribeInstanceTypesRequest::getInstanceTypes() const {
  return instanceTypes_;
}

void DescribeInstanceTypesRequest::setInstanceTypes(const std::vector<std::string> &instanceTypes) {
  instanceTypes_ = instanceTypes;
}

long DescribeInstanceTypesRequest::getMinimumInstancePpsRx() const {
  return minimumInstancePpsRx_;
}

void DescribeInstanceTypesRequest::setMinimumInstancePpsRx(long minimumInstancePpsRx) {
  minimumInstancePpsRx_ = minimumInstancePpsRx;
  setParameter(std::string("MinimumInstancePpsRx"), std::to_string(minimumInstancePpsRx));
}

int DescribeInstanceTypesRequest::getMinimumEniIpv6AddressQuantity() const {
  return minimumEniIpv6AddressQuantity_;
}

void DescribeInstanceTypesRequest::setMinimumEniIpv6AddressQuantity(int minimumEniIpv6AddressQuantity) {
  minimumEniIpv6AddressQuantity_ = minimumEniIpv6AddressQuantity;
  setParameter(std::string("MinimumEniIpv6AddressQuantity"), std::to_string(minimumEniIpv6AddressQuantity));
}

int DescribeInstanceTypesRequest::getMinimumEriQuantity() const {
  return minimumEriQuantity_;
}

void DescribeInstanceTypesRequest::setMinimumEriQuantity(int minimumEriQuantity) {
  minimumEriQuantity_ = minimumEriQuantity;
  setParameter(std::string("MinimumEriQuantity"), std::to_string(minimumEriQuantity));
}

int DescribeInstanceTypesRequest::getMinimumDiskQuantity() const {
  return minimumDiskQuantity_;
}

void DescribeInstanceTypesRequest::setMinimumDiskQuantity(int minimumDiskQuantity) {
  minimumDiskQuantity_ = minimumDiskQuantity;
  setParameter(std::string("MinimumDiskQuantity"), std::to_string(minimumDiskQuantity));
}

float DescribeInstanceTypesRequest::getMinimumCpuTurboFrequency() const {
  return minimumCpuTurboFrequency_;
}

void DescribeInstanceTypesRequest::setMinimumCpuTurboFrequency(float minimumCpuTurboFrequency) {
  minimumCpuTurboFrequency_ = minimumCpuTurboFrequency;
  setParameter(std::string("MinimumCpuTurboFrequency"), std::to_string(minimumCpuTurboFrequency));
}

std::string DescribeInstanceTypesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInstanceTypesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeInstanceTypesRequest::getMinimumInstanceBandwidthRx() const {
  return minimumInstanceBandwidthRx_;
}

void DescribeInstanceTypesRequest::setMinimumInstanceBandwidthRx(int minimumInstanceBandwidthRx) {
  minimumInstanceBandwidthRx_ = minimumInstanceBandwidthRx;
  setParameter(std::string("MinimumInstanceBandwidthRx"), std::to_string(minimumInstanceBandwidthRx));
}

float DescribeInstanceTypesRequest::getMinimumCpuSpeedFrequency() const {
  return minimumCpuSpeedFrequency_;
}

void DescribeInstanceTypesRequest::setMinimumCpuSpeedFrequency(float minimumCpuSpeedFrequency) {
  minimumCpuSpeedFrequency_ = minimumCpuSpeedFrequency;
  setParameter(std::string("MinimumCpuSpeedFrequency"), std::to_string(minimumCpuSpeedFrequency));
}

std::string DescribeInstanceTypesRequest::getNvmeSupport() const {
  return nvmeSupport_;
}

void DescribeInstanceTypesRequest::setNvmeSupport(const std::string &nvmeSupport) {
  nvmeSupport_ = nvmeSupport;
  setParameter(std::string("NvmeSupport"), nvmeSupport);
}

std::string DescribeInstanceTypesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceTypesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceTypesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceTypesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int DescribeInstanceTypesRequest::getMinimumInitialCredit() const {
  return minimumInitialCredit_;
}

void DescribeInstanceTypesRequest::setMinimumInitialCredit(int minimumInitialCredit) {
  minimumInitialCredit_ = minimumInitialCredit;
  setParameter(std::string("MinimumInitialCredit"), std::to_string(minimumInitialCredit));
}

std::string DescribeInstanceTypesRequest::getInstanceTypeFamily() const {
  return instanceTypeFamily_;
}

void DescribeInstanceTypesRequest::setInstanceTypeFamily(const std::string &instanceTypeFamily) {
  instanceTypeFamily_ = instanceTypeFamily;
  setParameter(std::string("InstanceTypeFamily"), instanceTypeFamily);
}

int DescribeInstanceTypesRequest::getMinimumEniPrivateIpAddressQuantity() const {
  return minimumEniPrivateIpAddressQuantity_;
}

void DescribeInstanceTypesRequest::setMinimumEniPrivateIpAddressQuantity(int minimumEniPrivateIpAddressQuantity) {
  minimumEniPrivateIpAddressQuantity_ = minimumEniPrivateIpAddressQuantity;
  setParameter(std::string("MinimumEniPrivateIpAddressQuantity"), std::to_string(minimumEniPrivateIpAddressQuantity));
}

std::vector<std::string> DescribeInstanceTypesRequest::getGpuSpecs() const {
  return gpuSpecs_;
}

void DescribeInstanceTypesRequest::setGpuSpecs(const std::vector<std::string> &gpuSpecs) {
  gpuSpecs_ = gpuSpecs;
}

long DescribeInstanceTypesRequest::getMinimumLocalStorageCapacity() const {
  return minimumLocalStorageCapacity_;
}

void DescribeInstanceTypesRequest::setMinimumLocalStorageCapacity(long minimumLocalStorageCapacity) {
  minimumLocalStorageCapacity_ = minimumLocalStorageCapacity;
  setParameter(std::string("MinimumLocalStorageCapacity"), std::to_string(minimumLocalStorageCapacity));
}

