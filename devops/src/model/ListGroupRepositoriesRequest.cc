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

#include <alibabacloud/devops/model/ListGroupRepositoriesRequest.h>

using AlibabaCloud::Devops::Model::ListGroupRepositoriesRequest;

ListGroupRepositoriesRequest::ListGroupRepositoriesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/groups/[groupId]/projects"};
  setMethod(HttpRequest::Method::Get);
}

ListGroupRepositoriesRequest::~ListGroupRepositoriesRequest() {}

std::string ListGroupRepositoriesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListGroupRepositoriesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListGroupRepositoriesRequest::getSearch() const {
  return search_;
}

void ListGroupRepositoriesRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("search"), search);
}

std::string ListGroupRepositoriesRequest::getGroupId() const {
  return groupId_;
}

void ListGroupRepositoriesRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), groupId);
}

long ListGroupRepositoriesRequest::getPageSize() const {
  return pageSize_;
}

void ListGroupRepositoriesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListGroupRepositoriesRequest::getAccessToken() const {
  return accessToken_;
}

void ListGroupRepositoriesRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long ListGroupRepositoriesRequest::getPage() const {
  return page_;
}

void ListGroupRepositoriesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

