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

#include <alibabacloud/devops/model/ListApplicationsRequest.h>

using AlibabaCloud::Devops::Model::ListApplicationsRequest;

ListApplicationsRequest::ListApplicationsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/appstack/apps:search"};
  setMethod(HttpRequest::Method::Get);
}

ListApplicationsRequest::~ListApplicationsRequest() {}

std::string ListApplicationsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListApplicationsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

int ListApplicationsRequest::getPerPage() const {
  return perPage_;
}

void ListApplicationsRequest::setPerPage(int perPage) {
  perPage_ = perPage;
  setParameter(std::string("perPage"), std::to_string(perPage));
}

std::string ListApplicationsRequest::getPagination() const {
  return pagination_;
}

void ListApplicationsRequest::setPagination(const std::string &pagination) {
  pagination_ = pagination;
  setParameter(std::string("pagination"), pagination);
}

std::string ListApplicationsRequest::getNextToken() const {
  return nextToken_;
}

void ListApplicationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

std::string ListApplicationsRequest::getOrderBy() const {
  return orderBy_;
}

void ListApplicationsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("orderBy"), orderBy);
}

std::string ListApplicationsRequest::getSort() const {
  return sort_;
}

void ListApplicationsRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("sort"), sort);
}

