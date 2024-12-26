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

#include <alibabacloud/schedulerx3/model/UpdateClusterRequest.h>

using AlibabaCloud::SchedulerX3::Model::UpdateClusterRequest;

UpdateClusterRequest::UpdateClusterRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "UpdateCluster") {
  setMethod(HttpRequest::Method::Post);
}

UpdateClusterRequest::~UpdateClusterRequest() {}

std::string UpdateClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateClusterRequest::getClusterName() const {
  return clusterName_;
}

void UpdateClusterRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string UpdateClusterRequest::getClusterId() const {
  return clusterId_;
}

void UpdateClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

