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

#include <alibabacloud/eflo-controller/model/ReimageNodesRequest.h>

using AlibabaCloud::Eflo_controller::Model::ReimageNodesRequest;

ReimageNodesRequest::ReimageNodesRequest()
    : RpcServiceRequest("eflo-controller", "2022-12-15", "ReimageNodes") {
  setMethod(HttpRequest::Method::Post);
}

ReimageNodesRequest::~ReimageNodesRequest() {}

bool ReimageNodesRequest::getIgnoreFailedNodeTasks() const {
  return ignoreFailedNodeTasks_;
}

void ReimageNodesRequest::setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) {
  ignoreFailedNodeTasks_ = ignoreFailedNodeTasks;
  setBodyParameter(std::string("IgnoreFailedNodeTasks"), ignoreFailedNodeTasks ? "true" : "false");
}

std::string ReimageNodesRequest::getClusterId() const {
  return clusterId_;
}

void ReimageNodesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::vector<ReimageNodesRequest::Nodes> ReimageNodesRequest::getNodes() const {
  return nodes_;
}

void ReimageNodesRequest::setNodes(const std::vector<ReimageNodesRequest::Nodes> &nodes) {
  nodes_ = nodes;
  for(int dep1 = 0; dep1 != nodes.size(); dep1++) {
    setBodyParameter(std::string("Nodes") + "." + std::to_string(dep1 + 1) + ".Hostname", nodes[dep1].hostname);
    setBodyParameter(std::string("Nodes") + "." + std::to_string(dep1 + 1) + ".ImageId", nodes[dep1].imageId);
    setBodyParameter(std::string("Nodes") + "." + std::to_string(dep1 + 1) + ".LoginPassword", nodes[dep1].loginPassword);
    setBodyParameter(std::string("Nodes") + "." + std::to_string(dep1 + 1) + ".NodeId", nodes[dep1].nodeId);
  }
}

