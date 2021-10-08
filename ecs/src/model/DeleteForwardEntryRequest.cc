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

#include <alibabacloud/ecs/model/DeleteForwardEntryRequest.h>

using AlibabaCloud::Ecs::Model::DeleteForwardEntryRequest;

DeleteForwardEntryRequest::DeleteForwardEntryRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteForwardEntry") {
  setMethod(HttpRequest::Method::Post);
}

DeleteForwardEntryRequest::~DeleteForwardEntryRequest() {}

long DeleteForwardEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteForwardEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteForwardEntryRequest::getForwardTableId() const {
  return forwardTableId_;
}

void DeleteForwardEntryRequest::setForwardTableId(const std::string &forwardTableId) {
  forwardTableId_ = forwardTableId;
  setParameter(std::string("ForwardTableId"), forwardTableId);
}

std::string DeleteForwardEntryRequest::getRegionId() const {
  return regionId_;
}

void DeleteForwardEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteForwardEntryRequest::getForwardEntryId() const {
  return forwardEntryId_;
}

void DeleteForwardEntryRequest::setForwardEntryId(const std::string &forwardEntryId) {
  forwardEntryId_ = forwardEntryId;
  setParameter(std::string("ForwardEntryId"), forwardEntryId);
}

std::string DeleteForwardEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteForwardEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteForwardEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteForwardEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteForwardEntryRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteForwardEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

