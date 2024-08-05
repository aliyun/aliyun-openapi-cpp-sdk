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

#include <alibabacloud/arms/model/UpdatePrometheusMonitoringRequest.h>

using AlibabaCloud::ARMS::Model::UpdatePrometheusMonitoringRequest;

UpdatePrometheusMonitoringRequest::UpdatePrometheusMonitoringRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdatePrometheusMonitoring") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrometheusMonitoringRequest::~UpdatePrometheusMonitoringRequest() {}

std::string UpdatePrometheusMonitoringRequest::getConfigYaml() const {
  return configYaml_;
}

void UpdatePrometheusMonitoringRequest::setConfigYaml(const std::string &configYaml) {
  configYaml_ = configYaml;
  setBodyParameter(std::string("ConfigYaml"), configYaml);
}

std::string UpdatePrometheusMonitoringRequest::getClusterId() const {
  return clusterId_;
}

void UpdatePrometheusMonitoringRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdatePrometheusMonitoringRequest::getType() const {
  return type_;
}

void UpdatePrometheusMonitoringRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string UpdatePrometheusMonitoringRequest::getMonitoringName() const {
  return monitoringName_;
}

void UpdatePrometheusMonitoringRequest::setMonitoringName(const std::string &monitoringName) {
  monitoringName_ = monitoringName;
  setParameter(std::string("MonitoringName"), monitoringName);
}

std::string UpdatePrometheusMonitoringRequest::getRegionId() const {
  return regionId_;
}

void UpdatePrometheusMonitoringRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

