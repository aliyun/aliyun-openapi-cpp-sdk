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

#include <alibabacloud/arms/model/UpdatePrometheusMonitoringStatusRequest.h>

using AlibabaCloud::ARMS::Model::UpdatePrometheusMonitoringStatusRequest;

UpdatePrometheusMonitoringStatusRequest::UpdatePrometheusMonitoringStatusRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdatePrometheusMonitoringStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrometheusMonitoringStatusRequest::~UpdatePrometheusMonitoringStatusRequest() {}

std::string UpdatePrometheusMonitoringStatusRequest::getClusterId() const {
  return clusterId_;
}

void UpdatePrometheusMonitoringStatusRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdatePrometheusMonitoringStatusRequest::getType() const {
  return type_;
}

void UpdatePrometheusMonitoringStatusRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string UpdatePrometheusMonitoringStatusRequest::getMonitoringName() const {
  return monitoringName_;
}

void UpdatePrometheusMonitoringStatusRequest::setMonitoringName(const std::string &monitoringName) {
  monitoringName_ = monitoringName;
  setParameter(std::string("MonitoringName"), monitoringName);
}

std::string UpdatePrometheusMonitoringStatusRequest::getRegionId() const {
  return regionId_;
}

void UpdatePrometheusMonitoringStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdatePrometheusMonitoringStatusRequest::getStatus() const {
  return status_;
}

void UpdatePrometheusMonitoringStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

