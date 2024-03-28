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

#include <alibabacloud/devops/model/ListMergeRequestPatchSetsRequest.h>

using AlibabaCloud::Devops::Model::ListMergeRequestPatchSetsRequest;

ListMergeRequestPatchSetsRequest::ListMergeRequestPatchSetsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/merge_requests/diffs/list_patchsets"};
  setMethod(HttpRequest::Method::Get);
}

ListMergeRequestPatchSetsRequest::~ListMergeRequestPatchSetsRequest() {}

std::string ListMergeRequestPatchSetsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListMergeRequestPatchSetsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListMergeRequestPatchSetsRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void ListMergeRequestPatchSetsRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string ListMergeRequestPatchSetsRequest::getAccessToken() const {
  return accessToken_;
}

void ListMergeRequestPatchSetsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long ListMergeRequestPatchSetsRequest::getLocalId() const {
  return localId_;
}

void ListMergeRequestPatchSetsRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

