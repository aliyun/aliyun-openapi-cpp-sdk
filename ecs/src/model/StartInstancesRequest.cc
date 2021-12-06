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

#include <alibabacloud/ecs/model/StartInstancesRequest.h>

using AlibabaCloud::Ecs::Model::StartInstancesRequest;

StartInstancesRequest::StartInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "StartInstances") {
  setMethod(HttpRequest::Method::Post);
}

StartInstancesRequest::~StartInstancesRequest() {}

long StartInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StartInstancesRequest::getRegionId() const {
  return regionId_;
}

void StartInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartInstancesRequest::getBatchOptimization() const {
  return batchOptimization_;
}

void StartInstancesRequest::setBatchOptimization(const std::string &batchOptimization) {
  batchOptimization_ = batchOptimization;
  setParameter(std::string("BatchOptimization"), batchOptimization);
}

bool StartInstancesRequest::getDryRun() const {
  return dryRun_;
}

void StartInstancesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string StartInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StartInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StartInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StartInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StartInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void StartInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> StartInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void StartInstancesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

