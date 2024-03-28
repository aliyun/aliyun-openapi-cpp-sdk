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

#include <alibabacloud/devops/model/UpdateProjectLabelRequest.h>

using AlibabaCloud::Devops::Model::UpdateProjectLabelRequest;

UpdateProjectLabelRequest::UpdateProjectLabelRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/labels/[labelId]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateProjectLabelRequest::~UpdateProjectLabelRequest() {}

std::string UpdateProjectLabelRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateProjectLabelRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateProjectLabelRequest::getLabelId() const {
  return labelId_;
}

void UpdateProjectLabelRequest::setLabelId(const std::string &labelId) {
  labelId_ = labelId;
  setParameter(std::string("labelId"), labelId);
}

std::string UpdateProjectLabelRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void UpdateProjectLabelRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string UpdateProjectLabelRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateProjectLabelRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdateProjectLabelRequest::body UpdateProjectLabelRequest::getBody() const {
  return body_;
}

void UpdateProjectLabelRequest::setBody(const UpdateProjectLabelRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".color", body.color);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".description", body.description);
}

