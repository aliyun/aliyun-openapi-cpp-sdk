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

#include <alibabacloud/devops/model/ListWorkItemWorkFlowStatusRequest.h>

using AlibabaCloud::Devops::Model::ListWorkItemWorkFlowStatusRequest;

ListWorkItemWorkFlowStatusRequest::ListWorkItemWorkFlowStatusRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/workflow/listWorkflowStatus"};
  setMethod(HttpRequest::Method::Get);
}

ListWorkItemWorkFlowStatusRequest::~ListWorkItemWorkFlowStatusRequest() {}

std::string ListWorkItemWorkFlowStatusRequest::getWorkitemCategoryIdentifier() const {
  return workitemCategoryIdentifier_;
}

void ListWorkItemWorkFlowStatusRequest::setWorkitemCategoryIdentifier(const std::string &workitemCategoryIdentifier) {
  workitemCategoryIdentifier_ = workitemCategoryIdentifier;
  setParameter(std::string("workitemCategoryIdentifier"), workitemCategoryIdentifier);
}

std::string ListWorkItemWorkFlowStatusRequest::getOrganizationId() const {
  return organizationId_;
}

void ListWorkItemWorkFlowStatusRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListWorkItemWorkFlowStatusRequest::getSpaceType() const {
  return spaceType_;
}

void ListWorkItemWorkFlowStatusRequest::setSpaceType(const std::string &spaceType) {
  spaceType_ = spaceType;
  setParameter(std::string("spaceType"), spaceType);
}

std::string ListWorkItemWorkFlowStatusRequest::getWorkitemTypeIdentifier() const {
  return workitemTypeIdentifier_;
}

void ListWorkItemWorkFlowStatusRequest::setWorkitemTypeIdentifier(const std::string &workitemTypeIdentifier) {
  workitemTypeIdentifier_ = workitemTypeIdentifier;
  setParameter(std::string("workitemTypeIdentifier"), workitemTypeIdentifier);
}

std::string ListWorkItemWorkFlowStatusRequest::getSpaceIdentifier() const {
  return spaceIdentifier_;
}

void ListWorkItemWorkFlowStatusRequest::setSpaceIdentifier(const std::string &spaceIdentifier) {
  spaceIdentifier_ = spaceIdentifier;
  setParameter(std::string("spaceIdentifier"), spaceIdentifier);
}

