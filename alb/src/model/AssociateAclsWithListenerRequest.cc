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

#include <alibabacloud/alb/model/AssociateAclsWithListenerRequest.h>

using AlibabaCloud::Alb::Model::AssociateAclsWithListenerRequest;

AssociateAclsWithListenerRequest::AssociateAclsWithListenerRequest()
    : RpcServiceRequest("alb", "2020-06-16", "AssociateAclsWithListener") {
  setMethod(HttpRequest::Method::Post);
}

AssociateAclsWithListenerRequest::~AssociateAclsWithListenerRequest() {}

std::string AssociateAclsWithListenerRequest::getClientToken() const {
  return clientToken_;
}

void AssociateAclsWithListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<AssociateAclsWithListenerRequest::std::string> AssociateAclsWithListenerRequest::getAclIds() const {
  return aclIds_;
}

void AssociateAclsWithListenerRequest::setAclIds(const std::vector<AssociateAclsWithListenerRequest::std::string> &aclIds) {
  aclIds_ = aclIds;
  for(int dep1 = 0; dep1 != aclIds.size(); dep1++) {
    setParameter(std::string("AclIds") + "." + std::to_string(dep1 + 1), aclIds[dep1]);
  }
}

std::string AssociateAclsWithListenerRequest::getAclType() const {
  return aclType_;
}

void AssociateAclsWithListenerRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

std::string AssociateAclsWithListenerRequest::getListenerId() const {
  return listenerId_;
}

void AssociateAclsWithListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

bool AssociateAclsWithListenerRequest::getDryRun() const {
  return dryRun_;
}

void AssociateAclsWithListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

