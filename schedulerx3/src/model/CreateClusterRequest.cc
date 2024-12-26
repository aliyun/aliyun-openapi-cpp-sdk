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

#include <alibabacloud/schedulerx3/model/CreateClusterRequest.h>

using AlibabaCloud::SchedulerX3::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "CreateCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest() {}

std::string CreateClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateClusterRequest::getClusterName() const {
  return clusterName_;
}

void CreateClusterRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setBodyParameter(std::string("ClusterName"), clusterName);
}

int CreateClusterRequest::getProductType() const {
  return productType_;
}

void CreateClusterRequest::setProductType(int productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), std::to_string(productType));
}

std::string CreateClusterRequest::getEngineType() const {
  return engineType_;
}

void CreateClusterRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setBodyParameter(std::string("EngineType"), engineType);
}

std::vector<CreateClusterRequest::VSwitches> CreateClusterRequest::getVSwitches() const {
  return vSwitches_;
}

void CreateClusterRequest::setVSwitches(const std::vector<CreateClusterRequest::VSwitches> &vSwitches) {
  vSwitches_ = vSwitches;
  for(int dep1 = 0; dep1 != vSwitches.size(); dep1++) {
    setBodyParameter(std::string("VSwitches") + "." + std::to_string(dep1 + 1) + ".VSwitchId", vSwitches[dep1].vSwitchId);
    setBodyParameter(std::string("VSwitches") + "." + std::to_string(dep1 + 1) + ".ZoneId", vSwitches[dep1].zoneId);
  }
}

std::string CreateClusterRequest::getClusterSpec() const {
  return clusterSpec_;
}

void CreateClusterRequest::setClusterSpec(const std::string &clusterSpec) {
  clusterSpec_ = clusterSpec;
  setBodyParameter(std::string("ClusterSpec"), clusterSpec);
}

std::string CreateClusterRequest::getVpcId() const {
  return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

