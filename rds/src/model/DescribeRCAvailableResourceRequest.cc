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

#include <alibabacloud/rds/model/DescribeRCAvailableResourceRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCAvailableResourceRequest;

DescribeRCAvailableResourceRequest::DescribeRCAvailableResourceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCAvailableResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCAvailableResourceRequest::~DescribeRCAvailableResourceRequest() {}

float DescribeRCAvailableResourceRequest::getMemory() const {
  return memory_;
}

void DescribeRCAvailableResourceRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string DescribeRCAvailableResourceRequest::getIoOptimized() const {
  return ioOptimized_;
}

void DescribeRCAvailableResourceRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::string DescribeRCAvailableResourceRequest::getDataDiskCategory() const {
  return dataDiskCategory_;
}

void DescribeRCAvailableResourceRequest::setDataDiskCategory(const std::string &dataDiskCategory) {
  dataDiskCategory_ = dataDiskCategory;
  setParameter(std::string("DataDiskCategory"), dataDiskCategory);
}

int DescribeRCAvailableResourceRequest::getCores() const {
  return cores_;
}

void DescribeRCAvailableResourceRequest::setCores(int cores) {
  cores_ = cores;
  setParameter(std::string("Cores"), std::to_string(cores));
}

std::string DescribeRCAvailableResourceRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCAvailableResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCAvailableResourceRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void DescribeRCAvailableResourceRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDiskCategory"), systemDiskCategory);
}

std::string DescribeRCAvailableResourceRequest::getScope() const {
  return scope_;
}

void DescribeRCAvailableResourceRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string DescribeRCAvailableResourceRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeRCAvailableResourceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeRCAvailableResourceRequest::getNetworkCategory() const {
  return networkCategory_;
}

void DescribeRCAvailableResourceRequest::setNetworkCategory(const std::string &networkCategory) {
  networkCategory_ = networkCategory;
  setParameter(std::string("NetworkCategory"), networkCategory);
}

std::string DescribeRCAvailableResourceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeRCAvailableResourceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeRCAvailableResourceRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void DescribeRCAvailableResourceRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

int DescribeRCAvailableResourceRequest::getSpotDuration() const {
  return spotDuration_;
}

void DescribeRCAvailableResourceRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::string DescribeRCAvailableResourceRequest::getResourceType() const {
  return resourceType_;
}

void DescribeRCAvailableResourceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeRCAvailableResourceRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void DescribeRCAvailableResourceRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string DescribeRCAvailableResourceRequest::getDestinationResource() const {
  return destinationResource_;
}

void DescribeRCAvailableResourceRequest::setDestinationResource(const std::string &destinationResource) {
  destinationResource_ = destinationResource;
  setParameter(std::string("DestinationResource"), destinationResource);
}

std::string DescribeRCAvailableResourceRequest::getZoneId() const {
  return zoneId_;
}

void DescribeRCAvailableResourceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

