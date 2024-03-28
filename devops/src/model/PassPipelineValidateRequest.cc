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

#include <alibabacloud/devops/model/PassPipelineValidateRequest.h>

using AlibabaCloud::Devops::Model::PassPipelineValidateRequest;

PassPipelineValidateRequest::PassPipelineValidateRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines/[pipelineId]/pipelineRuns/[pipelineRunId]/jobs/[jobId]/pass"};
  setMethod(HttpRequest::Method::Post);
}

PassPipelineValidateRequest::~PassPipelineValidateRequest() {}

long PassPipelineValidateRequest::getPipelineId() const {
  return pipelineId_;
}

void PassPipelineValidateRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string PassPipelineValidateRequest::getOrganizationId() const {
  return organizationId_;
}

void PassPipelineValidateRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long PassPipelineValidateRequest::getPipelineRunId() const {
  return pipelineRunId_;
}

void PassPipelineValidateRequest::setPipelineRunId(long pipelineRunId) {
  pipelineRunId_ = pipelineRunId;
  setParameter(std::string("pipelineRunId"), std::to_string(pipelineRunId));
}

std::string PassPipelineValidateRequest::getJobId() const {
  return jobId_;
}

void PassPipelineValidateRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("jobId"), jobId);
}

