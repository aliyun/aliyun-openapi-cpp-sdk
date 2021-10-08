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

#include <alibabacloud/ecs/model/DeleteVSwitchRequest.h>

using AlibabaCloud::Ecs::Model::DeleteVSwitchRequest;

DeleteVSwitchRequest::DeleteVSwitchRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteVSwitch") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVSwitchRequest::~DeleteVSwitchRequest() {}

long DeleteVSwitchRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVSwitchRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVSwitchRequest::getRegionId() const {
  return regionId_;
}

void DeleteVSwitchRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteVSwitchRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVSwitchRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteVSwitchRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVSwitchRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteVSwitchRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVSwitchRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteVSwitchRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DeleteVSwitchRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

