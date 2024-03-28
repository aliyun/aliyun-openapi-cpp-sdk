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

#include <alibabacloud/devops/model/DeleteRepositoryWebhookRequest.h>

using AlibabaCloud::Devops::Model::DeleteRepositoryWebhookRequest;

DeleteRepositoryWebhookRequest::DeleteRepositoryWebhookRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/hooks/[hookId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteRepositoryWebhookRequest::~DeleteRepositoryWebhookRequest() {}

std::string DeleteRepositoryWebhookRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteRepositoryWebhookRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long DeleteRepositoryWebhookRequest::getHookId() const {
  return hookId_;
}

void DeleteRepositoryWebhookRequest::setHookId(long hookId) {
  hookId_ = hookId;
  setParameter(std::string("hookId"), std::to_string(hookId));
}

long DeleteRepositoryWebhookRequest::getRepositoryId() const {
  return repositoryId_;
}

void DeleteRepositoryWebhookRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string DeleteRepositoryWebhookRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteRepositoryWebhookRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

