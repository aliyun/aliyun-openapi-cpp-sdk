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

#include <alibabacloud/dataworks-public/model/UpdateClusterConfigsRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateClusterConfigsRequest;

UpdateClusterConfigsRequest::UpdateClusterConfigsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateClusterConfigs") {
  setMethod(HttpRequest::Method::Post);
}

UpdateClusterConfigsRequest::~UpdateClusterConfigsRequest() {}

std::string UpdateClusterConfigsRequest::getConfigType() const {
  return configType_;
}

void UpdateClusterConfigsRequest::setConfigType(const std::string &configType) {
  configType_ = configType;
  setParameter(std::string("ConfigType"), configType);
}

long UpdateClusterConfigsRequest::getClusterId() const {
  return clusterId_;
}

void UpdateClusterConfigsRequest::setClusterId(long clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

std::vector<UpdateClusterConfigsRequest::ConfigValues> UpdateClusterConfigsRequest::getConfigValues() const {
  return configValues_;
}

void UpdateClusterConfigsRequest::setConfigValues(const std::vector<UpdateClusterConfigsRequest::ConfigValues> &configValues) {
  configValues_ = configValues;
  for(int dep1 = 0; dep1 != configValues.size(); dep1++) {
    setBodyParameter(std::string("ConfigValues") + "." + std::to_string(dep1 + 1) + ".EnableOverwrite", configValues[dep1].enableOverwrite ? "true" : "false");
    setBodyParameter(std::string("ConfigValues") + "." + std::to_string(dep1 + 1) + ".ModuleName", configValues[dep1].moduleName);
    setBodyParameter(std::string("ConfigValues") + "." + std::to_string(dep1 + 1) + ".ConfigValue", configValues[dep1].configValue);
  }
}

long UpdateClusterConfigsRequest::getProjectId() const {
  return projectId_;
}

void UpdateClusterConfigsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

