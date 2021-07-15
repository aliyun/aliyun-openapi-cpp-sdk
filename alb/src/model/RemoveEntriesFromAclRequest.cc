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

#include <alibabacloud/alb/model/RemoveEntriesFromAclRequest.h>

using AlibabaCloud::Alb::Model::RemoveEntriesFromAclRequest;

RemoveEntriesFromAclRequest::RemoveEntriesFromAclRequest()
    : RpcServiceRequest("alb", "2020-06-16", "RemoveEntriesFromAcl") {
  setMethod(HttpRequest::Method::Post);
}

RemoveEntriesFromAclRequest::~RemoveEntriesFromAclRequest() {}

std::string RemoveEntriesFromAclRequest::getClientToken() const {
  return clientToken_;
}

void RemoveEntriesFromAclRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

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

std::vector<RemoveEntriesFromAclRequest::std::string> RemoveEntriesFromAclRequest::getEntries() const {
  return entries_;
}

void RemoveEntriesFromAclRequest::setEntries(const std::vector<RemoveEntriesFromAclRequest::std::string> &entries) {
  entries_ = entries;
  for(int dep1 = 0; dep1 != entries.size(); dep1++) {
    setParameter(std::string("Entries") + "." + std::to_string(dep1 + 1), entries[dep1]);
  }
}

