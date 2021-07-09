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

#include <alibabacloud/devops-rdc/model/UpdatePipelineEnvVarsRequest.h>

using AlibabaCloud::Devops_rdc::Model::UpdatePipelineEnvVarsRequest;

UpdatePipelineEnvVarsRequest::UpdatePipelineEnvVarsRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "UpdatePipelineEnvVars") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePipelineEnvVarsRequest::~UpdatePipelineEnvVarsRequest() {}

std::string UpdatePipelineEnvVarsRequest::getEnvVars() const {
  return envVars_;
}

void UpdatePipelineEnvVarsRequest::setEnvVars(const std::string &envVars) {
  envVars_ = envVars;
  setParameter(std::string("EnvVars"), envVars);
}

std::string UpdatePipelineEnvVarsRequest::getOrgId() const {
  return orgId_;
}

void UpdatePipelineEnvVarsRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

long UpdatePipelineEnvVarsRequest::getPipelineId() const {
  return pipelineId_;
}

void UpdatePipelineEnvVarsRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

