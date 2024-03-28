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

#include <alibabacloud/devops/model/CreateCommitStatusRequest.h>

using AlibabaCloud::Devops::Model::CreateCommitStatusRequest;

CreateCommitStatusRequest::CreateCommitStatusRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/repository/commit_statuses/create_commit_status"};
  setMethod(HttpRequest::Method::Post);
}

CreateCommitStatusRequest::~CreateCommitStatusRequest() {}

std::string CreateCommitStatusRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateCommitStatusRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateCommitStatusRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void CreateCommitStatusRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string CreateCommitStatusRequest::getAccessToken() const {
  return accessToken_;
}

void CreateCommitStatusRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateCommitStatusRequest::body CreateCommitStatusRequest::getBody() const {
  return body_;
}

void CreateCommitStatusRequest::setBody(const CreateCommitStatusRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".context", body.context);
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".state", body.state);
  setBodyParameter(std::string("body") + ".targetUrl", body.targetUrl);
}

std::string CreateCommitStatusRequest::getSha() const {
  return sha_;
}

void CreateCommitStatusRequest::setSha(const std::string &sha) {
  sha_ = sha;
  setParameter(std::string("sha"), sha);
}

