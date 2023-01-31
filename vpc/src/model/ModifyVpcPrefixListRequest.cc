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

#include <alibabacloud/vpc/model/ModifyVpcPrefixListRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpcPrefixListRequest;

ModifyVpcPrefixListRequest::ModifyVpcPrefixListRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVpcPrefixList") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpcPrefixListRequest::~ModifyVpcPrefixListRequest() {}

long ModifyVpcPrefixListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVpcPrefixListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVpcPrefixListRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVpcPrefixListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int ModifyVpcPrefixListRequest::getMaxEntries() const {
  return maxEntries_;
}

void ModifyVpcPrefixListRequest::setMaxEntries(int maxEntries) {
  maxEntries_ = maxEntries;
  setParameter(std::string("MaxEntries"), std::to_string(maxEntries));
}

std::vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry> ModifyVpcPrefixListRequest::getRemovePrefixListEntry() const {
  return removePrefixListEntry_;
}

void ModifyVpcPrefixListRequest::setRemovePrefixListEntry(const std::vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry> &removePrefixListEntry) {
  removePrefixListEntry_ = removePrefixListEntry;
  for(int dep1 = 0; dep1 != removePrefixListEntry.size(); dep1++) {
  auto removePrefixListEntryObj = removePrefixListEntry.at(dep1);
  std::string removePrefixListEntryObjStr = std::string("RemovePrefixListEntry") + "." + std::to_string(dep1 + 1);
    setParameter(removePrefixListEntryObjStr + ".Cidr", removePrefixListEntryObj.cidr);
    setParameter(removePrefixListEntryObjStr + ".Description", removePrefixListEntryObj.description);
  }
}

std::string ModifyVpcPrefixListRequest::getPrefixListId() const {
  return prefixListId_;
}

void ModifyVpcPrefixListRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string ModifyVpcPrefixListRequest::getRegionId() const {
  return regionId_;
}

void ModifyVpcPrefixListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyVpcPrefixListRequest::getDryRun() const {
  return dryRun_;
}

void ModifyVpcPrefixListRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyVpcPrefixListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVpcPrefixListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVpcPrefixListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVpcPrefixListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVpcPrefixListRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVpcPrefixListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ModifyVpcPrefixListRequest::AddPrefixListEntry> ModifyVpcPrefixListRequest::getAddPrefixListEntry() const {
  return addPrefixListEntry_;
}

void ModifyVpcPrefixListRequest::setAddPrefixListEntry(const std::vector<ModifyVpcPrefixListRequest::AddPrefixListEntry> &addPrefixListEntry) {
  addPrefixListEntry_ = addPrefixListEntry;
  for(int dep1 = 0; dep1 != addPrefixListEntry.size(); dep1++) {
  auto addPrefixListEntryObj = addPrefixListEntry.at(dep1);
  std::string addPrefixListEntryObjStr = std::string("AddPrefixListEntry") + "." + std::to_string(dep1 + 1);
    setParameter(addPrefixListEntryObjStr + ".Cidr", addPrefixListEntryObj.cidr);
    setParameter(addPrefixListEntryObjStr + ".Description", addPrefixListEntryObj.description);
  }
}

std::string ModifyVpcPrefixListRequest::getPrefixListName() const {
  return prefixListName_;
}

void ModifyVpcPrefixListRequest::setPrefixListName(const std::string &prefixListName) {
  prefixListName_ = prefixListName;
  setParameter(std::string("PrefixListName"), prefixListName);
}

std::string ModifyVpcPrefixListRequest::getPrefixListDescription() const {
  return prefixListDescription_;
}

void ModifyVpcPrefixListRequest::setPrefixListDescription(const std::string &prefixListDescription) {
  prefixListDescription_ = prefixListDescription;
  setParameter(std::string("PrefixListDescription"), prefixListDescription);
}

