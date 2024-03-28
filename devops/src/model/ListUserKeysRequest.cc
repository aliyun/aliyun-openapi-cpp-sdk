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

#include <alibabacloud/devops/model/ListUserKeysRequest.h>

using AlibabaCloud::Devops::Model::ListUserKeysRequest;

ListUserKeysRequest::ListUserKeysRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v3/user/keys"};
  setMethod(HttpRequest::Method::Get);
}

ListUserKeysRequest::~ListUserKeysRequest() {}

std::string ListUserKeysRequest::getOrganizationId() const {
  return organizationId_;
}

void ListUserKeysRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long ListUserKeysRequest::getPageSize() const {
  return pageSize_;
}

void ListUserKeysRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListUserKeysRequest::getAccessToken() const {
  return accessToken_;
}

void ListUserKeysRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListUserKeysRequest::getOrderBy() const {
  return orderBy_;
}

void ListUserKeysRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("orderBy"), orderBy);
}

long ListUserKeysRequest::getPage() const {
  return page_;
}

void ListUserKeysRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListUserKeysRequest::getSort() const {
  return sort_;
}

void ListUserKeysRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("sort"), sort);
}

