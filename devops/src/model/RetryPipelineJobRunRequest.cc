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

#include <alibabacloud/devops/model/RetryPipelineJobRunRequest.h>

using AlibabaCloud::Devops::Model::RetryPipelineJobRunRequest;

RetryPipelineJobRunRequest::RetryPipelineJobRunRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines/[pipelineId]/pipelineRuns/[pipelineRunId]/jobs/[jobId]"};
  setMethod(HttpRequest::Method::Put);
}

RetryPipelineJobRunRequest::~RetryPipelineJobRunRequest() {}

long RetryPipelineJobRunRequest::getPipelineId() const {
  return pipelineId_;
}

void RetryPipelineJobRunRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string RetryPipelineJobRunRequest::getOrganizationId() const {
  return organizationId_;
}

void RetryPipelineJobRunRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long RetryPipelineJobRunRequest::getPipelineRunId() const {
  return pipelineRunId_;
}

void RetryPipelineJobRunRequest::setPipelineRunId(long pipelineRunId) {
  pipelineRunId_ = pipelineRunId;
  setParameter(std::string("pipelineRunId"), std::to_string(pipelineRunId));
}

long RetryPipelineJobRunRequest::getJobId() const {
  return jobId_;
}

void RetryPipelineJobRunRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("jobId"), std::to_string(jobId));
}

