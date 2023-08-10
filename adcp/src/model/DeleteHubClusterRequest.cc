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

#include <alibabacloud/adcp/model/DeleteHubClusterRequest.h>

using AlibabaCloud::Adcp::Model::DeleteHubClusterRequest;

DeleteHubClusterRequest::DeleteHubClusterRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DeleteHubCluster") {
  setMethod(HttpRequest::Method::Post);
}

DeleteHubClusterRequest::~DeleteHubClusterRequest() {}

std::vector<DeleteHubClusterRequest::std::string> DeleteHubClusterRequest::getRetainResources() const {
  return retainResources_;
}

void DeleteHubClusterRequest::setRetainResources(const std::vector<DeleteHubClusterRequest::std::string> &retainResources) {
  retainResources_ = retainResources;
  for(int dep1 = 0; dep1 != retainResources.size(); dep1++) {
    setParameter(std::string("RetainResources") + "." + std::to_string(dep1 + 1), retainResources[dep1]);
  }
}

std::string DeleteHubClusterRequest::getClusterId() const {
  return clusterId_;
}

void DeleteHubClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

bool DeleteHubClusterRequest::getForce() const {
  return force_;
}

void DeleteHubClusterRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

