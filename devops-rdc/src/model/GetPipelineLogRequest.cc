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

#include <alibabacloud/devops-rdc/model/GetPipelineLogRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetPipelineLogRequest;

GetPipelineLogRequest::GetPipelineLogRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "GetPipelineLog") {
  setMethod(HttpRequest::Method::Post);
}

GetPipelineLogRequest::~GetPipelineLogRequest() {}

std::string GetPipelineLogRequest::getUserPk() const {
  return userPk_;
}

void GetPipelineLogRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string GetPipelineLogRequest::getOrgId() const {
  return orgId_;
}

void GetPipelineLogRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

long GetPipelineLogRequest::getPipelineId() const {
  return pipelineId_;
}

void GetPipelineLogRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setBodyParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

long GetPipelineLogRequest::getJobId() const {
  return jobId_;
}

void GetPipelineLogRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

