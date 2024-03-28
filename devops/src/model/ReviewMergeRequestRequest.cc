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

#include <alibabacloud/devops/model/ReviewMergeRequestRequest.h>

using AlibabaCloud::Devops::Model::ReviewMergeRequestRequest;

ReviewMergeRequestRequest::ReviewMergeRequestRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/[repositoryId]/merge_requests/[localId]/submit_review_opinion"};
  setMethod(HttpRequest::Method::Post);
}

ReviewMergeRequestRequest::~ReviewMergeRequestRequest() {}

std::string ReviewMergeRequestRequest::getOrganizationId() const {
  return organizationId_;
}

void ReviewMergeRequestRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long ReviewMergeRequestRequest::getRepositoryId() const {
  return repositoryId_;
}

void ReviewMergeRequestRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string ReviewMergeRequestRequest::getAccessToken() const {
  return accessToken_;
}

void ReviewMergeRequestRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

ReviewMergeRequestRequest::body ReviewMergeRequestRequest::getBody() const {
  return body_;
}

void ReviewMergeRequestRequest::setBody(const ReviewMergeRequestRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.draftCommentIds.size(); dep1++) {
    setBodyParameter(std::string("body") + ".draftCommentIds." + std::to_string(dep1 + 1), body.draftCommentIds[dep1]);
  }
  setBodyParameter(std::string("body") + ".reviewOpinion", body.reviewOpinion);
  setBodyParameter(std::string("body") + ".reviewComment", body.reviewComment);
}

long ReviewMergeRequestRequest::getLocalId() const {
  return localId_;
}

void ReviewMergeRequestRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

