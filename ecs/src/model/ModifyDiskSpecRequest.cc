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

#include <alibabacloud/ecs/model/ModifyDiskSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDiskSpecRequest;

ModifyDiskSpecRequest::ModifyDiskSpecRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDiskSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDiskSpecRequest::~ModifyDiskSpecRequest() {}

long ModifyDiskSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDiskSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDiskSpecRequest::getDestinationZoneId() const {
  return destinationZoneId_;
}

void ModifyDiskSpecRequest::setDestinationZoneId(const std::string &destinationZoneId) {
  destinationZoneId_ = destinationZoneId;
  setParameter(std::string("DestinationZoneId"), destinationZoneId);
}

std::string ModifyDiskSpecRequest::getDiskCategory() const {
  return diskCategory_;
}

void ModifyDiskSpecRequest::setDiskCategory(const std::string &diskCategory) {
  diskCategory_ = diskCategory;
  setParameter(std::string("DiskCategory"), diskCategory);
}

std::string ModifyDiskSpecRequest::getDiskId() const {
  return diskId_;
}

void ModifyDiskSpecRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

bool ModifyDiskSpecRequest::getDryRun() const {
  return dryRun_;
}

void ModifyDiskSpecRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyDiskSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDiskSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDiskSpecRequest::getPerformanceLevel() const {
  return performanceLevel_;
}

void ModifyDiskSpecRequest::setPerformanceLevel(const std::string &performanceLevel) {
  performanceLevel_ = performanceLevel;
  setParameter(std::string("PerformanceLevel"), performanceLevel);
}

std::string ModifyDiskSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDiskSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

ModifyDiskSpecRequest::PerformanceControlOptions ModifyDiskSpecRequest::getPerformanceControlOptions() const {
  return performanceControlOptions_;
}

void ModifyDiskSpecRequest::setPerformanceControlOptions(const ModifyDiskSpecRequest::PerformanceControlOptions &performanceControlOptions) {
  performanceControlOptions_ = performanceControlOptions;
  setParameter(std::string("PerformanceControlOptions") + ".IOPS", std::to_string(performanceControlOptions.iOPS));
  setParameter(std::string("PerformanceControlOptions") + ".Throughput", std::to_string(performanceControlOptions.throughput));
  setParameter(std::string("PerformanceControlOptions") + ".Recover", performanceControlOptions.recover);
}

long ModifyDiskSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDiskSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long ModifyDiskSpecRequest::getProvisionedIops() const {
  return provisionedIops_;
}

void ModifyDiskSpecRequest::setProvisionedIops(long provisionedIops) {
  provisionedIops_ = provisionedIops;
  setParameter(std::string("ProvisionedIops"), std::to_string(provisionedIops));
}

