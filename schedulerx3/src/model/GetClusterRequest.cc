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

#include <alibabacloud/schedulerx3/model/GetClusterRequest.h>

using AlibabaCloud::SchedulerX3::Model::GetClusterRequest;

GetClusterRequest::GetClusterRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "GetCluster") {
  setMethod(HttpRequest::Method::Get);
}

GetClusterRequest::~GetClusterRequest() {}

std::string GetClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetClusterRequest::getClusterId() const {
  return clusterId_;
}

void GetClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

