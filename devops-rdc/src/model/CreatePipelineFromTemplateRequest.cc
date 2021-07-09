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

#include <alibabacloud/devops-rdc/model/CreatePipelineFromTemplateRequest.h>

using AlibabaCloud::Devops_rdc::Model::CreatePipelineFromTemplateRequest;

CreatePipelineFromTemplateRequest::CreatePipelineFromTemplateRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "CreatePipelineFromTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreatePipelineFromTemplateRequest::~CreatePipelineFromTemplateRequest() {}

std::string CreatePipelineFromTemplateRequest::getPipelineName() const {
  return pipelineName_;
}

void CreatePipelineFromTemplateRequest::setPipelineName(const std::string &pipelineName) {
  pipelineName_ = pipelineName;
  setParameter(std::string("PipelineName"), pipelineName);
}

std::string CreatePipelineFromTemplateRequest::getOrgId() const {
  return orgId_;
}

void CreatePipelineFromTemplateRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

long CreatePipelineFromTemplateRequest::getPipelineTemplateId() const {
  return pipelineTemplateId_;
}

void CreatePipelineFromTemplateRequest::setPipelineTemplateId(long pipelineTemplateId) {
  pipelineTemplateId_ = pipelineTemplateId;
  setParameter(std::string("PipelineTemplateId"), std::to_string(pipelineTemplateId));
}

