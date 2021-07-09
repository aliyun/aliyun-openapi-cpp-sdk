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

#include <alibabacloud/devops-rdc/model/AddCodeupSourceToPipelineRequest.h>

using AlibabaCloud::Devops_rdc::Model::AddCodeupSourceToPipelineRequest;

AddCodeupSourceToPipelineRequest::AddCodeupSourceToPipelineRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "AddCodeupSourceToPipeline") {
  setMethod(HttpRequest::Method::Post);
}

AddCodeupSourceToPipelineRequest::~AddCodeupSourceToPipelineRequest() {}

std::string AddCodeupSourceToPipelineRequest::getCodePath() const {
  return codePath_;
}

void AddCodeupSourceToPipelineRequest::setCodePath(const std::string &codePath) {
  codePath_ = codePath;
  setParameter(std::string("CodePath"), codePath);
}

std::string AddCodeupSourceToPipelineRequest::getCodeBranch() const {
  return codeBranch_;
}

void AddCodeupSourceToPipelineRequest::setCodeBranch(const std::string &codeBranch) {
  codeBranch_ = codeBranch;
  setParameter(std::string("CodeBranch"), codeBranch);
}

std::string AddCodeupSourceToPipelineRequest::getOrgId() const {
  return orgId_;
}

void AddCodeupSourceToPipelineRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

long AddCodeupSourceToPipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void AddCodeupSourceToPipelineRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

