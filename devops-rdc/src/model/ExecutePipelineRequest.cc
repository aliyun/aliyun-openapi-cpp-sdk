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

#include <alibabacloud/devops-rdc/model/ExecutePipelineRequest.h>

using AlibabaCloud::Devops_rdc::Model::ExecutePipelineRequest;

ExecutePipelineRequest::ExecutePipelineRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "ExecutePipeline") {
  setMethod(HttpRequest::Method::Post);
}

ExecutePipelineRequest::~ExecutePipelineRequest() {}

std::string ExecutePipelineRequest::getParameters() const {
  return parameters_;
}

void ExecutePipelineRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setBodyParameter(std::string("Parameters"), parameters);
}

std::string ExecutePipelineRequest::getUserPk() const {
  return userPk_;
}

void ExecutePipelineRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string ExecutePipelineRequest::getOrgId() const {
  return orgId_;
}

void ExecutePipelineRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

long ExecutePipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void ExecutePipelineRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setBodyParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

