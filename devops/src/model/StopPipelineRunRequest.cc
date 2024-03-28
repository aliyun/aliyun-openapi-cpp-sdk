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

#include <alibabacloud/devops/model/StopPipelineRunRequest.h>

using AlibabaCloud::Devops::Model::StopPipelineRunRequest;

StopPipelineRunRequest::StopPipelineRunRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines/[pipelineId]/pipelineRuns/[pipelineRunId]/stop"};
  setMethod(HttpRequest::Method::Put);
}

StopPipelineRunRequest::~StopPipelineRunRequest() {}

long StopPipelineRunRequest::getPipelineId() const {
  return pipelineId_;
}

void StopPipelineRunRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string StopPipelineRunRequest::getOrganizationId() const {
  return organizationId_;
}

void StopPipelineRunRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long StopPipelineRunRequest::getPipelineRunId() const {
  return pipelineRunId_;
}

void StopPipelineRunRequest::setPipelineRunId(long pipelineRunId) {
  pipelineRunId_ = pipelineRunId;
  setParameter(std::string("pipelineRunId"), std::to_string(pipelineRunId));
}

