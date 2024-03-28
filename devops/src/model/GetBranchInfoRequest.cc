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

#include <alibabacloud/devops/model/GetBranchInfoRequest.h>

using AlibabaCloud::Devops::Model::GetBranchInfoRequest;

GetBranchInfoRequest::GetBranchInfoRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/branches/detail"};
  setMethod(HttpRequest::Method::Get);
}

GetBranchInfoRequest::~GetBranchInfoRequest() {}

std::string GetBranchInfoRequest::getOrganizationId() const {
  return organizationId_;
}

void GetBranchInfoRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long GetBranchInfoRequest::getRepositoryId() const {
  return repositoryId_;
}

void GetBranchInfoRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string GetBranchInfoRequest::getAccessToken() const {
  return accessToken_;
}

void GetBranchInfoRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string GetBranchInfoRequest::getBranchName() const {
  return branchName_;
}

void GetBranchInfoRequest::setBranchName(const std::string &branchName) {
  branchName_ = branchName;
  setParameter(std::string("branchName"), branchName);
}

