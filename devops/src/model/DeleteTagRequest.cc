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

#include <alibabacloud/devops/model/DeleteTagRequest.h>

using AlibabaCloud::Devops::Model::DeleteTagRequest;

DeleteTagRequest::DeleteTagRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/tags/delete"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteTagRequest::~DeleteTagRequest() {}

std::string DeleteTagRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteTagRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string DeleteTagRequest::getTagName() const {
  return tagName_;
}

void DeleteTagRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("tagName"), tagName);
}

long DeleteTagRequest::getRepositoryId() const {
  return repositoryId_;
}

void DeleteTagRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string DeleteTagRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteTagRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

