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

#include <alibabacloud/devops/model/GetRepositoryRequest.h>

using AlibabaCloud::Devops::Model::GetRepositoryRequest;

GetRepositoryRequest::GetRepositoryRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/get"};
  setMethod(HttpRequest::Method::Get);
}

GetRepositoryRequest::~GetRepositoryRequest() {}

std::string GetRepositoryRequest::getOrganizationId() const {
  return organizationId_;
}

void GetRepositoryRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetRepositoryRequest::getIdentity() const {
  return identity_;
}

void GetRepositoryRequest::setIdentity(const std::string &identity) {
  identity_ = identity;
  setParameter(std::string("identity"), identity);
}

std::string GetRepositoryRequest::getAccessToken() const {
  return accessToken_;
}

void GetRepositoryRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

