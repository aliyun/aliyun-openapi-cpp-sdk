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

#include <alibabacloud/devops/model/UpdateFileRequest.h>

using AlibabaCloud::Devops::Model::UpdateFileRequest;

UpdateFileRequest::UpdateFileRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/files/update"};
  setMethod(HttpRequest::Method::Put);
}

UpdateFileRequest::~UpdateFileRequest() {}

std::string UpdateFileRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateFileRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateFileRequest::getRepositoryId() const {
  return repositoryId_;
}

void UpdateFileRequest::setRepositoryId(const std::string &repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), repositoryId);
}

std::string UpdateFileRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateFileRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdateFileRequest::body UpdateFileRequest::getBody() const {
  return body_;
}

void UpdateFileRequest::setBody(const UpdateFileRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".oldPath", body.oldPath);
  setBodyParameter(std::string("body") + ".encoding", body.encoding);
  setBodyParameter(std::string("body") + ".commitMessage", body.commitMessage);
  setBodyParameter(std::string("body") + ".newPath", body.newPath);
  setBodyParameter(std::string("body") + ".content", body.content);
  setBodyParameter(std::string("body") + ".branchName", body.branchName);
}

