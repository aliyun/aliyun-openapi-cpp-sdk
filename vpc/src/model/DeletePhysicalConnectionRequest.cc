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

#include <alibabacloud/vpc/model/DeletePhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::DeletePhysicalConnectionRequest;

DeletePhysicalConnectionRequest::DeletePhysicalConnectionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeletePhysicalConnection") {
  setMethod(HttpRequest::Method::Post);
}

DeletePhysicalConnectionRequest::~DeletePhysicalConnectionRequest() {}

long DeletePhysicalConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeletePhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeletePhysicalConnectionRequest::getClientToken() const {
  return clientToken_;
}

void DeletePhysicalConnectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeletePhysicalConnectionRequest::getRegionId() const {
  return regionId_;
}

void DeletePhysicalConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeletePhysicalConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletePhysicalConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeletePhysicalConnectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeletePhysicalConnectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeletePhysicalConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePhysicalConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeletePhysicalConnectionRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void DeletePhysicalConnectionRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}

