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

#include <alibabacloud/eflo/model/GetFabricTopologyRequest.h>

using AlibabaCloud::Eflo::Model::GetFabricTopologyRequest;

GetFabricTopologyRequest::GetFabricTopologyRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetFabricTopology") {
  setMethod(HttpRequest::Method::Post);
}

GetFabricTopologyRequest::~GetFabricTopologyRequest() {}

std::string GetFabricTopologyRequest::getClusterId() const {
  return clusterId_;
}

void GetFabricTopologyRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string GetFabricTopologyRequest::getRegionId() const {
  return regionId_;
}

void GetFabricTopologyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string GetFabricTopologyRequest::getVpdId() const {
  return vpdId_;
}

void GetFabricTopologyRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string GetFabricTopologyRequest::getVpcId() const {
  return vpcId_;
}

void GetFabricTopologyRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::vector<std::string> GetFabricTopologyRequest::getLniIds() const {
  return lniIds_;
}

void GetFabricTopologyRequest::setLniIds(const std::vector<std::string> &lniIds) {
  lniIds_ = lniIds;
}

std::vector<std::string> GetFabricTopologyRequest::getNodeIds() const {
  return nodeIds_;
}

void GetFabricTopologyRequest::setNodeIds(const std::vector<std::string> &nodeIds) {
  nodeIds_ = nodeIds;
}

