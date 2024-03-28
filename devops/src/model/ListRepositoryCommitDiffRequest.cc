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

#include <alibabacloud/devops/model/ListRepositoryCommitDiffRequest.h>

using AlibabaCloud::Devops::Model::ListRepositoryCommitDiffRequest;

ListRepositoryCommitDiffRequest::ListRepositoryCommitDiffRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/commits/[sha]/diff"};
  setMethod(HttpRequest::Method::Get);
}

ListRepositoryCommitDiffRequest::~ListRepositoryCommitDiffRequest() {}

std::string ListRepositoryCommitDiffRequest::getOrganizationId() const {
  return organizationId_;
}

void ListRepositoryCommitDiffRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long ListRepositoryCommitDiffRequest::getRepositoryId() const {
  return repositoryId_;
}

void ListRepositoryCommitDiffRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string ListRepositoryCommitDiffRequest::getAccessToken() const {
  return accessToken_;
}

void ListRepositoryCommitDiffRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

int ListRepositoryCommitDiffRequest::getContextLine() const {
  return contextLine_;
}

void ListRepositoryCommitDiffRequest::setContextLine(int contextLine) {
  contextLine_ = contextLine;
  setParameter(std::string("contextLine"), std::to_string(contextLine));
}

std::string ListRepositoryCommitDiffRequest::getSha() const {
  return sha_;
}

void ListRepositoryCommitDiffRequest::setSha(const std::string &sha) {
  sha_ = sha;
  setParameter(std::string("sha"), sha);
}

