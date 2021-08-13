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

#include <alibabacloud/smartag/model/DeleteDnatEntryRequest.h>

using AlibabaCloud::Smartag::Model::DeleteDnatEntryRequest;

DeleteDnatEntryRequest::DeleteDnatEntryRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteDnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDnatEntryRequest::~DeleteDnatEntryRequest() {}

long DeleteDnatEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDnatEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDnatEntryRequest::getDnatEntryId() const {
  return dnatEntryId_;
}

void DeleteDnatEntryRequest::setDnatEntryId(const std::string &dnatEntryId) {
  dnatEntryId_ = dnatEntryId;
  setParameter(std::string("DnatEntryId"), dnatEntryId);
}

std::string DeleteDnatEntryRequest::getRegionId() const {
  return regionId_;
}

void DeleteDnatEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDnatEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDnatEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDnatEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDnatEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDnatEntryRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDnatEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteDnatEntryRequest::getSagId() const {
  return sagId_;
}

void DeleteDnatEntryRequest::setSagId(const std::string &sagId) {
  sagId_ = sagId;
  setParameter(std::string("SagId"), sagId);
}

