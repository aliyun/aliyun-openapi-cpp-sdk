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

#include <alibabacloud/arms/model/AddGrafanaRequest.h>

using AlibabaCloud::ARMS::Model::AddGrafanaRequest;

AddGrafanaRequest::AddGrafanaRequest()
    : RpcServiceRequest("arms", "2019-08-08", "AddGrafana") {
  setMethod(HttpRequest::Method::Post);
}

AddGrafanaRequest::~AddGrafanaRequest() {}

std::string AddGrafanaRequest::getRegionId() const {
  return regionId_;
}

void AddGrafanaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddGrafanaRequest::getIntegration() const {
  return integration_;
}

void AddGrafanaRequest::setIntegration(const std::string &integration) {
  integration_ = integration;
  setParameter(std::string("Integration"), integration);
}

std::string AddGrafanaRequest::getClusterId() const {
  return clusterId_;
}

void AddGrafanaRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

