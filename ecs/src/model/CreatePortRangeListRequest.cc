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

#include <alibabacloud/ecs/model/CreatePortRangeListRequest.h>

using AlibabaCloud::Ecs::Model::CreatePortRangeListRequest;

CreatePortRangeListRequest::CreatePortRangeListRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreatePortRangeList") {
  setMethod(HttpRequest::Method::Post);
}

CreatePortRangeListRequest::~CreatePortRangeListRequest() {}

long CreatePortRangeListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreatePortRangeListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreatePortRangeListRequest::getClientToken() const {
  return clientToken_;
}

void CreatePortRangeListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreatePortRangeListRequest::getDescription() const {
  return description_;
}

void CreatePortRangeListRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreatePortRangeListRequest::getMaxEntries() const {
  return maxEntries_;
}

void CreatePortRangeListRequest::setMaxEntries(int maxEntries) {
  maxEntries_ = maxEntries;
  setParameter(std::string("MaxEntries"), std::to_string(maxEntries));
}

std::string CreatePortRangeListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreatePortRangeListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreatePortRangeListRequest::getRegionId() const {
  return regionId_;
}

void CreatePortRangeListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreatePortRangeListRequest::Tag> CreatePortRangeListRequest::getTag() const {
  return tag_;
}

void CreatePortRangeListRequest::setTag(const std::vector<CreatePortRangeListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreatePortRangeListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreatePortRangeListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreatePortRangeListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreatePortRangeListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreatePortRangeListRequest::getOwnerId() const {
  return ownerId_;
}

void CreatePortRangeListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreatePortRangeListRequest::Entry> CreatePortRangeListRequest::getEntry() const {
  return entry_;
}

void CreatePortRangeListRequest::setEntry(const std::vector<CreatePortRangeListRequest::Entry> &entry) {
  entry_ = entry;
  for(int dep1 = 0; dep1 != entry.size(); dep1++) {
  auto entryObj = entry.at(dep1);
  std::string entryObjStr = std::string("Entry") + "." + std::to_string(dep1 + 1);
    setParameter(entryObjStr + ".PortRange", entryObj.portRange);
    setParameter(entryObjStr + ".Description", entryObj.description);
  }
}

std::string CreatePortRangeListRequest::getPortRangeListName() const {
  return portRangeListName_;
}

void CreatePortRangeListRequest::setPortRangeListName(const std::string &portRangeListName) {
  portRangeListName_ = portRangeListName;
  setParameter(std::string("PortRangeListName"), portRangeListName);
}

