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

#include <alibabacloud/arms/model/BindPrometheusGrafanaInstanceRequest.h>

using AlibabaCloud::ARMS::Model::BindPrometheusGrafanaInstanceRequest;

BindPrometheusGrafanaInstanceRequest::BindPrometheusGrafanaInstanceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "BindPrometheusGrafanaInstance") {
  setMethod(HttpRequest::Method::Post);
}

BindPrometheusGrafanaInstanceRequest::~BindPrometheusGrafanaInstanceRequest() {}

std::string BindPrometheusGrafanaInstanceRequest::getGrafanaInstanceId() const {
  return grafanaInstanceId_;
}

void BindPrometheusGrafanaInstanceRequest::setGrafanaInstanceId(const std::string &grafanaInstanceId) {
  grafanaInstanceId_ = grafanaInstanceId;
  setParameter(std::string("GrafanaInstanceId"), grafanaInstanceId);
}

std::string BindPrometheusGrafanaInstanceRequest::getClusterId() const {
  return clusterId_;
}

void BindPrometheusGrafanaInstanceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string BindPrometheusGrafanaInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void BindPrometheusGrafanaInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string BindPrometheusGrafanaInstanceRequest::getRegionId() const {
  return regionId_;
}

void BindPrometheusGrafanaInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

