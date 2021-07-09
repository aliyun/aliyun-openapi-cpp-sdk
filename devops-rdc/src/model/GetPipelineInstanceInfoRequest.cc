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

#include <alibabacloud/devops-rdc/model/GetPipelineInstanceInfoRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetPipelineInstanceInfoRequest;

GetPipelineInstanceInfoRequest::GetPipelineInstanceInfoRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "GetPipelineInstanceInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetPipelineInstanceInfoRequest::~GetPipelineInstanceInfoRequest() {}

std::string GetPipelineInstanceInfoRequest::getFlowInstanceId() const {
  return flowInstanceId_;
}

void GetPipelineInstanceInfoRequest::setFlowInstanceId(const std::string &flowInstanceId) {
  flowInstanceId_ = flowInstanceId;
  setBodyParameter(std::string("FlowInstanceId"), flowInstanceId);
}

std::string GetPipelineInstanceInfoRequest::getUserPk() const {
  return userPk_;
}

void GetPipelineInstanceInfoRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string GetPipelineInstanceInfoRequest::getOrgId() const {
  return orgId_;
}

void GetPipelineInstanceInfoRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

long GetPipelineInstanceInfoRequest::getPipelineId() const {
  return pipelineId_;
}

void GetPipelineInstanceInfoRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setBodyParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

