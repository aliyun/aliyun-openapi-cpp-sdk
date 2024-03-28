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

#include <alibabacloud/devops/model/ListProjectWorkitemTypesRequest.h>

using AlibabaCloud::Devops::Model::ListProjectWorkitemTypesRequest;

ListProjectWorkitemTypesRequest::ListProjectWorkitemTypesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/projects/[projectId]/getWorkitemType"};
  setMethod(HttpRequest::Method::Get);
}

ListProjectWorkitemTypesRequest::~ListProjectWorkitemTypesRequest() {}

std::string ListProjectWorkitemTypesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListProjectWorkitemTypesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListProjectWorkitemTypesRequest::getSpaceType() const {
  return spaceType_;
}

void ListProjectWorkitemTypesRequest::setSpaceType(const std::string &spaceType) {
  spaceType_ = spaceType;
  setParameter(std::string("spaceType"), spaceType);
}

std::string ListProjectWorkitemTypesRequest::getCategory() const {
  return category_;
}

void ListProjectWorkitemTypesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("category"), category);
}

std::string ListProjectWorkitemTypesRequest::getProjectId() const {
  return projectId_;
}

void ListProjectWorkitemTypesRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("projectId"), projectId);
}

