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

#include <alibabacloud/ecs/model/DisableActivationRequest.h>

using AlibabaCloud::Ecs::Model::DisableActivationRequest;

DisableActivationRequest::DisableActivationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DisableActivation") {
  setMethod(HttpRequest::Method::Post);
}

DisableActivationRequest::~DisableActivationRequest() {}

long DisableActivationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableActivationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableActivationRequest::getRegionId() const {
  return regionId_;
}

void DisableActivationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DisableActivationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisableActivationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DisableActivationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DisableActivationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DisableActivationRequest::getOwnerId() const {
  return ownerId_;
}

void DisableActivationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisableActivationRequest::getActivationId() const {
  return activationId_;
}

void DisableActivationRequest::setActivationId(const std::string &activationId) {
  activationId_ = activationId;
  setParameter(std::string("ActivationId"), activationId);
}

