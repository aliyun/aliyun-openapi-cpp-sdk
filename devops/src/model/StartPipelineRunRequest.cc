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

#include <alibabacloud/devops/model/StartPipelineRunRequest.h>

using AlibabaCloud::Devops::Model::StartPipelineRunRequest;

StartPipelineRunRequest::StartPipelineRunRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organizations/[organizationId]/pipelines/[pipelineId]/run"};
  setMethod(HttpRequest::Method::Post);
}

StartPipelineRunRequest::~StartPipelineRunRequest() {}

std::string StartPipelineRunRequest::getParams() const {
  return params_;
}

void StartPipelineRunRequest::setParams(const std::string &params) {
  params_ = params;
  setBodyParameter(std::string("params"), params);
}

long StartPipelineRunRequest::getPipelineId() const {
  return pipelineId_;
}

void StartPipelineRunRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string StartPipelineRunRequest::getOrganizationId() const {
  return organizationId_;
}

void StartPipelineRunRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

