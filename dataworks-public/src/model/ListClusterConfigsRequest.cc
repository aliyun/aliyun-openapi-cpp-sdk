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

#include <alibabacloud/dataworks-public/model/ListClusterConfigsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListClusterConfigsRequest;

ListClusterConfigsRequest::ListClusterConfigsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListClusterConfigs") {
  setMethod(HttpRequest::Method::Get);
}

ListClusterConfigsRequest::~ListClusterConfigsRequest() {}

std::string ListClusterConfigsRequest::getConfigType() const {
  return configType_;
}

void ListClusterConfigsRequest::setConfigType(const std::string &configType) {
  configType_ = configType;
  setParameter(std::string("ConfigType"), configType);
}

long ListClusterConfigsRequest::getClusterId() const {
  return clusterId_;
}

void ListClusterConfigsRequest::setClusterId(long clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

long ListClusterConfigsRequest::getProjectId() const {
  return projectId_;
}

void ListClusterConfigsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

