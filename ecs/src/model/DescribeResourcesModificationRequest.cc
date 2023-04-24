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

#include <alibabacloud/ecs/model/DescribeResourcesModificationRequest.h>

using AlibabaCloud::Ecs::Model::DescribeResourcesModificationRequest;

DescribeResourcesModificationRequest::DescribeResourcesModificationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeResourcesModification") {
  setMethod(HttpRequest::Method::Post);
}

DescribeResourcesModificationRequest::~DescribeResourcesModificationRequest() {}

long DescribeResourcesModificationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeResourcesModificationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

float DescribeResourcesModificationRequest::getMemory() const {
  return memory_;
}

void DescribeResourcesModificationRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

int DescribeResourcesModificationRequest::getCores() const {
  return cores_;
}

void DescribeResourcesModificationRequest::setCores(int cores) {
  cores_ = cores;
  setParameter(std::string("Cores"), std::to_string(cores));
}

std::string DescribeResourcesModificationRequest::getRegionId() const {
  return regionId_;
}

void DescribeResourcesModificationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DescribeResourcesModificationRequest::getMigrateAcrossZone() const {
  return migrateAcrossZone_;
}

void DescribeResourcesModificationRequest::setMigrateAcrossZone(bool migrateAcrossZone) {
  migrateAcrossZone_ = migrateAcrossZone;
  setParameter(std::string("MigrateAcrossZone"), migrateAcrossZone ? "true" : "false");
}

std::string DescribeResourcesModificationRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeResourcesModificationRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeResourcesModificationRequest::getResourceId() const {
  return resourceId_;
}

void DescribeResourcesModificationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeResourcesModificationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeResourcesModificationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeResourcesModificationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeResourcesModificationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeResourcesModificationRequest::getOperationType() const {
  return operationType_;
}

void DescribeResourcesModificationRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

long DescribeResourcesModificationRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeResourcesModificationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeResourcesModificationRequest::getDestinationResource() const {
  return destinationResource_;
}

void DescribeResourcesModificationRequest::setDestinationResource(const std::string &destinationResource) {
  destinationResource_ = destinationResource;
  setParameter(std::string("DestinationResource"), destinationResource);
}

std::string DescribeResourcesModificationRequest::getZoneId() const {
  return zoneId_;
}

void DescribeResourcesModificationRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::vector<std::string> DescribeResourcesModificationRequest::getConditions() const {
  return conditions_;
}

void DescribeResourcesModificationRequest::setConditions(const std::vector<std::string> &conditions) {
  conditions_ = conditions;
}

