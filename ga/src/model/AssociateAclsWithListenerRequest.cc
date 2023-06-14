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

#include <alibabacloud/ga/model/AssociateAclsWithListenerRequest.h>

using AlibabaCloud::Ga::Model::AssociateAclsWithListenerRequest;

AssociateAclsWithListenerRequest::AssociateAclsWithListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "AssociateAclsWithListener") {
  setMethod(HttpRequest::Method::Post);
}

AssociateAclsWithListenerRequest::~AssociateAclsWithListenerRequest() {}

bool AssociateAclsWithListenerRequest::getDryRun() const {
  return dryRun_;
}

void AssociateAclsWithListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AssociateAclsWithListenerRequest::getClientToken() const {
  return clientToken_;
}

void AssociateAclsWithListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> AssociateAclsWithListenerRequest::getAclIds() const {
  return aclIds_;
}

void AssociateAclsWithListenerRequest::setAclIds(const std::vector<std::string> &aclIds) {
  aclIds_ = aclIds;
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

std::string AssociateAclsWithListenerRequest::getRegionId() const {
  return regionId_;
}

void AssociateAclsWithListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

