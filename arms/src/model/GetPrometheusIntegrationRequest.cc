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

#include <alibabacloud/arms/model/GetPrometheusIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::GetPrometheusIntegrationRequest;

GetPrometheusIntegrationRequest::GetPrometheusIntegrationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetPrometheusIntegration") {
  setMethod(HttpRequest::Method::Post);
}

GetPrometheusIntegrationRequest::~GetPrometheusIntegrationRequest() {}

long GetPrometheusIntegrationRequest::getInstanceId() const {
  return instanceId_;
}

void GetPrometheusIntegrationRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string GetPrometheusIntegrationRequest::getRegionId() const {
  return regionId_;
}

void GetPrometheusIntegrationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetPrometheusIntegrationRequest::getIntegrationType() const {
  return integrationType_;
}

void GetPrometheusIntegrationRequest::setIntegrationType(const std::string &integrationType) {
  integrationType_ = integrationType;
  setParameter(std::string("IntegrationType"), integrationType);
}

std::string GetPrometheusIntegrationRequest::getClusterId() const {
  return clusterId_;
}

void GetPrometheusIntegrationRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

