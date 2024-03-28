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

#include <alibabacloud/devops/model/AddWebhookRequest.h>

using AlibabaCloud::Devops::Model::AddWebhookRequest;

AddWebhookRequest::AddWebhookRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/webhooks/create"};
  setMethod(HttpRequest::Method::Post);
}

AddWebhookRequest::~AddWebhookRequest() {}

std::string AddWebhookRequest::getOrganizationId() const {
  return organizationId_;
}

void AddWebhookRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long AddWebhookRequest::getRepositoryId() const {
  return repositoryId_;
}

void AddWebhookRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string AddWebhookRequest::getAccessToken() const {
  return accessToken_;
}

void AddWebhookRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string AddWebhookRequest::getBody() const {
  return body_;
}

void AddWebhookRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

