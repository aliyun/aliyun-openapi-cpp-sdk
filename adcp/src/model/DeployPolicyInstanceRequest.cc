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

#include <alibabacloud/adcp/model/DeployPolicyInstanceRequest.h>

using AlibabaCloud::Adcp::Model::DeployPolicyInstanceRequest;

DeployPolicyInstanceRequest::DeployPolicyInstanceRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DeployPolicyInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeployPolicyInstanceRequest::~DeployPolicyInstanceRequest() {}

std::string DeployPolicyInstanceRequest::getClusterId() const {
  return clusterId_;
}

void DeployPolicyInstanceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DeployPolicyInstanceRequest::getPolicyAction() const {
  return policyAction_;
}

void DeployPolicyInstanceRequest::setPolicyAction(const std::string &policyAction) {
  policyAction_ = policyAction;
  setParameter(std::string("PolicyAction"), policyAction);
}

std::vector<DeployPolicyInstanceRequest::std::string> DeployPolicyInstanceRequest::getClusterIds() const {
  return clusterIds_;
}

void DeployPolicyInstanceRequest::setClusterIds(const std::vector<DeployPolicyInstanceRequest::std::string> &clusterIds) {
  clusterIds_ = clusterIds;
  for(int dep1 = 0; dep1 != clusterIds.size(); dep1++) {
    setParameter(std::string("ClusterIds") + "." + std::to_string(dep1 + 1), clusterIds[dep1]);
  }
}

std::string DeployPolicyInstanceRequest::getPolicyName() const {
  return policyName_;
}

void DeployPolicyInstanceRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::vector<DeployPolicyInstanceRequest::std::string> DeployPolicyInstanceRequest::getNamespaces() const {
  return namespaces_;
}

void DeployPolicyInstanceRequest::setNamespaces(const std::vector<DeployPolicyInstanceRequest::std::string> &namespaces) {
  namespaces_ = namespaces;
  for(int dep1 = 0; dep1 != namespaces.size(); dep1++) {
    setParameter(std::string("Namespaces") + "." + std::to_string(dep1 + 1), namespaces[dep1]);
  }
}

