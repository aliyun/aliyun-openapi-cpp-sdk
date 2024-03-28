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

#include <alibabacloud/devops/model/ListProjectLabelsRequest.h>

using AlibabaCloud::Devops::Model::ListProjectLabelsRequest;

ListProjectLabelsRequest::ListProjectLabelsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/labels"};
  setMethod(HttpRequest::Method::Get);
}

ListProjectLabelsRequest::~ListProjectLabelsRequest() {}

bool ListProjectLabelsRequest::getWithCounts() const {
  return withCounts_;
}

void ListProjectLabelsRequest::setWithCounts(bool withCounts) {
  withCounts_ = withCounts;
  setParameter(std::string("withCounts"), withCounts ? "true" : "false");
}

std::string ListProjectLabelsRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void ListProjectLabelsRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string ListProjectLabelsRequest::getAccessToken() const {
  return accessToken_;
}

void ListProjectLabelsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListProjectLabelsRequest::getOrderBy() const {
  return orderBy_;
}

void ListProjectLabelsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("orderBy"), orderBy);
}

std::string ListProjectLabelsRequest::getSort() const {
  return sort_;
}

void ListProjectLabelsRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("sort"), sort);
}

std::string ListProjectLabelsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListProjectLabelsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListProjectLabelsRequest::getSearch() const {
  return search_;
}

void ListProjectLabelsRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("search"), search);
}

long ListProjectLabelsRequest::getPageSize() const {
  return pageSize_;
}

void ListProjectLabelsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

int ListProjectLabelsRequest::getPage() const {
  return page_;
}

void ListProjectLabelsRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

