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

#include <alibabacloud/ecs/model/StopInstanceRequest.h>

using AlibabaCloud::Ecs::Model::StopInstanceRequest;

StopInstanceRequest::StopInstanceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "StopInstance") {
  setMethod(HttpRequest::Method::Post);
}

StopInstanceRequest::~StopInstanceRequest() {}

long StopInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StopInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StopInstanceRequest::getStoppedMode() const {
  return stoppedMode_;
}

void StopInstanceRequest::setStoppedMode(const std::string &stoppedMode) {
  stoppedMode_ = stoppedMode;
  setParameter(std::string("StoppedMode"), stoppedMode);
}

bool StopInstanceRequest::getHibernate() const {
  return hibernate_;
}

void StopInstanceRequest::setHibernate(bool hibernate) {
  hibernate_ = hibernate;
  setParameter(std::string("Hibernate"), hibernate ? "true" : "false");
}

bool StopInstanceRequest::getForceStop() const {
  return forceStop_;
}

void StopInstanceRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

bool StopInstanceRequest::getConfirmStop() const {
  return confirmStop_;
}

void StopInstanceRequest::setConfirmStop(bool confirmStop) {
  confirmStop_ = confirmStop;
  setParameter(std::string("ConfirmStop"), confirmStop ? "true" : "false");
}

bool StopInstanceRequest::getDryRun() const {
  return dryRun_;
}

void StopInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string StopInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StopInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StopInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StopInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StopInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void StopInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StopInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void StopInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

