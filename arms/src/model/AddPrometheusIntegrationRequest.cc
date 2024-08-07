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

#include <alibabacloud/arms/model/AddPrometheusIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::AddPrometheusIntegrationRequest;

AddPrometheusIntegrationRequest::AddPrometheusIntegrationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "AddPrometheusIntegration") {
  setMethod(HttpRequest::Method::Post);
}

AddPrometheusIntegrationRequest::~AddPrometheusIntegrationRequest() {}

std::string AddPrometheusIntegrationRequest::getRegionId() const {
  return regionId_;
}

void AddPrometheusIntegrationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddPrometheusIntegrationRequest::getIntegrationType() const {
  return integrationType_;
}

void AddPrometheusIntegrationRequest::setIntegrationType(const std::string &integrationType) {
  integrationType_ = integrationType;
  setParameter(std::string("IntegrationType"), integrationType);
}

std::string AddPrometheusIntegrationRequest::getParam() const {
  return param_;
}

void AddPrometheusIntegrationRequest::setParam(const std::string &param) {
  param_ = param;
  setParameter(std::string("Param"), param);
}

std::string AddPrometheusIntegrationRequest::getClusterId() const {
  return clusterId_;
}

void AddPrometheusIntegrationRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

