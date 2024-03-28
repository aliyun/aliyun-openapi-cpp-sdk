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

#include <alibabacloud/devops/model/CreateProjectLabelRequest.h>

using AlibabaCloud::Devops::Model::CreateProjectLabelRequest;

CreateProjectLabelRequest::CreateProjectLabelRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/labels"};
  setMethod(HttpRequest::Method::Post);
}

CreateProjectLabelRequest::~CreateProjectLabelRequest() {}

std::string CreateProjectLabelRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateProjectLabelRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateProjectLabelRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void CreateProjectLabelRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string CreateProjectLabelRequest::getAccessToken() const {
  return accessToken_;
}

void CreateProjectLabelRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateProjectLabelRequest::body CreateProjectLabelRequest::getBody() const {
  return body_;
}

void CreateProjectLabelRequest::setBody(const CreateProjectLabelRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".color", body.color);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".description", body.description);
}

