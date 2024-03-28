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

#include <alibabacloud/devops/model/EnableDeployKeyRequest.h>

using AlibabaCloud::Devops::Model::EnableDeployKeyRequest;

EnableDeployKeyRequest::EnableDeployKeyRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/keys/[keyId]/enable"};
  setMethod(HttpRequest::Method::Post);
}

EnableDeployKeyRequest::~EnableDeployKeyRequest() {}

std::string EnableDeployKeyRequest::getOrganizationId() const {
  return organizationId_;
}

void EnableDeployKeyRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long EnableDeployKeyRequest::getRepositoryId() const {
  return repositoryId_;
}

void EnableDeployKeyRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string EnableDeployKeyRequest::getAccessToken() const {
  return accessToken_;
}

void EnableDeployKeyRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long EnableDeployKeyRequest::getKeyId() const {
  return keyId_;
}

void EnableDeployKeyRequest::setKeyId(long keyId) {
  keyId_ = keyId;
  setParameter(std::string("keyId"), std::to_string(keyId));
}

