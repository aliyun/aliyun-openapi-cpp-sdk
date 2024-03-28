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

#include <alibabacloud/devops/model/ListCommitStatusesRequest.h>

using AlibabaCloud::Devops::Model::ListCommitStatusesRequest;

ListCommitStatusesRequest::ListCommitStatusesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/repository/commit_statuses/list_commit_statuses"};
  setMethod(HttpRequest::Method::Get);
}

ListCommitStatusesRequest::~ListCommitStatusesRequest() {}

std::string ListCommitStatusesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListCommitStatusesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListCommitStatusesRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void ListCommitStatusesRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

long ListCommitStatusesRequest::getPageSize() const {
  return pageSize_;
}

void ListCommitStatusesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListCommitStatusesRequest::getAccessToken() const {
  return accessToken_;
}

void ListCommitStatusesRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long ListCommitStatusesRequest::getPage() const {
  return page_;
}

void ListCommitStatusesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListCommitStatusesRequest::getSha() const {
  return sha_;
}

void ListCommitStatusesRequest::setSha(const std::string &sha) {
  sha_ = sha;
  setParameter(std::string("sha"), sha);
}

