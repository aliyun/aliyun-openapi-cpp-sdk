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

#include <alibabacloud/eflo-controller/model/ShrinkClusterRequest.h>

using AlibabaCloud::Eflo_controller::Model::ShrinkClusterRequest;

ShrinkClusterRequest::ShrinkClusterRequest()
    : RpcServiceRequest("eflo-controller", "2022-12-15", "ShrinkCluster") {
  setMethod(HttpRequest::Method::Post);
}

ShrinkClusterRequest::~ShrinkClusterRequest() {}

bool ShrinkClusterRequest::getIgnoreFailedNodeTasks() const {
  return ignoreFailedNodeTasks_;
}

void ShrinkClusterRequest::setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) {
  ignoreFailedNodeTasks_ = ignoreFailedNodeTasks;
  setBodyParameter(std::string("IgnoreFailedNodeTasks"), ignoreFailedNodeTasks ? "true" : "false");
}

std::string ShrinkClusterRequest::getClusterId() const {
  return clusterId_;
}

void ShrinkClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::vector<ShrinkClusterRequest::NodeGroups> ShrinkClusterRequest::getNodeGroups() const {
  return nodeGroups_;
}

void ShrinkClusterRequest::setNodeGroups(const std::vector<ShrinkClusterRequest::NodeGroups> &nodeGroups) {
  nodeGroups_ = nodeGroups;
  for(int dep1 = 0; dep1 != nodeGroups.size(); dep1++) {
    for(int dep2 = 0; dep2 != nodeGroups[dep1].nodes.size(); dep2++) {
      setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".Nodes." + std::to_string(dep2 + 1) + ".NodeId", nodeGroups[dep1].nodes[dep2].nodeId);
    }
    setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".NodeGroupId", nodeGroups[dep1].nodeGroupId);
  }
}

