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

#include <alibabacloud/ecs/model/DescribeRecommendInstanceTypeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRecommendInstanceTypeRequest;

DescribeRecommendInstanceTypeRequest::DescribeRecommendInstanceTypeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeRecommendInstanceType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecommendInstanceTypeRequest::~DescribeRecommendInstanceTypeRequest() {}

long DescribeRecommendInstanceTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRecommendInstanceTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRecommendInstanceTypeRequest::getNetworkType() const {
  return networkType_;
}

void DescribeRecommendInstanceTypeRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string DescribeRecommendInstanceTypeRequest::getScene() const {
  return scene_;
}

void DescribeRecommendInstanceTypeRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

int DescribeRecommendInstanceTypeRequest::getCores() const {
  return cores_;
}

void DescribeRecommendInstanceTypeRequest::setCores(int cores) {
  cores_ = cores;
  setParameter(std::string("Cores"), std::to_string(cores));
}

std::string DescribeRecommendInstanceTypeRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void DescribeRecommendInstanceTypeRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDiskCategory"), systemDiskCategory);
}

float DescribeRecommendInstanceTypeRequest::getMaxPrice() const {
  return maxPrice_;
}

void DescribeRecommendInstanceTypeRequest::setMaxPrice(float maxPrice) {
  maxPrice_ = maxPrice;
  setParameter(std::string("MaxPrice"), std::to_string(maxPrice));
}

long DescribeRecommendInstanceTypeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRecommendInstanceTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRecommendInstanceTypeRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void DescribeRecommendInstanceTypeRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string DescribeRecommendInstanceTypeRequest::getInstanceFamilyLevel() const {
  return instanceFamilyLevel_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceFamilyLevel(const std::string &instanceFamilyLevel) {
  instanceFamilyLevel_ = instanceFamilyLevel;
  setParameter(std::string("InstanceFamilyLevel"), instanceFamilyLevel);
}

std::string DescribeRecommendInstanceTypeRequest::getZoneId() const {
  return zoneId_;
}

void DescribeRecommendInstanceTypeRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

float DescribeRecommendInstanceTypeRequest::getMemory() const {
  return memory_;
}

void DescribeRecommendInstanceTypeRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string DescribeRecommendInstanceTypeRequest::getIoOptimized() const {
  return ioOptimized_;
}

void DescribeRecommendInstanceTypeRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::string DescribeRecommendInstanceTypeRequest::getRegionId() const {
  return regionId_;
}

void DescribeRecommendInstanceTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRecommendInstanceTypeRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeRecommendInstanceTypeRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeRecommendInstanceTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRecommendInstanceTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRecommendInstanceTypeRequest::getZoneMatchMode() const {
  return zoneMatchMode_;
}

void DescribeRecommendInstanceTypeRequest::setZoneMatchMode(const std::string &zoneMatchMode) {
  zoneMatchMode_ = zoneMatchMode;
  setParameter(std::string("ZoneMatchMode"), zoneMatchMode);
}

std::string DescribeRecommendInstanceTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRecommendInstanceTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> DescribeRecommendInstanceTypeRequest::getInstanceTypeFamily() const {
  return instanceTypeFamily_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceTypeFamily(const std::vector<std::string> &instanceTypeFamily) {
  instanceTypeFamily_ = instanceTypeFamily;
}

std::string DescribeRecommendInstanceTypeRequest::getPriorityStrategy() const {
  return priorityStrategy_;
}

void DescribeRecommendInstanceTypeRequest::setPriorityStrategy(const std::string &priorityStrategy) {
  priorityStrategy_ = priorityStrategy;
  setParameter(std::string("PriorityStrategy"), priorityStrategy);
}

