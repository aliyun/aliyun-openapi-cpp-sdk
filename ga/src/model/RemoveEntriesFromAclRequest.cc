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

#include <alibabacloud/ga/model/RemoveEntriesFromAclRequest.h>

using AlibabaCloud::Ga::Model::RemoveEntriesFromAclRequest;

RemoveEntriesFromAclRequest::RemoveEntriesFromAclRequest()
    : RpcServiceRequest("ga", "2019-11-20", "RemoveEntriesFromAcl") {
  setMethod(HttpRequest::Method::Post);
}

RemoveEntriesFromAclRequest::~RemoveEntriesFromAclRequest() {}

std::string RemoveEntriesFromAclRequest::getAclId() const {
  return aclId_;
}

void RemoveEntriesFromAclRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

bool RemoveEntriesFromAclRequest::getDryRun() const {
  return dryRun_;
}

void RemoveEntriesFromAclRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RemoveEntriesFromAclRequest::getClientToken() const {
  return clientToken_;
}

void RemoveEntriesFromAclRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<RemoveEntriesFromAclRequest::AclEntries> RemoveEntriesFromAclRequest::getAclEntries() const {
  return aclEntries_;
}

void RemoveEntriesFromAclRequest::setAclEntries(const std::vector<RemoveEntriesFromAclRequest::AclEntries> &aclEntries) {
  aclEntries_ = aclEntries;
  for(int dep1 = 0; dep1 != aclEntries.size(); dep1++) {
  auto aclEntriesObj = aclEntries.at(dep1);
  std::string aclEntriesObjStr = std::string("AclEntries") + "." + std::to_string(dep1 + 1);
    setParameter(aclEntriesObjStr + ".Entry", aclEntriesObj.entry);
  }
}

std::string RemoveEntriesFromAclRequest::getRegionId() const {
  return regionId_;
}

void RemoveEntriesFromAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

