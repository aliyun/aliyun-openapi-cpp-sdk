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

#include <alibabacloud/vpc/model/DeleteFullNatEntryRequest.h>

using AlibabaCloud::Vpc::Model::DeleteFullNatEntryRequest;

DeleteFullNatEntryRequest::DeleteFullNatEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteFullNatEntry") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFullNatEntryRequest::~DeleteFullNatEntryRequest() {}

long DeleteFullNatEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteFullNatEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteFullNatEntryRequest::getClientToken() const {
  return clientToken_;
}

void DeleteFullNatEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteFullNatEntryRequest::getFullNatEntryId() const {
  return fullNatEntryId_;
}

void DeleteFullNatEntryRequest::setFullNatEntryId(const std::string &fullNatEntryId) {
  fullNatEntryId_ = fullNatEntryId;
  setParameter(std::string("FullNatEntryId"), fullNatEntryId);
}

std::string DeleteFullNatEntryRequest::getFullNatTableId() const {
  return fullNatTableId_;
}

void DeleteFullNatEntryRequest::setFullNatTableId(const std::string &fullNatTableId) {
  fullNatTableId_ = fullNatTableId;
  setParameter(std::string("FullNatTableId"), fullNatTableId);
}

std::string DeleteFullNatEntryRequest::getRegionId() const {
  return regionId_;
}

void DeleteFullNatEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteFullNatEntryRequest::getDryRun() const {
  return dryRun_;
}

void DeleteFullNatEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteFullNatEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteFullNatEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteFullNatEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteFullNatEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteFullNatEntryRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteFullNatEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

