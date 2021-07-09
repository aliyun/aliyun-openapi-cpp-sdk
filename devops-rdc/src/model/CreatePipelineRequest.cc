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

#include <alibabacloud/devops-rdc/model/CreatePipelineRequest.h>

using AlibabaCloud::Devops_rdc::Model::CreatePipelineRequest;

CreatePipelineRequest::CreatePipelineRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "CreatePipeline") {
  setMethod(HttpRequest::Method::Post);
}

CreatePipelineRequest::~CreatePipelineRequest() {}

std::string CreatePipelineRequest::getPipeline() const {
  return pipeline_;
}

void CreatePipelineRequest::setPipeline(const std::string &pipeline) {
  pipeline_ = pipeline;
  setBodyParameter(std::string("Pipeline"), pipeline);
}

std::string CreatePipelineRequest::getUserPk() const {
  return userPk_;
}

void CreatePipelineRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string CreatePipelineRequest::getOrgId() const {
  return orgId_;
}

void CreatePipelineRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

