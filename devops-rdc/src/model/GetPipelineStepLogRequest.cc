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

#include <alibabacloud/devops-rdc/model/GetPipelineStepLogRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetPipelineStepLogRequest;

GetPipelineStepLogRequest::GetPipelineStepLogRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "GetPipelineStepLog") {
  setMethod(HttpRequest::Method::Post);
}

GetPipelineStepLogRequest::~GetPipelineStepLogRequest() {}

long GetPipelineStepLogRequest::getOffset() const {
  return offset_;
}

void GetPipelineStepLogRequest::setOffset(long offset) {
  offset_ = offset;
  setBodyParameter(std::string("Offset"), std::to_string(offset));
}

std::string GetPipelineStepLogRequest::getUserPk() const {
  return userPk_;
}

void GetPipelineStepLogRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string GetPipelineStepLogRequest::getOrgId() const {
  return orgId_;
}

void GetPipelineStepLogRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

long GetPipelineStepLogRequest::getPipelineId() const {
  return pipelineId_;
}

void GetPipelineStepLogRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setBodyParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

long GetPipelineStepLogRequest::getJobId() const {
  return jobId_;
}

void GetPipelineStepLogRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

std::string GetPipelineStepLogRequest::getStepIndex() const {
  return stepIndex_;
}

void GetPipelineStepLogRequest::setStepIndex(const std::string &stepIndex) {
  stepIndex_ = stepIndex;
  setBodyParameter(std::string("StepIndex"), stepIndex);
}

long GetPipelineStepLogRequest::getLimit() const {
  return limit_;
}

void GetPipelineStepLogRequest::setLimit(long limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), std::to_string(limit));
}

