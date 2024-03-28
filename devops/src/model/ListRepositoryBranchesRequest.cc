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

#include <alibabacloud/devops/model/ListRepositoryBranchesRequest.h>

using AlibabaCloud::Devops::Model::ListRepositoryBranchesRequest;

ListRepositoryBranchesRequest::ListRepositoryBranchesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/branches"};
  setMethod(HttpRequest::Method::Get);
}

ListRepositoryBranchesRequest::~ListRepositoryBranchesRequest() {}

std::string ListRepositoryBranchesRequest::getAccessToken() const {
  return accessToken_;
}

void ListRepositoryBranchesRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListRepositoryBranchesRequest::getSort() const {
  return sort_;
}

void ListRepositoryBranchesRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("sort"), sort);
}

std::string ListRepositoryBranchesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListRepositoryBranchesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListRepositoryBranchesRequest::getSearch() const {
  return search_;
}

void ListRepositoryBranchesRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("search"), search);
}

long ListRepositoryBranchesRequest::getRepositoryId() const {
  return repositoryId_;
}

void ListRepositoryBranchesRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

long ListRepositoryBranchesRequest::getPageSize() const {
  return pageSize_;
}

void ListRepositoryBranchesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

long ListRepositoryBranchesRequest::getPage() const {
  return page_;
}

void ListRepositoryBranchesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

