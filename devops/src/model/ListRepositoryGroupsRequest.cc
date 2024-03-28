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

#include <alibabacloud/devops/model/ListRepositoryGroupsRequest.h>

using AlibabaCloud::Devops::Model::ListRepositoryGroupsRequest;

ListRepositoryGroupsRequest::ListRepositoryGroupsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/groups/get/all"};
  setMethod(HttpRequest::Method::Get);
}

ListRepositoryGroupsRequest::~ListRepositoryGroupsRequest() {}

bool ListRepositoryGroupsRequest::getIncludePersonal() const {
  return includePersonal_;
}

void ListRepositoryGroupsRequest::setIncludePersonal(bool includePersonal) {
  includePersonal_ = includePersonal;
  setParameter(std::string("includePersonal"), includePersonal ? "true" : "false");
}

std::string ListRepositoryGroupsRequest::getAccessToken() const {
  return accessToken_;
}

void ListRepositoryGroupsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListRepositoryGroupsRequest::getOrderBy() const {
  return orderBy_;
}

void ListRepositoryGroupsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("orderBy"), orderBy);
}

std::string ListRepositoryGroupsRequest::getSort() const {
  return sort_;
}

void ListRepositoryGroupsRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("sort"), sort);
}

long ListRepositoryGroupsRequest::getParentId() const {
  return parentId_;
}

void ListRepositoryGroupsRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("parentId"), std::to_string(parentId));
}

std::string ListRepositoryGroupsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListRepositoryGroupsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListRepositoryGroupsRequest::getSearch() const {
  return search_;
}

void ListRepositoryGroupsRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("search"), search);
}

long ListRepositoryGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListRepositoryGroupsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

long ListRepositoryGroupsRequest::getPage() const {
  return page_;
}

void ListRepositoryGroupsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

