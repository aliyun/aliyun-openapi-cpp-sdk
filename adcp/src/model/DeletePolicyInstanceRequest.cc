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

#include <alibabacloud/adcp/model/DeletePolicyInstanceRequest.h>

using AlibabaCloud::Adcp::Model::DeletePolicyInstanceRequest;

DeletePolicyInstanceRequest::DeletePolicyInstanceRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DeletePolicyInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeletePolicyInstanceRequest::~DeletePolicyInstanceRequest() {}

std::string DeletePolicyInstanceRequest::getClusterId() const {
  return clusterId_;
}

void DeletePolicyInstanceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<DeletePolicyInstanceRequest::std::string> DeletePolicyInstanceRequest::getClusterIds() const {
  return clusterIds_;
}

void DeletePolicyInstanceRequest::setClusterIds(const std::vector<DeletePolicyInstanceRequest::std::string> &clusterIds) {
  clusterIds_ = clusterIds;
  for(int dep1 = 0; dep1 != clusterIds.size(); dep1++) {
    setParameter(std::string("ClusterIds") + "." + std::to_string(dep1 + 1), clusterIds[dep1]);
  }
}

std::string DeletePolicyInstanceRequest::getPolicyName() const {
  return policyName_;
}

void DeletePolicyInstanceRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

