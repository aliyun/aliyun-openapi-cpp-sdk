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

#include <alibabacloud/devops/model/CreateCommitWithMultipleFilesRequest.h>

using AlibabaCloud::Devops::Model::CreateCommitWithMultipleFilesRequest;

CreateCommitWithMultipleFilesRequest::CreateCommitWithMultipleFilesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/repository/commits/files"};
  setMethod(HttpRequest::Method::Post);
}

CreateCommitWithMultipleFilesRequest::~CreateCommitWithMultipleFilesRequest() {}

std::string CreateCommitWithMultipleFilesRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateCommitWithMultipleFilesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateCommitWithMultipleFilesRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void CreateCommitWithMultipleFilesRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string CreateCommitWithMultipleFilesRequest::getAccessToken() const {
  return accessToken_;
}

void CreateCommitWithMultipleFilesRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateCommitWithMultipleFilesRequest::body CreateCommitWithMultipleFilesRequest::getBody() const {
  return body_;
}

void CreateCommitWithMultipleFilesRequest::setBody(const CreateCommitWithMultipleFilesRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".commitMessage", body.commitMessage);
  setBodyParameter(std::string("body") + ".branch", body.branch);
  for(int dep1 = 0; dep1 != body.actions.size(); dep1++) {
    setBodyParameter(std::string("body") + ".actions." + std::to_string(dep1 + 1) + ".filePath", body.actions[dep1].filePath);
    setBodyParameter(std::string("body") + ".actions." + std::to_string(dep1 + 1) + ".action", body.actions[dep1].action);
    setBodyParameter(std::string("body") + ".actions." + std::to_string(dep1 + 1) + ".content", body.actions[dep1].content);
    setBodyParameter(std::string("body") + ".actions." + std::to_string(dep1 + 1) + ".previousPath", body.actions[dep1].previousPath);
  }
}

