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

#include <alibabacloud/devops/model/GetCheckRunRequest.h>

using AlibabaCloud::Devops::Model::GetCheckRunRequest;

GetCheckRunRequest::GetCheckRunRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/check_runs/get_check_run"};
  setMethod(HttpRequest::Method::Get);
}

GetCheckRunRequest::~GetCheckRunRequest() {}

std::string GetCheckRunRequest::getOrganizationId() const {
  return organizationId_;
}

void GetCheckRunRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetCheckRunRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void GetCheckRunRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string GetCheckRunRequest::getAccessToken() const {
  return accessToken_;
}

void GetCheckRunRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long GetCheckRunRequest::getCheckRunId() const {
  return checkRunId_;
}

void GetCheckRunRequest::setCheckRunId(long checkRunId) {
  checkRunId_ = checkRunId;
  setParameter(std::string("checkRunId"), std::to_string(checkRunId));
}

