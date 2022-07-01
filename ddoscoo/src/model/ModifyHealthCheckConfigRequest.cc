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

#include <alibabacloud/ddoscoo/model/ModifyHealthCheckConfigRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyHealthCheckConfigRequest;

ModifyHealthCheckConfigRequest::ModifyHealthCheckConfigRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyHealthCheckConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyHealthCheckConfigRequest::~ModifyHealthCheckConfigRequest() {}

std::string ModifyHealthCheckConfigRequest::getHealthCheck() const {
  return healthCheck_;
}

void ModifyHealthCheckConfigRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string ModifyHealthCheckConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyHealthCheckConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyHealthCheckConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyHealthCheckConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyHealthCheckConfigRequest::getFrontendPort() const {
  return frontendPort_;
}

void ModifyHealthCheckConfigRequest::setFrontendPort(int frontendPort) {
  frontendPort_ = frontendPort;
  setParameter(std::string("FrontendPort"), std::to_string(frontendPort));
}

std::string ModifyHealthCheckConfigRequest::getForwardProtocol() const {
  return forwardProtocol_;
}

void ModifyHealthCheckConfigRequest::setForwardProtocol(const std::string &forwardProtocol) {
  forwardProtocol_ = forwardProtocol;
  setParameter(std::string("ForwardProtocol"), forwardProtocol);
}

