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

#include <alibabacloud/devops-rdc/model/DeleteCommonGroupRequest.h>

using AlibabaCloud::Devops_rdc::Model::DeleteCommonGroupRequest;

DeleteCommonGroupRequest::DeleteCommonGroupRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "DeleteCommonGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCommonGroupRequest::~DeleteCommonGroupRequest() {}

std::string DeleteCommonGroupRequest::getProjectId() const {
  return projectId_;
}

void DeleteCommonGroupRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string DeleteCommonGroupRequest::getCommonGroupId() const {
  return commonGroupId_;
}

void DeleteCommonGroupRequest::setCommonGroupId(const std::string &commonGroupId) {
  commonGroupId_ = commonGroupId;
  setBodyParameter(std::string("CommonGroupId"), commonGroupId);
}

std::string DeleteCommonGroupRequest::getOrgId() const {
  return orgId_;
}

void DeleteCommonGroupRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

