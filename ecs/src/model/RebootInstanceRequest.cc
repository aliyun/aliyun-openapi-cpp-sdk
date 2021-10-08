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

#include <alibabacloud/ecs/model/RebootInstanceRequest.h>

using AlibabaCloud::Ecs::Model::RebootInstanceRequest;

RebootInstanceRequest::RebootInstanceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RebootInstance") {
  setMethod(HttpRequest::Method::Post);
}

RebootInstanceRequest::~RebootInstanceRequest() {}

long RebootInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RebootInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool RebootInstanceRequest::getForceStop() const {
  return forceStop_;
}

void RebootInstanceRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

bool RebootInstanceRequest::getDryRun() const {
  return dryRun_;
}

void RebootInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RebootInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RebootInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RebootInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RebootInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RebootInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RebootInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RebootInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RebootInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

