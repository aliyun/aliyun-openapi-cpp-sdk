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

#include <alibabacloud/ga/model/CreateAclRequest.h>

using AlibabaCloud::Ga::Model::CreateAclRequest;

CreateAclRequest::CreateAclRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateAcl") {
  setMethod(HttpRequest::Method::Post);
}

CreateAclRequest::~CreateAclRequest() {}

bool CreateAclRequest::getDryRun() const {
  return dryRun_;
}

void CreateAclRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateAclRequest::getAclName() const {
  return aclName_;
}

void CreateAclRequest::setAclName(const std::string &aclName) {
  aclName_ = aclName;
  setParameter(std::string("AclName"), aclName);
}

std::string CreateAclRequest::getClientToken() const {
  return clientToken_;
}

void CreateAclRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateAclRequest::SystemTag> CreateAclRequest::getSystemTag() const {
  return systemTag_;
}

void CreateAclRequest::setSystemTag(const std::vector<CreateAclRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::vector<CreateAclRequest::AclEntries> CreateAclRequest::getAclEntries() const {
  return aclEntries_;
}

void CreateAclRequest::setAclEntries(const std::vector<CreateAclRequest::AclEntries> &aclEntries) {
  aclEntries_ = aclEntries;
  for(int dep1 = 0; dep1 != aclEntries.size(); dep1++) {
  auto aclEntriesObj = aclEntries.at(dep1);
  std::string aclEntriesObjStr = std::string("AclEntries") + "." + std::to_string(dep1 + 1);
    setParameter(aclEntriesObjStr + ".Entry", aclEntriesObj.entry);
    setParameter(aclEntriesObjStr + ".EntryDescription", aclEntriesObj.entryDescription);
  }
}

std::string CreateAclRequest::getAddressIPVersion() const {
  return addressIPVersion_;
}

void CreateAclRequest::setAddressIPVersion(const std::string &addressIPVersion) {
  addressIPVersion_ = addressIPVersion;
  setParameter(std::string("AddressIPVersion"), addressIPVersion);
}

std::string CreateAclRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAclRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAclRequest::getRegionId() const {
  return regionId_;
}

void CreateAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateAclRequest::Tag> CreateAclRequest::getTag() const {
  return tag_;
}

void CreateAclRequest::setTag(const std::vector<CreateAclRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

