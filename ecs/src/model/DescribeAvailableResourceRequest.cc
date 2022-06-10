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

#include <alibabacloud/ecs/model/DescribeAvailableResourceRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAvailableResourceRequest;

DescribeAvailableResourceRequest::DescribeAvailableResourceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeAvailableResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableResourceRequest::~DescribeAvailableResourceRequest() {}

long DescribeAvailableResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

float DescribeAvailableResourceRequest::getMemory() const {
  return memory_;
}

void DescribeAvailableResourceRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string DescribeAvailableResourceRequest::getIoOptimized() const {
  return ioOptimized_;
}

void DescribeAvailableResourceRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::string DescribeAvailableResourceRequest::getDataDiskCategory() const {
  return dataDiskCategory_;
}

void DescribeAvailableResourceRequest::setDataDiskCategory(const std::string &dataDiskCategory) {
  dataDiskCategory_ = dataDiskCategory;
  setParameter(std::string("DataDiskCategory"), dataDiskCategory);
}

int DescribeAvailableResourceRequest::getCores() const {
  return cores_;
}

void DescribeAvailableResourceRequest::setCores(int cores) {
  cores_ = cores;
  setParameter(std::string("Cores"), std::to_string(cores));
}

std::string DescribeAvailableResourceRequest::getRegionId() const {
  return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAvailableResourceRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void DescribeAvailableResourceRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDiskCategory"), systemDiskCategory);
}

std::string DescribeAvailableResourceRequest::getScope() const {
  return scope_;
}

void DescribeAvailableResourceRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string DescribeAvailableResourceRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeAvailableResourceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeAvailableResourceRequest::getNetworkCategory() const {
  return networkCategory_;
}

void DescribeAvailableResourceRequest::setNetworkCategory(const std::string &networkCategory) {
  networkCategory_ = networkCategory;
  setParameter(std::string("NetworkCategory"), networkCategory);
}

std::string DescribeAvailableResourceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeAvailableResourceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeAvailableResourceRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void DescribeAvailableResourceRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

long DescribeAvailableResourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeAvailableResourceRequest::getSpotDuration() const {
  return spotDuration_;
}

void DescribeAvailableResourceRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::string DescribeAvailableResourceRequest::getResourceType() const {
  return resourceType_;
}

void DescribeAvailableResourceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeAvailableResourceRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void DescribeAvailableResourceRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string DescribeAvailableResourceRequest::getDestinationResource() const {
  return destinationResource_;
}

void DescribeAvailableResourceRequest::setDestinationResource(const std::string &destinationResource) {
  destinationResource_ = destinationResource;
  setParameter(std::string("DestinationResource"), destinationResource);
}

std::string DescribeAvailableResourceRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

