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

#include <alibabacloud/vpc/model/CreateVpcPrefixListRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpcPrefixListRequest;

CreateVpcPrefixListRequest::CreateVpcPrefixListRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpcPrefixList") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpcPrefixListRequest::~CreateVpcPrefixListRequest() {}

std::vector<CreateVpcPrefixListRequest::PrefixListEntrys> CreateVpcPrefixListRequest::getPrefixListEntrys() const {
  return prefixListEntrys_;
}

void CreateVpcPrefixListRequest::setPrefixListEntrys(const std::vector<CreateVpcPrefixListRequest::PrefixListEntrys> &prefixListEntrys) {
  prefixListEntrys_ = prefixListEntrys;
  for(int dep1 = 0; dep1 != prefixListEntrys.size(); dep1++) {
  auto prefixListEntrysObj = prefixListEntrys.at(dep1);
  std::string prefixListEntrysObjStr = std::string("PrefixListEntrys") + "." + std::to_string(dep1 + 1);
    setParameter(prefixListEntrysObjStr + ".Cidr", prefixListEntrysObj.cidr);
    setParameter(prefixListEntrysObjStr + ".Description", prefixListEntrysObj.description);
  }
}

long CreateVpcPrefixListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVpcPrefixListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVpcPrefixListRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpcPrefixListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int CreateVpcPrefixListRequest::getMaxEntries() const {
  return maxEntries_;
}

void CreateVpcPrefixListRequest::setMaxEntries(int maxEntries) {
  maxEntries_ = maxEntries;
  setParameter(std::string("MaxEntries"), std::to_string(maxEntries));
}

std::string CreateVpcPrefixListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpcPrefixListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVpcPrefixListRequest::getRegionId() const {
  return regionId_;
}

void CreateVpcPrefixListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVpcPrefixListRequest::getIpVersion() const {
  return ipVersion_;
}

void CreateVpcPrefixListRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::vector<CreateVpcPrefixListRequest::PrefixListEntries> CreateVpcPrefixListRequest::getPrefixListEntries() const {
  return prefixListEntries_;
}

void CreateVpcPrefixListRequest::setPrefixListEntries(const std::vector<CreateVpcPrefixListRequest::PrefixListEntries> &prefixListEntries) {
  prefixListEntries_ = prefixListEntries;
  for(int dep1 = 0; dep1 != prefixListEntries.size(); dep1++) {
  auto prefixListEntriesObj = prefixListEntries.at(dep1);
  std::string prefixListEntriesObjStr = std::string("PrefixListEntries") + "." + std::to_string(dep1 + 1);
    setParameter(prefixListEntriesObjStr + ".Cidr", prefixListEntriesObj.cidr);
    setParameter(prefixListEntriesObjStr + ".Description", prefixListEntriesObj.description);
  }
}

std::vector<CreateVpcPrefixListRequest::Tag> CreateVpcPrefixListRequest::getTag() const {
  return tag_;
}

void CreateVpcPrefixListRequest::setTag(const std::vector<CreateVpcPrefixListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateVpcPrefixListRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpcPrefixListRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVpcPrefixListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVpcPrefixListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVpcPrefixListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVpcPrefixListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateVpcPrefixListRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVpcPrefixListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVpcPrefixListRequest::getPrefixListName() const {
  return prefixListName_;
}

void CreateVpcPrefixListRequest::setPrefixListName(const std::string &prefixListName) {
  prefixListName_ = prefixListName;
  setParameter(std::string("PrefixListName"), prefixListName);
}

std::string CreateVpcPrefixListRequest::getPrefixListDescription() const {
  return prefixListDescription_;
}

void CreateVpcPrefixListRequest::setPrefixListDescription(const std::string &prefixListDescription) {
  prefixListDescription_ = prefixListDescription;
  setParameter(std::string("PrefixListDescription"), prefixListDescription);
}

