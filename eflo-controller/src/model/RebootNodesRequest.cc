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

#include <alibabacloud/eflo-controller/model/RebootNodesRequest.h>

using AlibabaCloud::Eflo_controller::Model::RebootNodesRequest;

RebootNodesRequest::RebootNodesRequest()
    : RpcServiceRequest("eflo-controller", "2022-12-15", "RebootNodes") {
  setMethod(HttpRequest::Method::Post);
}

RebootNodesRequest::~RebootNodesRequest() {}

bool RebootNodesRequest::getIgnoreFailedNodeTasks() const {
  return ignoreFailedNodeTasks_;
}

void RebootNodesRequest::setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) {
  ignoreFailedNodeTasks_ = ignoreFailedNodeTasks;
  setBodyParameter(std::string("IgnoreFailedNodeTasks"), ignoreFailedNodeTasks ? "true" : "false");
}

std::string RebootNodesRequest::getClusterId() const {
  return clusterId_;
}

void RebootNodesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::vector<RebootNodesRequest::std::string> RebootNodesRequest::getNodes() const {
  return nodes_;
}

void RebootNodesRequest::setNodes(const std::vector<RebootNodesRequest::std::string> &nodes) {
  nodes_ = nodes;
  for(int dep1 = 0; dep1 != nodes.size(); dep1++) {
    setBodyParameter(std::string("Nodes") + "." + std::to_string(dep1 + 1), nodes[dep1]);
  }
}

