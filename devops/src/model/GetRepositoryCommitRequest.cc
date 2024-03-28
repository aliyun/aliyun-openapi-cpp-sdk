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

#include <alibabacloud/devops/model/GetRepositoryCommitRequest.h>

using AlibabaCloud::Devops::Model::GetRepositoryCommitRequest;

GetRepositoryCommitRequest::GetRepositoryCommitRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/commits/[sha]"};
  setMethod(HttpRequest::Method::Get);
}

GetRepositoryCommitRequest::~GetRepositoryCommitRequest() {}

std::string GetRepositoryCommitRequest::getOrganizationId() const {
  return organizationId_;
}

void GetRepositoryCommitRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long GetRepositoryCommitRequest::getRepositoryId() const {
  return repositoryId_;
}

void GetRepositoryCommitRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string GetRepositoryCommitRequest::getAccessToken() const {
  return accessToken_;
}

void GetRepositoryCommitRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

bool GetRepositoryCommitRequest::getShowSignature() const {
  return showSignature_;
}

void GetRepositoryCommitRequest::setShowSignature(bool showSignature) {
  showSignature_ = showSignature;
  setParameter(std::string("showSignature"), showSignature ? "true" : "false");
}

std::string GetRepositoryCommitRequest::getSha() const {
  return sha_;
}

void GetRepositoryCommitRequest::setSha(const std::string &sha) {
  sha_ = sha;
  setParameter(std::string("sha"), sha);
}

