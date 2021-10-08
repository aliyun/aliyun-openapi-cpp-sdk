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

#include <alibabacloud/ecs/model/StopInstancesRequest.h>

using AlibabaCloud::Ecs::Model::StopInstancesRequest;

StopInstancesRequest::StopInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "StopInstances") {
  setMethod(HttpRequest::Method::Post);
}

StopInstancesRequest::~StopInstancesRequest() {}

long StopInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StopInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StopInstancesRequest::getStoppedMode() const {
  return stoppedMode_;
}

void StopInstancesRequest::setStoppedMode(const std::string &stoppedMode) {
  stoppedMode_ = stoppedMode;
  setParameter(std::string("StoppedMode"), stoppedMode);
}

bool StopInstancesRequest::getForceStop() const {
  return forceStop_;
}

void StopInstancesRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

std::string StopInstancesRequest::getRegionId() const {
  return regionId_;
}

void StopInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopInstancesRequest::getBatchOptimization() const {
  return batchOptimization_;
}

void StopInstancesRequest::setBatchOptimization(const std::string &batchOptimization) {
  batchOptimization_ = batchOptimization;
  setParameter(std::string("BatchOptimization"), batchOptimization);
}

bool StopInstancesRequest::getDryRun() const {
  return dryRun_;
}

void StopInstancesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string StopInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StopInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StopInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StopInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StopInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void StopInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> StopInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void StopInstancesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

