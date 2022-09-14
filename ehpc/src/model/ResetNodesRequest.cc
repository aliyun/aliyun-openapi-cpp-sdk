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

#include <alibabacloud/ehpc/model/ResetNodesRequest.h>

using AlibabaCloud::EHPC::Model::ResetNodesRequest;

ResetNodesRequest::ResetNodesRequest()
    : RpcServiceRequest("ehpc", "2017-07-14", "ResetNodes") {
  setMethod(HttpRequest::Method::Get);
}

ResetNodesRequest::~ResetNodesRequest() {}

std::vector<ResetNodesRequest::Instance> ResetNodesRequest::getInstance() const {
  return instance_;
}

void ResetNodesRequest::setInstance(const std::vector<ResetNodesRequest::Instance> &instance) {
  instance_ = instance;
  for(int dep1 = 0; dep1 != instance.size(); dep1++) {
  auto instanceObj = instance.at(dep1);
  std::string instanceObjStr = std::string("Instance") + "." + std::to_string(dep1 + 1);
    setParameter(instanceObjStr + ".Id", instanceObj.id);
  }
}

std::string ResetNodesRequest::getClusterId() const {
  return clusterId_;
}

void ResetNodesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ResetNodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResetNodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

