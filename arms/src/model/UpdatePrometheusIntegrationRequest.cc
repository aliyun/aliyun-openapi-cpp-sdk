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

#include <alibabacloud/arms/model/UpdatePrometheusIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::UpdatePrometheusIntegrationRequest;

UpdatePrometheusIntegrationRequest::UpdatePrometheusIntegrationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdatePrometheusIntegration") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrometheusIntegrationRequest::~UpdatePrometheusIntegrationRequest() {}

std::string UpdatePrometheusIntegrationRequest::getIntegrationType() const {
  return integrationType_;
}

void UpdatePrometheusIntegrationRequest::setIntegrationType(const std::string &integrationType) {
  integrationType_ = integrationType;
  setParameter(std::string("IntegrationType"), integrationType);
}

std::string UpdatePrometheusIntegrationRequest::getClusterId() const {
  return clusterId_;
}

void UpdatePrometheusIntegrationRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long UpdatePrometheusIntegrationRequest::getInstanceId() const {
  return instanceId_;
}

void UpdatePrometheusIntegrationRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string UpdatePrometheusIntegrationRequest::getRegionId() const {
  return regionId_;
}

void UpdatePrometheusIntegrationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdatePrometheusIntegrationRequest::getParam() const {
  return param_;
}

void UpdatePrometheusIntegrationRequest::setParam(const std::string &param) {
  param_ = param;
  setParameter(std::string("Param"), param);
}

