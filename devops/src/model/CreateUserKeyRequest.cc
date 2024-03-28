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

#include <alibabacloud/devops/model/CreateUserKeyRequest.h>

using AlibabaCloud::Devops::Model::CreateUserKeyRequest;

CreateUserKeyRequest::CreateUserKeyRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v3/user/keys/create"};
  setMethod(HttpRequest::Method::Post);
}

CreateUserKeyRequest::~CreateUserKeyRequest() {}

std::string CreateUserKeyRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateUserKeyRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateUserKeyRequest::getAccessToken() const {
  return accessToken_;
}

void CreateUserKeyRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateUserKeyRequest::body CreateUserKeyRequest::getBody() const {
  return body_;
}

void CreateUserKeyRequest::setBody(const CreateUserKeyRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".expireTime", body.expireTime);
  setBodyParameter(std::string("body") + ".keyScope", body.keyScope);
  setBodyParameter(std::string("body") + ".publicKey", body.publicKey);
  setBodyParameter(std::string("body") + ".title", body.title);
}

