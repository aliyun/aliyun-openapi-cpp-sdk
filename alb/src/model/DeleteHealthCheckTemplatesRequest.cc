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

#include <alibabacloud/alb/model/DeleteHealthCheckTemplatesRequest.h>

using AlibabaCloud::Alb::Model::DeleteHealthCheckTemplatesRequest;

DeleteHealthCheckTemplatesRequest::DeleteHealthCheckTemplatesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "DeleteHealthCheckTemplates") {
  setMethod(HttpRequest::Method::Post);
}

DeleteHealthCheckTemplatesRequest::~DeleteHealthCheckTemplatesRequest() {}

std::string DeleteHealthCheckTemplatesRequest::getClientToken() const {
  return clientToken_;
}

void DeleteHealthCheckTemplatesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteHealthCheckTemplatesRequest::getDryRun() const {
  return dryRun_;
}

void DeleteHealthCheckTemplatesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<DeleteHealthCheckTemplatesRequest::std::string> DeleteHealthCheckTemplatesRequest::getHealthCheckTemplateIds() const {
  return healthCheckTemplateIds_;
}

void DeleteHealthCheckTemplatesRequest::setHealthCheckTemplateIds(const std::vector<DeleteHealthCheckTemplatesRequest::std::string> &healthCheckTemplateIds) {
  healthCheckTemplateIds_ = healthCheckTemplateIds;
  for(int dep1 = 0; dep1 != healthCheckTemplateIds.size(); dep1++) {
    setParameter(std::string("HealthCheckTemplateIds") + "." + std::to_string(dep1 + 1), healthCheckTemplateIds[dep1]);
  }
}

