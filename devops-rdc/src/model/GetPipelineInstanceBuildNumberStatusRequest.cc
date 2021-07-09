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

#include <alibabacloud/devops-rdc/model/GetPipelineInstanceBuildNumberStatusRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetPipelineInstanceBuildNumberStatusRequest;

GetPipelineInstanceBuildNumberStatusRequest::GetPipelineInstanceBuildNumberStatusRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "GetPipelineInstanceBuildNumberStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetPipelineInstanceBuildNumberStatusRequest::~GetPipelineInstanceBuildNumberStatusRequest() {}

long GetPipelineInstanceBuildNumberStatusRequest::getBuildNum() const {
  return buildNum_;
}

void GetPipelineInstanceBuildNumberStatusRequest::setBuildNum(long buildNum) {
  buildNum_ = buildNum;
  setBodyParameter(std::string("BuildNum"), std::to_string(buildNum));
}

std::string GetPipelineInstanceBuildNumberStatusRequest::getUserPk() const {
  return userPk_;
}

void GetPipelineInstanceBuildNumberStatusRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string GetPipelineInstanceBuildNumberStatusRequest::getOrgId() const {
  return orgId_;
}

void GetPipelineInstanceBuildNumberStatusRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

long GetPipelineInstanceBuildNumberStatusRequest::getPipelineId() const {
  return pipelineId_;
}

void GetPipelineInstanceBuildNumberStatusRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

