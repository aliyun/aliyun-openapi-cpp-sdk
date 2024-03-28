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

#include <alibabacloud/devops/model/ListMergeRequestFilesReadsRequest.h>

using AlibabaCloud::Devops::Model::ListMergeRequestFilesReadsRequest;

ListMergeRequestFilesReadsRequest::ListMergeRequestFilesReadsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/merge_requests/diffs/files_read_infos"};
  setMethod(HttpRequest::Method::Get);
}

ListMergeRequestFilesReadsRequest::~ListMergeRequestFilesReadsRequest() {}

std::string ListMergeRequestFilesReadsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListMergeRequestFilesReadsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListMergeRequestFilesReadsRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void ListMergeRequestFilesReadsRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string ListMergeRequestFilesReadsRequest::getAccessToken() const {
  return accessToken_;
}

void ListMergeRequestFilesReadsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListMergeRequestFilesReadsRequest::getToPatchSetBizId() const {
  return toPatchSetBizId_;
}

void ListMergeRequestFilesReadsRequest::setToPatchSetBizId(const std::string &toPatchSetBizId) {
  toPatchSetBizId_ = toPatchSetBizId;
  setParameter(std::string("toPatchSetBizId"), toPatchSetBizId);
}

std::string ListMergeRequestFilesReadsRequest::getFromPatchSetBizId() const {
  return fromPatchSetBizId_;
}

void ListMergeRequestFilesReadsRequest::setFromPatchSetBizId(const std::string &fromPatchSetBizId) {
  fromPatchSetBizId_ = fromPatchSetBizId;
  setParameter(std::string("fromPatchSetBizId"), fromPatchSetBizId);
}

long ListMergeRequestFilesReadsRequest::getLocalId() const {
  return localId_;
}

void ListMergeRequestFilesReadsRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

