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

#include <alibabacloud/devops/model/CreateFileRequest.h>

using AlibabaCloud::Devops::Model::CreateFileRequest;

CreateFileRequest::CreateFileRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/files"};
  setMethod(HttpRequest::Method::Post);
}

CreateFileRequest::~CreateFileRequest() {}

std::string CreateFileRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateFileRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long CreateFileRequest::getRepositoryId() const {
  return repositoryId_;
}

void CreateFileRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string CreateFileRequest::getAccessToken() const {
  return accessToken_;
}

void CreateFileRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateFileRequest::body CreateFileRequest::getBody() const {
  return body_;
}

void CreateFileRequest::setBody(const CreateFileRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".filePath", body.filePath);
  setBodyParameter(std::string("body") + ".encoding", body.encoding);
  setBodyParameter(std::string("body") + ".commitMessage", body.commitMessage);
  setBodyParameter(std::string("body") + ".content", body.content);
  setBodyParameter(std::string("body") + ".branchName", body.branchName);
}

