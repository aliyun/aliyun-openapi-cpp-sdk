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

#include <alibabacloud/devops/model/ListMergeRequestCommentsRequest.h>

using AlibabaCloud::Devops::Model::ListMergeRequestCommentsRequest;

ListMergeRequestCommentsRequest::ListMergeRequestCommentsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/merge_requests/comments/list_comments"};
  setMethod(HttpRequest::Method::Post);
}

ListMergeRequestCommentsRequest::~ListMergeRequestCommentsRequest() {}

std::string ListMergeRequestCommentsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListMergeRequestCommentsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListMergeRequestCommentsRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void ListMergeRequestCommentsRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string ListMergeRequestCommentsRequest::getAccessToken() const {
  return accessToken_;
}

void ListMergeRequestCommentsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

ListMergeRequestCommentsRequest::body ListMergeRequestCommentsRequest::getBody() const {
  return body_;
}

void ListMergeRequestCommentsRequest::setBody(const ListMergeRequestCommentsRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".filePath", body.filePath);
  for(int dep1 = 0; dep1 != body.patchSetBizIds.size(); dep1++) {
    setBodyParameter(std::string("body") + ".patchSetBizIds." + std::to_string(dep1 + 1), body.patchSetBizIds[dep1]);
  }
  setBodyParameter(std::string("body") + ".commentType", body.commentType);
  setBodyParameter(std::string("body") + ".state", body.state);
  setBodyParameter(std::string("body") + ".resolved", body.resolved ? "true" : "false");
}

long ListMergeRequestCommentsRequest::getLocalId() const {
  return localId_;
}

void ListMergeRequestCommentsRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

