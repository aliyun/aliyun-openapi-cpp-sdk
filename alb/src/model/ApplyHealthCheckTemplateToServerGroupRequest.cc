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

#include <alibabacloud/alb/model/ApplyHealthCheckTemplateToServerGroupRequest.h>

using AlibabaCloud::Alb::Model::ApplyHealthCheckTemplateToServerGroupRequest;

ApplyHealthCheckTemplateToServerGroupRequest::ApplyHealthCheckTemplateToServerGroupRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ApplyHealthCheckTemplateToServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

ApplyHealthCheckTemplateToServerGroupRequest::~ApplyHealthCheckTemplateToServerGroupRequest() {}

std::string ApplyHealthCheckTemplateToServerGroupRequest::getClientToken() const {
  return clientToken_;
}

void ApplyHealthCheckTemplateToServerGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ApplyHealthCheckTemplateToServerGroupRequest::getServerGroupId() const {
  return serverGroupId_;
}

void ApplyHealthCheckTemplateToServerGroupRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setParameter(std::string("ServerGroupId"), serverGroupId);
}

bool ApplyHealthCheckTemplateToServerGroupRequest::getDryRun() const {
  return dryRun_;
}

void ApplyHealthCheckTemplateToServerGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ApplyHealthCheckTemplateToServerGroupRequest::getHealthCheckTemplateId() const {
  return healthCheckTemplateId_;
}

void ApplyHealthCheckTemplateToServerGroupRequest::setHealthCheckTemplateId(const std::string &healthCheckTemplateId) {
  healthCheckTemplateId_ = healthCheckTemplateId;
  setParameter(std::string("HealthCheckTemplateId"), healthCheckTemplateId);
}

