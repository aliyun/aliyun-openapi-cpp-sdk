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

#include <alibabacloud/devops/model/ListCheckRunsRequest.h>

using AlibabaCloud::Devops::Model::ListCheckRunsRequest;

ListCheckRunsRequest::ListCheckRunsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/check_runs/list_check_runs"};
  setMethod(HttpRequest::Method::Get);
}

ListCheckRunsRequest::~ListCheckRunsRequest() {}

std::string ListCheckRunsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListCheckRunsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListCheckRunsRequest::getRef() const {
  return ref_;
}

void ListCheckRunsRequest::setRef(const std::string &ref) {
  ref_ = ref;
  setParameter(std::string("ref"), ref);
}

std::string ListCheckRunsRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void ListCheckRunsRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

long ListCheckRunsRequest::getPageSize() const {
  return pageSize_;
}

void ListCheckRunsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListCheckRunsRequest::getAccessToken() const {
  return accessToken_;
}

void ListCheckRunsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long ListCheckRunsRequest::getPage() const {
  return page_;
}

void ListCheckRunsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

