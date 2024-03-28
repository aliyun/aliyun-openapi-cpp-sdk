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

#include <alibabacloud/devops/model/DeleteProjectLabelRequest.h>

using AlibabaCloud::Devops::Model::DeleteProjectLabelRequest;

DeleteProjectLabelRequest::DeleteProjectLabelRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/labels/[labelId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteProjectLabelRequest::~DeleteProjectLabelRequest() {}

std::string DeleteProjectLabelRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteProjectLabelRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string DeleteProjectLabelRequest::getLabelId() const {
  return labelId_;
}

void DeleteProjectLabelRequest::setLabelId(const std::string &labelId) {
  labelId_ = labelId;
  setParameter(std::string("labelId"), labelId);
}

std::string DeleteProjectLabelRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void DeleteProjectLabelRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string DeleteProjectLabelRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteProjectLabelRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

