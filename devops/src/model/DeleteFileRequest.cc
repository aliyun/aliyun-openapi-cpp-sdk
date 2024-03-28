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

#include <alibabacloud/devops/model/DeleteFileRequest.h>

using AlibabaCloud::Devops::Model::DeleteFileRequest;

DeleteFileRequest::DeleteFileRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/files/delete"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteFileRequest::~DeleteFileRequest() {}

std::string DeleteFileRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteFileRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string DeleteFileRequest::getFilePath() const {
  return filePath_;
}

void DeleteFileRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("filePath"), filePath);
}

long DeleteFileRequest::getRepositoryId() const {
  return repositoryId_;
}

void DeleteFileRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string DeleteFileRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteFileRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string DeleteFileRequest::getCommitMessage() const {
  return commitMessage_;
}

void DeleteFileRequest::setCommitMessage(const std::string &commitMessage) {
  commitMessage_ = commitMessage;
  setParameter(std::string("commitMessage"), commitMessage);
}

std::string DeleteFileRequest::getBranchName() const {
  return branchName_;
}

void DeleteFileRequest::setBranchName(const std::string &branchName) {
  branchName_ = branchName;
  setParameter(std::string("branchName"), branchName);
}

