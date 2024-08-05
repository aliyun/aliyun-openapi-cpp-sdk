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

#include <alibabacloud/arms/model/GetPrometheusMonitoringRequest.h>

using AlibabaCloud::ARMS::Model::GetPrometheusMonitoringRequest;

GetPrometheusMonitoringRequest::GetPrometheusMonitoringRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetPrometheusMonitoring") {
  setMethod(HttpRequest::Method::Post);
}

GetPrometheusMonitoringRequest::~GetPrometheusMonitoringRequest() {}

std::string GetPrometheusMonitoringRequest::getRegionId() const {
  return regionId_;
}

void GetPrometheusMonitoringRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetPrometheusMonitoringRequest::getClusterId() const {
  return clusterId_;
}

void GetPrometheusMonitoringRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetPrometheusMonitoringRequest::getType() const {
  return type_;
}

void GetPrometheusMonitoringRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string GetPrometheusMonitoringRequest::getMonitoringName() const {
  return monitoringName_;
}

void GetPrometheusMonitoringRequest::setMonitoringName(const std::string &monitoringName) {
  monitoringName_ = monitoringName;
  setParameter(std::string("MonitoringName"), monitoringName);
}

