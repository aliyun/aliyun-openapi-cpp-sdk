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

#include <alibabacloud/devops/model/GetMergeRequestRequest.h>

using AlibabaCloud::Devops::Model::GetMergeRequestRequest;

GetMergeRequestRequest::GetMergeRequestRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/[repositoryId]/merge_requests/[localId]/detail"};
  setMethod(HttpRequest::Method::Get);
}

GetMergeRequestRequest::~GetMergeRequestRequest() {}

std::string GetMergeRequestRequest::getOrganizationId() const {
  return organizationId_;
}

void GetMergeRequestRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long GetMergeRequestRequest::getRepositoryId() const {
  return repositoryId_;
}

void GetMergeRequestRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string GetMergeRequestRequest::getAccessToken() const {
  return accessToken_;
}

void GetMergeRequestRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long GetMergeRequestRequest::getLocalId() const {
  return localId_;
}

void GetMergeRequestRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

