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

#include <alibabacloud/adcp/model/DetachClusterFromHubRequest.h>

using AlibabaCloud::Adcp::Model::DetachClusterFromHubRequest;

DetachClusterFromHubRequest::DetachClusterFromHubRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DetachClusterFromHub") {
  setMethod(HttpRequest::Method::Post);
}

DetachClusterFromHubRequest::~DetachClusterFromHubRequest() {}

bool DetachClusterFromHubRequest::getDetachFromMesh() const {
  return detachFromMesh_;
}

void DetachClusterFromHubRequest::setDetachFromMesh(bool detachFromMesh) {
  detachFromMesh_ = detachFromMesh;
  setParameter(std::string("DetachFromMesh"), detachFromMesh ? "true" : "false");
}

std::string DetachClusterFromHubRequest::getClusterId() const {
  return clusterId_;
}

void DetachClusterFromHubRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DetachClusterFromHubRequest::getClusterIds() const {
  return clusterIds_;
}

void DetachClusterFromHubRequest::setClusterIds(const std::string &clusterIds) {
  clusterIds_ = clusterIds;
  setBodyParameter(std::string("ClusterIds"), clusterIds);
}

