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

#include <alibabacloud/ecs/model/ModifyPortRangeListRequest.h>

using AlibabaCloud::Ecs::Model::ModifyPortRangeListRequest;

ModifyPortRangeListRequest::ModifyPortRangeListRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyPortRangeList") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPortRangeListRequest::~ModifyPortRangeListRequest() {}

long ModifyPortRangeListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyPortRangeListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyPortRangeListRequest::getClientToken() const {
  return clientToken_;
}

void ModifyPortRangeListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyPortRangeListRequest::getDescription() const {
  return description_;
}

void ModifyPortRangeListRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyPortRangeListRequest::getRegionId() const {
  return regionId_;
}

void ModifyPortRangeListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ModifyPortRangeListRequest::AddEntry> ModifyPortRangeListRequest::getAddEntry() const {
  return addEntry_;
}

void ModifyPortRangeListRequest::setAddEntry(const std::vector<ModifyPortRangeListRequest::AddEntry> &addEntry) {
  addEntry_ = addEntry;
  for(int dep1 = 0; dep1 != addEntry.size(); dep1++) {
  auto addEntryObj = addEntry.at(dep1);
  std::string addEntryObjStr = std::string("AddEntry") + "." + std::to_string(dep1 + 1);
    setParameter(addEntryObjStr + ".PortRange", addEntryObj.portRange);
    setParameter(addEntryObjStr + ".Description", addEntryObj.description);
  }
}

std::string ModifyPortRangeListRequest::getPortRangeListId() const {
  return portRangeListId_;
}

void ModifyPortRangeListRequest::setPortRangeListId(const std::string &portRangeListId) {
  portRangeListId_ = portRangeListId;
  setParameter(std::string("PortRangeListId"), portRangeListId);
}

std::string ModifyPortRangeListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyPortRangeListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyPortRangeListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyPortRangeListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyPortRangeListRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyPortRangeListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyPortRangeListRequest::getPortRangeListName() const {
  return portRangeListName_;
}

void ModifyPortRangeListRequest::setPortRangeListName(const std::string &portRangeListName) {
  portRangeListName_ = portRangeListName;
  setParameter(std::string("PortRangeListName"), portRangeListName);
}

std::vector<ModifyPortRangeListRequest::RemoveEntry> ModifyPortRangeListRequest::getRemoveEntry() const {
  return removeEntry_;
}

void ModifyPortRangeListRequest::setRemoveEntry(const std::vector<ModifyPortRangeListRequest::RemoveEntry> &removeEntry) {
  removeEntry_ = removeEntry;
  for(int dep1 = 0; dep1 != removeEntry.size(); dep1++) {
  auto removeEntryObj = removeEntry.at(dep1);
  std::string removeEntryObjStr = std::string("RemoveEntry") + "." + std::to_string(dep1 + 1);
    setParameter(removeEntryObjStr + ".PortRange", removeEntryObj.portRange);
  }
}

