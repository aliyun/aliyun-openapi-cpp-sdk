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

#include <alibabacloud/adcp/model/AttachClusterToHubRequest.h>

using AlibabaCloud::Adcp::Model::AttachClusterToHubRequest;

AttachClusterToHubRequest::AttachClusterToHubRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "AttachClusterToHub") {
  setMethod(HttpRequest::Method::Post);
}

AttachClusterToHubRequest::~AttachClusterToHubRequest() {}

std::string AttachClusterToHubRequest::getClusterId() const {
  return clusterId_;
}

void AttachClusterToHubRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string AttachClusterToHubRequest::getClusterIds() const {
  return clusterIds_;
}

void AttachClusterToHubRequest::setClusterIds(const std::string &clusterIds) {
  clusterIds_ = clusterIds;
  setBodyParameter(std::string("ClusterIds"), clusterIds);
}

bool AttachClusterToHubRequest::getAttachToMesh() const {
  return attachToMesh_;
}

void AttachClusterToHubRequest::setAttachToMesh(bool attachToMesh) {
  attachToMesh_ = attachToMesh;
  setParameter(std::string("AttachToMesh"), attachToMesh ? "true" : "false");
}

