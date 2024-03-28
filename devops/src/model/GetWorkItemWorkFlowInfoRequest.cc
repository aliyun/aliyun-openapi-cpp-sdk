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

#include <alibabacloud/devops/model/GetWorkItemWorkFlowInfoRequest.h>

using AlibabaCloud::Devops::Model::GetWorkItemWorkFlowInfoRequest;

GetWorkItemWorkFlowInfoRequest::GetWorkItemWorkFlowInfoRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/[workitemId]/getWorkflowInfo"};
  setMethod(HttpRequest::Method::Get);
}

GetWorkItemWorkFlowInfoRequest::~GetWorkItemWorkFlowInfoRequest() {}

std::string GetWorkItemWorkFlowInfoRequest::getOrganizationId() const {
  return organizationId_;
}

void GetWorkItemWorkFlowInfoRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetWorkItemWorkFlowInfoRequest::getWorkitemId() const {
  return workitemId_;
}

void GetWorkItemWorkFlowInfoRequest::setWorkitemId(const std::string &workitemId) {
  workitemId_ = workitemId;
  setParameter(std::string("workitemId"), workitemId);
}

std::string GetWorkItemWorkFlowInfoRequest::getConfigurationId() const {
  return configurationId_;
}

void GetWorkItemWorkFlowInfoRequest::setConfigurationId(const std::string &configurationId) {
  configurationId_ = configurationId;
  setParameter(std::string("configurationId"), configurationId);
}

