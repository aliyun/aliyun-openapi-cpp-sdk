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

#include <alibabacloud/devops/model/ListRepositoryCommitsRequest.h>

using AlibabaCloud::Devops::Model::ListRepositoryCommitsRequest;

ListRepositoryCommitsRequest::ListRepositoryCommitsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/commits"};
  setMethod(HttpRequest::Method::Get);
}

ListRepositoryCommitsRequest::~ListRepositoryCommitsRequest() {}

bool ListRepositoryCommitsRequest::getShowCommentsCount() const {
  return showCommentsCount_;
}

void ListRepositoryCommitsRequest::setShowCommentsCount(bool showCommentsCount) {
  showCommentsCount_ = showCommentsCount;
  setParameter(std::string("showCommentsCount"), showCommentsCount ? "true" : "false");
}

std::string ListRepositoryCommitsRequest::getStart() const {
  return start_;
}

void ListRepositoryCommitsRequest::setStart(const std::string &start) {
  start_ = start;
  setParameter(std::string("start"), start);
}

std::string ListRepositoryCommitsRequest::getAccessToken() const {
  return accessToken_;
}

void ListRepositoryCommitsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

bool ListRepositoryCommitsRequest::getShowSignature() const {
  return showSignature_;
}

void ListRepositoryCommitsRequest::setShowSignature(bool showSignature) {
  showSignature_ = showSignature;
  setParameter(std::string("showSignature"), showSignature ? "true" : "false");
}

std::string ListRepositoryCommitsRequest::getRefName() const {
  return refName_;
}

void ListRepositoryCommitsRequest::setRefName(const std::string &refName) {
  refName_ = refName;
  setParameter(std::string("refName"), refName);
}

std::string ListRepositoryCommitsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListRepositoryCommitsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListRepositoryCommitsRequest::getPath() const {
  return path_;
}

void ListRepositoryCommitsRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("path"), path);
}

std::string ListRepositoryCommitsRequest::getSearch() const {
  return search_;
}

void ListRepositoryCommitsRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("search"), search);
}

long ListRepositoryCommitsRequest::getRepositoryId() const {
  return repositoryId_;
}

void ListRepositoryCommitsRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

long ListRepositoryCommitsRequest::getPageSize() const {
  return pageSize_;
}

void ListRepositoryCommitsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListRepositoryCommitsRequest::getEnd() const {
  return end_;
}

void ListRepositoryCommitsRequest::setEnd(const std::string &end) {
  end_ = end;
  setParameter(std::string("end"), end);
}

long ListRepositoryCommitsRequest::getPage() const {
  return page_;
}

void ListRepositoryCommitsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

