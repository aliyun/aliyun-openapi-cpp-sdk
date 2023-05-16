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

#include <alibabacloud/computenest/model/ContinueDeployServiceInstanceRequest.h>

using AlibabaCloud::ComputeNest::Model::ContinueDeployServiceInstanceRequest;

ContinueDeployServiceInstanceRequest::ContinueDeployServiceInstanceRequest()
    : RpcServiceRequest("computenest", "2021-06-01", "ContinueDeployServiceInstance") {
  setMethod(HttpRequest::Method::Post);
}

ContinueDeployServiceInstanceRequest::~ContinueDeployServiceInstanceRequest() {}

std::string ContinueDeployServiceInstanceRequest::getClientToken() const {
  return clientToken_;
}

void ContinueDeployServiceInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ContinueDeployServiceInstanceRequest::getRegionId() const {
  return regionId_;
}

void ContinueDeployServiceInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ContinueDeployServiceInstanceRequest::getServiceInstanceId() const {
  return serviceInstanceId_;
}

void ContinueDeployServiceInstanceRequest::setServiceInstanceId(const std::string &serviceInstanceId) {
  serviceInstanceId_ = serviceInstanceId;
  setParameter(std::string("ServiceInstanceId"), serviceInstanceId);
}

bool ContinueDeployServiceInstanceRequest::getDryRun() const {
  return dryRun_;
}

void ContinueDeployServiceInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ContinueDeployServiceInstanceRequest::getParameters() const {
  return parameters_;
}

void ContinueDeployServiceInstanceRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

std::vector<std::string> ContinueDeployServiceInstanceRequest::getOption() const {
  return option_;
}

void ContinueDeployServiceInstanceRequest::setOption(const std::vector<std::string> &option) {
  option_ = option;
}

