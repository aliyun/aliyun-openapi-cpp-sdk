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

#include <alibabacloud/ga/model/DissociateAclsFromListenerRequest.h>

using AlibabaCloud::Ga::Model::DissociateAclsFromListenerRequest;

DissociateAclsFromListenerRequest::DissociateAclsFromListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DissociateAclsFromListener") {
  setMethod(HttpRequest::Method::Post);
}

DissociateAclsFromListenerRequest::~DissociateAclsFromListenerRequest() {}

bool DissociateAclsFromListenerRequest::getDryRun() const {
  return dryRun_;
}

void DissociateAclsFromListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DissociateAclsFromListenerRequest::getClientToken() const {
  return clientToken_;
}

void DissociateAclsFromListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DissociateAclsFromListenerRequest::getAclIds() const {
  return aclIds_;
}

void DissociateAclsFromListenerRequest::setAclIds(const std::vector<std::string> &aclIds) {
  aclIds_ = aclIds;
}

std::string DissociateAclsFromListenerRequest::getListenerId() const {
  return listenerId_;
}

void DissociateAclsFromListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string DissociateAclsFromListenerRequest::getRegionId() const {
  return regionId_;
}

void DissociateAclsFromListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

