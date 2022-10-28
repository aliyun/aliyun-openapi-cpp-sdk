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

#include <alibabacloud/dms-enterprise/model/UpdateTaskConfigRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskConfigRequest;

UpdateTaskConfigRequest::UpdateTaskConfigRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskConfigRequest::~UpdateTaskConfigRequest() {}

std::string UpdateTaskConfigRequest::getNodeConfig() const {
  return nodeConfig_;
}

void UpdateTaskConfigRequest::setNodeConfig(const std::string &nodeConfig) {
  nodeConfig_ = nodeConfig;
  setParameter(std::string("NodeConfig"), nodeConfig);
}

long UpdateTaskConfigRequest::getTid() const {
  return tid_;
}

void UpdateTaskConfigRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string UpdateTaskConfigRequest::getNodeId() const {
  return nodeId_;
}

void UpdateTaskConfigRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

