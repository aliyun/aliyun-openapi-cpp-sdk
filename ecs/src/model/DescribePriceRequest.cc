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

#include <alibabacloud/ecs/model/DescribePriceRequest.h>

using AlibabaCloud::Ecs::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePrice") {
  setMethod(HttpRequest::Method::Post);
}

DescribePriceRequest::~DescribePriceRequest() {}

long DescribePriceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePriceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePriceRequest::getIsp() const {
  return isp_;
}

void DescribePriceRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

DescribePriceRequest::SystemDisk DescribePriceRequest::getSystemDisk() const {
  return systemDisk_;
}

void DescribePriceRequest::setSystemDisk(const DescribePriceRequest::SystemDisk &systemDisk) {
  systemDisk_ = systemDisk;
  setParameter(std::string("SystemDisk") + ".Size", std::to_string(systemDisk.size));
  setParameter(std::string("SystemDisk") + ".PerformanceLevel", systemDisk.performanceLevel);
  setParameter(std::string("SystemDisk") + ".Category", systemDisk.category);
}

std::string DescribePriceRequest::getPriceUnit() const {
  return priceUnit_;
}

void DescribePriceRequest::setPriceUnit(const std::string &priceUnit) {
  priceUnit_ = priceUnit;
  setParameter(std::string("PriceUnit"), priceUnit);
}

int DescribePriceRequest::getPeriod() const {
  return period_;
}

void DescribePriceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string DescribePriceRequest::getAssuranceTimes() const {
  return assuranceTimes_;
}

void DescribePriceRequest::setAssuranceTimes(const std::string &assuranceTimes) {
  assuranceTimes_ = assuranceTimes;
  setParameter(std::string("AssuranceTimes"), assuranceTimes);
}

long DescribePriceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribePriceRequest::getInstanceCpuCoreCount() const {
  return instanceCpuCoreCount_;
}

void DescribePriceRequest::setInstanceCpuCoreCount(int instanceCpuCoreCount) {
  instanceCpuCoreCount_ = instanceCpuCoreCount;
  setParameter(std::string("InstanceCpuCoreCount"), std::to_string(instanceCpuCoreCount));
}

std::string DescribePriceRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void DescribePriceRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string DescribePriceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void DescribePriceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string DescribePriceRequest::getZoneId() const {
  return zoneId_;
}

void DescribePriceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribePriceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void DescribePriceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

int DescribePriceRequest::getInstanceAmount() const {
  return instanceAmount_;
}

void DescribePriceRequest::setInstanceAmount(int instanceAmount) {
  instanceAmount_ = instanceAmount;
  setParameter(std::string("InstanceAmount"), std::to_string(instanceAmount));
}

std::vector<std::string> DescribePriceRequest::getInstanceTypeList() const {
  return instanceTypeList_;
}

void DescribePriceRequest::setInstanceTypeList(const std::vector<std::string> &instanceTypeList) {
  instanceTypeList_ = instanceTypeList;
}

std::string DescribePriceRequest::getImageId() const {
  return imageId_;
}

void DescribePriceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribePriceRequest::getIoOptimized() const {
  return ioOptimized_;
}

void DescribePriceRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

int DescribePriceRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void DescribePriceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string DescribePriceRequest::getPlatform() const {
  return platform_;
}

void DescribePriceRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

int DescribePriceRequest::getCapacity() const {
  return capacity_;
}

void DescribePriceRequest::setCapacity(int capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), std::to_string(capacity));
}

std::string DescribePriceRequest::getRegionId() const {
  return regionId_;
}

void DescribePriceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePriceRequest::getScope() const {
  return scope_;
}

void DescribePriceRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string DescribePriceRequest::getInstanceType() const {
  return instanceType_;
}

void DescribePriceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribePriceRequest::getDedicatedHostType() const {
  return dedicatedHostType_;
}

void DescribePriceRequest::setDedicatedHostType(const std::string &dedicatedHostType) {
  dedicatedHostType_ = dedicatedHostType;
  setParameter(std::string("DedicatedHostType"), dedicatedHostType);
}

int DescribePriceRequest::getAmount() const {
  return amount_;
}

void DescribePriceRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

std::string DescribePriceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePriceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePriceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePriceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int DescribePriceRequest::getSpotDuration() const {
  return spotDuration_;
}

void DescribePriceRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::string DescribePriceRequest::getResourceType() const {
  return resourceType_;
}

void DescribePriceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<DescribePriceRequest::DataDisk> DescribePriceRequest::getDataDisk() const {
  return dataDisk_;
}

void DescribePriceRequest::setDataDisk(const std::vector<DescribePriceRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Size", std::to_string(dataDisk[dep1].size));
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".PerformanceLevel", dataDisk[dep1].performanceLevel);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Category", dataDisk[dep1].category);
  }
}

std::string DescribePriceRequest::getOfferingType() const {
  return offeringType_;
}

void DescribePriceRequest::setOfferingType(const std::string &offeringType) {
  offeringType_ = offeringType;
  setParameter(std::string("OfferingType"), offeringType);
}

