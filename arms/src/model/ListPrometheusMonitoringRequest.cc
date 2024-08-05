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

#include <alibabacloud/arms/model/ListPrometheusMonitoringRequest.h>

using AlibabaCloud::ARMS::Model::ListPrometheusMonitoringRequest;

ListPrometheusMonitoringRequest::ListPrometheusMonitoringRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListPrometheusMonitoring") {
  setMethod(HttpRequest::Method::Post);
}

ListPrometheusMonitoringRequest::~ListPrometheusMonitoringRequest() {}

std::string ListPrometheusMonitoringRequest::getRegionId() const {
  return regionId_;
}

void ListPrometheusMonitoringRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPrometheusMonitoringRequest::getClusterId() const {
  return clusterId_;
}

void ListPrometheusMonitoringRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListPrometheusMonitoringRequest::getType() const {
  return type_;
}

void ListPrometheusMonitoringRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

