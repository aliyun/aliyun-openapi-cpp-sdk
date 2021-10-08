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

#include <alibabacloud/ecs/model/ModifyPrefixListRequest.h>

using AlibabaCloud::Ecs::Model::ModifyPrefixListRequest;

ModifyPrefixListRequest::ModifyPrefixListRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyPrefixList") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPrefixListRequest::~ModifyPrefixListRequest() {}

long ModifyPrefixListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyPrefixListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyPrefixListRequest::getDescription() const {
  return description_;
}

void ModifyPrefixListRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyPrefixListRequest::getRegionId() const {
  return regionId_;
}

void ModifyPrefixListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyPrefixListRequest::getPrefixListId() const {
  return prefixListId_;
}

void ModifyPrefixListRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::vector<ModifyPrefixListRequest::AddEntry> ModifyPrefixListRequest::getAddEntry() const {
  return addEntry_;
}

void ModifyPrefixListRequest::setAddEntry(const std::vector<ModifyPrefixListRequest::AddEntry> &addEntry) {
  addEntry_ = addEntry;
  for(int dep1 = 0; dep1 != addEntry.size(); dep1++) {
  auto addEntryObj = addEntry.at(dep1);
  std::string addEntryObjStr = std::string("AddEntry") + "." + std::to_string(dep1 + 1);
    setParameter(addEntryObjStr + ".Description", addEntryObj.description);
    setParameter(addEntryObjStr + ".Cidr", addEntryObj.cidr);
  }
}

std::string ModifyPrefixListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyPrefixListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyPrefixListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyPrefixListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyPrefixListRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyPrefixListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyPrefixListRequest::getPrefixListName() const {
  return prefixListName_;
}

void ModifyPrefixListRequest::setPrefixListName(const std::string &prefixListName) {
  prefixListName_ = prefixListName;
  setParameter(std::string("PrefixListName"), prefixListName);
}

std::vector<ModifyPrefixListRequest::RemoveEntry> ModifyPrefixListRequest::getRemoveEntry() const {
  return removeEntry_;
}

void ModifyPrefixListRequest::setRemoveEntry(const std::vector<ModifyPrefixListRequest::RemoveEntry> &removeEntry) {
  removeEntry_ = removeEntry;
  for(int dep1 = 0; dep1 != removeEntry.size(); dep1++) {
  auto removeEntryObj = removeEntry.at(dep1);
  std::string removeEntryObjStr = std::string("RemoveEntry") + "." + std::to_string(dep1 + 1);
    setParameter(removeEntryObjStr + ".Cidr", removeEntryObj.cidr);
  }
}

