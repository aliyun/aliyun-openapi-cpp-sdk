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

#include <alibabacloud/devops-rdc/model/UpdatePipelineMemberRequest.h>

using AlibabaCloud::Devops_rdc::Model::UpdatePipelineMemberRequest;

UpdatePipelineMemberRequest::UpdatePipelineMemberRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "UpdatePipelineMember") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePipelineMemberRequest::~UpdatePipelineMemberRequest() {}

std::string UpdatePipelineMemberRequest::getRoleName() const {
  return roleName_;
}

void UpdatePipelineMemberRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setBodyParameter(std::string("RoleName"), roleName);
}

std::string UpdatePipelineMemberRequest::getUserPk() const {
  return userPk_;
}

void UpdatePipelineMemberRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string UpdatePipelineMemberRequest::getUserId() const {
  return userId_;
}

void UpdatePipelineMemberRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string UpdatePipelineMemberRequest::getOrgId() const {
  return orgId_;
}

void UpdatePipelineMemberRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

long UpdatePipelineMemberRequest::getPipelineId() const {
  return pipelineId_;
}

void UpdatePipelineMemberRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

