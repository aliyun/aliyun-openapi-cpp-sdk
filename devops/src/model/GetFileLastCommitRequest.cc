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

#include <alibabacloud/devops/model/GetFileLastCommitRequest.h>

using AlibabaCloud::Devops::Model::GetFileLastCommitRequest;

GetFileLastCommitRequest::GetFileLastCommitRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/files/lastCommit"};
  setMethod(HttpRequest::Method::Get);
}

GetFileLastCommitRequest::~GetFileLastCommitRequest() {}

std::string GetFileLastCommitRequest::getOrganizationId() const {
  return organizationId_;
}

void GetFileLastCommitRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetFileLastCommitRequest::getFilePath() const {
  return filePath_;
}

void GetFileLastCommitRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("filePath"), filePath);
}

long GetFileLastCommitRequest::getRepositoryId() const {
  return repositoryId_;
}

void GetFileLastCommitRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string GetFileLastCommitRequest::getAccessToken() const {
  return accessToken_;
}

void GetFileLastCommitRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

bool GetFileLastCommitRequest::getShowSignature() const {
  return showSignature_;
}

void GetFileLastCommitRequest::setShowSignature(bool showSignature) {
  showSignature_ = showSignature;
  setParameter(std::string("showSignature"), showSignature ? "true" : "false");
}

std::string GetFileLastCommitRequest::getSha() const {
  return sha_;
}

void GetFileLastCommitRequest::setSha(const std::string &sha) {
  sha_ = sha;
  setParameter(std::string("sha"), sha);
}

