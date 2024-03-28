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

#include <alibabacloud/devops/model/ListRepositoryTreeRequest.h>

using AlibabaCloud::Devops::Model::ListRepositoryTreeRequest;

ListRepositoryTreeRequest::ListRepositoryTreeRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/files/tree"};
  setMethod(HttpRequest::Method::Get);
}

ListRepositoryTreeRequest::~ListRepositoryTreeRequest() {}

std::string ListRepositoryTreeRequest::getOrganizationId() const {
  return organizationId_;
}

void ListRepositoryTreeRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListRepositoryTreeRequest::getPath() const {
  return path_;
}

void ListRepositoryTreeRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("path"), path);
}

long ListRepositoryTreeRequest::getRepositoryId() const {
  return repositoryId_;
}

void ListRepositoryTreeRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string ListRepositoryTreeRequest::getAccessToken() const {
  return accessToken_;
}

void ListRepositoryTreeRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListRepositoryTreeRequest::getType() const {
  return type_;
}

void ListRepositoryTreeRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

std::string ListRepositoryTreeRequest::getRefName() const {
  return refName_;
}

void ListRepositoryTreeRequest::setRefName(const std::string &refName) {
  refName_ = refName;
  setParameter(std::string("refName"), refName);
}

