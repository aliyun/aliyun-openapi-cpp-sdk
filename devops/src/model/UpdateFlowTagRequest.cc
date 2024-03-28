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

#include <alibabacloud/devops/model/UpdateFlowTagRequest.h>

using AlibabaCloud::Devops::Model::UpdateFlowTagRequest;

UpdateFlowTagRequest::UpdateFlowTagRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/flow/tags/[id]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateFlowTagRequest::~UpdateFlowTagRequest() {}

std::string UpdateFlowTagRequest::getColor() const {
  return color_;
}

void UpdateFlowTagRequest::setColor(const std::string &color) {
  color_ = color;
  setParameter(std::string("color"), color);
}

long UpdateFlowTagRequest::getFlowTagGroupId() const {
  return flowTagGroupId_;
}

void UpdateFlowTagRequest::setFlowTagGroupId(long flowTagGroupId) {
  flowTagGroupId_ = flowTagGroupId;
  setParameter(std::string("flowTagGroupId"), std::to_string(flowTagGroupId));
}

std::string UpdateFlowTagRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateFlowTagRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateFlowTagRequest::getName() const {
  return name_;
}

void UpdateFlowTagRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

long UpdateFlowTagRequest::getId() const {
  return id_;
}

void UpdateFlowTagRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("id"), std::to_string(id));
}

