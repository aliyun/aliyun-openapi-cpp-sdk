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

#include <alibabacloud/devops-rdc/model/ListCommonGroupRequest.h>

using AlibabaCloud::Devops_rdc::Model::ListCommonGroupRequest;

ListCommonGroupRequest::ListCommonGroupRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "ListCommonGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListCommonGroupRequest::~ListCommonGroupRequest() {}

bool ListCommonGroupRequest::getAll() const {
  return all_;
}

void ListCommonGroupRequest::setAll(bool all) {
  all_ = all;
  setBodyParameter(std::string("All"), all ? "true" : "false");
}

std::string ListCommonGroupRequest::getSmartGroupId() const {
  return smartGroupId_;
}

void ListCommonGroupRequest::setSmartGroupId(const std::string &smartGroupId) {
  smartGroupId_ = smartGroupId;
  setBodyParameter(std::string("SmartGroupId"), smartGroupId);
}

std::string ListCommonGroupRequest::getProjectId() const {
  return projectId_;
}

void ListCommonGroupRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string ListCommonGroupRequest::getOrgId() const {
  return orgId_;
}

void ListCommonGroupRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

