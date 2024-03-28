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

#include <alibabacloud/devops/model/DeleteRepositoryRequest.h>

using AlibabaCloud::Devops::Model::DeleteRepositoryRequest;

DeleteRepositoryRequest::DeleteRepositoryRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/remove"};
  setMethod(HttpRequest::Method::Post);
}

DeleteRepositoryRequest::~DeleteRepositoryRequest() {}

std::string DeleteRepositoryRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteRepositoryRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long DeleteRepositoryRequest::getRepositoryId() const {
  return repositoryId_;
}

void DeleteRepositoryRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string DeleteRepositoryRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteRepositoryRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

DeleteRepositoryRequest::body DeleteRepositoryRequest::getBody() const {
  return body_;
}

void DeleteRepositoryRequest::setBody(const DeleteRepositoryRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".reason", body.reason);
}

