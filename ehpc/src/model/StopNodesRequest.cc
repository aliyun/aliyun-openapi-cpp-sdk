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

#include <alibabacloud/ehpc/model/StopNodesRequest.h>

using AlibabaCloud::EHPC::Model::StopNodesRequest;

StopNodesRequest::StopNodesRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "StopNodes") {
  setMethod(HttpRequest::Method::Get);
}

StopNodesRequest::~StopNodesRequest() {}

std::string StopNodesRequest::getRole() const {
  return role_;
}

void StopNodesRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::vector<StopNodesRequest::Instance> StopNodesRequest::getInstance() const {
  return instance_;
}

void StopNodesRequest::setInstance(const std::vector<StopNodesRequest::Instance> &instance) {
  instance_ = instance;
  for(int dep1 = 0; dep1 != instance.size(); dep1++) {
  auto instanceObj = instance.at(dep1);
  std::string instanceObjStr = std::string("Instance") + "." + std::to_string(dep1 + 1);
    setParameter(instanceObjStr + ".Id", instanceObj.id);
  }
}

std::string StopNodesRequest::getClusterId() const {
  return clusterId_;
}

void StopNodesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string StopNodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void StopNodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

