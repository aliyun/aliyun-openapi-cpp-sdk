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

#include <alibabacloud/devops/model/CreateTagRequest.h>

using AlibabaCloud::Devops::Model::CreateTagRequest;

CreateTagRequest::CreateTagRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/tags/create"};
  setMethod(HttpRequest::Method::Post);
}

CreateTagRequest::~CreateTagRequest() {}

std::string CreateTagRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateTagRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long CreateTagRequest::getRepositoryId() const {
  return repositoryId_;
}

void CreateTagRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string CreateTagRequest::getAccessToken() const {
  return accessToken_;
}

void CreateTagRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateTagRequest::body CreateTagRequest::getBody() const {
  return body_;
}

void CreateTagRequest::setBody(const CreateTagRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".tagName", body.tagName);
  setBodyParameter(std::string("body") + ".ref", body.ref);
  setBodyParameter(std::string("body") + ".message", body.message);
}

