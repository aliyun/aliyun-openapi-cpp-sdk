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

#include <alibabacloud/devops/model/CreateBranchRequest.h>

using AlibabaCloud::Devops::Model::CreateBranchRequest;

CreateBranchRequest::CreateBranchRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/branches"};
  setMethod(HttpRequest::Method::Post);
}

CreateBranchRequest::~CreateBranchRequest() {}

std::string CreateBranchRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateBranchRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateBranchRequest::getRepositoryId() const {
  return repositoryId_;
}

void CreateBranchRequest::setRepositoryId(const std::string &repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), repositoryId);
}

std::string CreateBranchRequest::getAccessToken() const {
  return accessToken_;
}

void CreateBranchRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateBranchRequest::body CreateBranchRequest::getBody() const {
  return body_;
}

void CreateBranchRequest::setBody(const CreateBranchRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".ref", body.ref);
  setBodyParameter(std::string("body") + ".branchName", body.branchName);
}

