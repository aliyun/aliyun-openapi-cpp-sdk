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

#include <alibabacloud/devops/model/ListRepositoryWebhookRequest.h>

using AlibabaCloud::Devops::Model::ListRepositoryWebhookRequest;

ListRepositoryWebhookRequest::ListRepositoryWebhookRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/webhooks/list"};
  setMethod(HttpRequest::Method::Get);
}

ListRepositoryWebhookRequest::~ListRepositoryWebhookRequest() {}

std::string ListRepositoryWebhookRequest::getOrganizationId() const {
  return organizationId_;
}

void ListRepositoryWebhookRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long ListRepositoryWebhookRequest::getRepositoryId() const {
  return repositoryId_;
}

void ListRepositoryWebhookRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

long ListRepositoryWebhookRequest::getPageSize() const {
  return pageSize_;
}

void ListRepositoryWebhookRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListRepositoryWebhookRequest::getAccessToken() const {
  return accessToken_;
}

void ListRepositoryWebhookRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long ListRepositoryWebhookRequest::getPage() const {
  return page_;
}

void ListRepositoryWebhookRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

