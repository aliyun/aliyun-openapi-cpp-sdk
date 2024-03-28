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

#include <alibabacloud/devops/model/ListRepositoriesRequest.h>

using AlibabaCloud::Devops::Model::ListRepositoriesRequest;

ListRepositoriesRequest::ListRepositoriesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/list"};
  setMethod(HttpRequest::Method::Get);
}

ListRepositoriesRequest::~ListRepositoriesRequest() {}

long ListRepositoriesRequest::getPerPage() const {
  return perPage_;
}

void ListRepositoriesRequest::setPerPage(long perPage) {
  perPage_ = perPage;
  setParameter(std::string("perPage"), std::to_string(perPage));
}

int ListRepositoriesRequest::getMinAccessLevel() const {
  return minAccessLevel_;
}

void ListRepositoriesRequest::setMinAccessLevel(int minAccessLevel) {
  minAccessLevel_ = minAccessLevel;
  setParameter(std::string("minAccessLevel"), std::to_string(minAccessLevel));
}

std::string ListRepositoriesRequest::getAccessToken() const {
  return accessToken_;
}

void ListRepositoriesRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListRepositoriesRequest::getOrderBy() const {
  return orderBy_;
}

void ListRepositoriesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("orderBy"), orderBy);
}

std::string ListRepositoriesRequest::getSort() const {
  return sort_;
}

void ListRepositoriesRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("sort"), sort);
}

std::string ListRepositoriesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListRepositoriesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

bool ListRepositoriesRequest::getArchived() const {
  return archived_;
}

void ListRepositoriesRequest::setArchived(bool archived) {
  archived_ = archived;
  setParameter(std::string("archived"), archived ? "true" : "false");
}

std::string ListRepositoriesRequest::getSearch() const {
  return search_;
}

void ListRepositoriesRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("search"), search);
}

long ListRepositoriesRequest::getPage() const {
  return page_;
}

void ListRepositoriesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

