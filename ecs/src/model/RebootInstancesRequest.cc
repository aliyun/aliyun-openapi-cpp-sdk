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

#include <alibabacloud/ecs/model/RebootInstancesRequest.h>

using AlibabaCloud::Ecs::Model::RebootInstancesRequest;

RebootInstancesRequest::RebootInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RebootInstances") {
  setMethod(HttpRequest::Method::Post);
}

RebootInstancesRequest::~RebootInstancesRequest() {}

long RebootInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RebootInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RebootInstancesRequest::getRegionId() const {
  return regionId_;
}

void RebootInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RebootInstancesRequest::getBatchOptimization() const {
  return batchOptimization_;
}

void RebootInstancesRequest::setBatchOptimization(const std::string &batchOptimization) {
  batchOptimization_ = batchOptimization;
  setParameter(std::string("BatchOptimization"), batchOptimization);
}

bool RebootInstancesRequest::getDryRun() const {
  return dryRun_;
}

void RebootInstancesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RebootInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RebootInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RebootInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RebootInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RebootInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void RebootInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool RebootInstancesRequest::getForceReboot() const {
  return forceReboot_;
}

void RebootInstancesRequest::setForceReboot(bool forceReboot) {
  forceReboot_ = forceReboot;
  setParameter(std::string("ForceReboot"), forceReboot ? "true" : "false");
}

std::vector<std::string> RebootInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void RebootInstancesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

