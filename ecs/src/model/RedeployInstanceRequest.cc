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

#include <alibabacloud/ecs/model/RedeployInstanceRequest.h>

using AlibabaCloud::Ecs::Model::RedeployInstanceRequest;

RedeployInstanceRequest::RedeployInstanceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RedeployInstance") {
  setMethod(HttpRequest::Method::Post);
}

RedeployInstanceRequest::~RedeployInstanceRequest() {}

long RedeployInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RedeployInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool RedeployInstanceRequest::getForceStop() const {
  return forceStop_;
}

void RedeployInstanceRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

std::string RedeployInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RedeployInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RedeployInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RedeployInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RedeployInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RedeployInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RedeployInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RedeployInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

