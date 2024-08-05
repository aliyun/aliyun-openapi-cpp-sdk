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

#include <alibabacloud/arms/model/CreatePrometheusMonitoringRequest.h>

using AlibabaCloud::ARMS::Model::CreatePrometheusMonitoringRequest;

CreatePrometheusMonitoringRequest::CreatePrometheusMonitoringRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreatePrometheusMonitoring") {
  setMethod(HttpRequest::Method::Post);
}

CreatePrometheusMonitoringRequest::~CreatePrometheusMonitoringRequest() {}

std::string CreatePrometheusMonitoringRequest::getConfigYaml() const {
  return configYaml_;
}

void CreatePrometheusMonitoringRequest::setConfigYaml(const std::string &configYaml) {
  configYaml_ = configYaml;
  setBodyParameter(std::string("ConfigYaml"), configYaml);
}

std::string CreatePrometheusMonitoringRequest::getClusterId() const {
  return clusterId_;
}

void CreatePrometheusMonitoringRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreatePrometheusMonitoringRequest::getType() const {
  return type_;
}

void CreatePrometheusMonitoringRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreatePrometheusMonitoringRequest::getRegionId() const {
  return regionId_;
}

void CreatePrometheusMonitoringRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePrometheusMonitoringRequest::getStatus() const {
  return status_;
}

void CreatePrometheusMonitoringRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

