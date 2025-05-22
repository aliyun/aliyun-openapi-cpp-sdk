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

#include <alibabacloud/rds/model/DeleteRCClusterNodesRequest.h>

using AlibabaCloud::Rds::Model::DeleteRCClusterNodesRequest;

DeleteRCClusterNodesRequest::DeleteRCClusterNodesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteRCClusterNodes") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRCClusterNodesRequest::~DeleteRCClusterNodesRequest() {}

std::vector<DeleteRCClusterNodesRequest::std::string> DeleteRCClusterNodesRequest::getNodes() const {
  return nodes_;
}

void DeleteRCClusterNodesRequest::setNodes(const std::vector<DeleteRCClusterNodesRequest::std::string> &nodes) {
  nodes_ = nodes;
  for(int dep1 = 0; dep1 != nodes.size(); dep1++) {
    setParameter(std::string("Nodes") + "." + std::to_string(dep1 + 1), nodes[dep1]);
  }
}

std::string DeleteRCClusterNodesRequest::getRegionId() const {
  return regionId_;
}

void DeleteRCClusterNodesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DeleteRCClusterNodesRequest::std::string> DeleteRCClusterNodesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DeleteRCClusterNodesRequest::setInstanceIds(const std::vector<DeleteRCClusterNodesRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string DeleteRCClusterNodesRequest::getVpcId() const {
  return vpcId_;
}

void DeleteRCClusterNodesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

