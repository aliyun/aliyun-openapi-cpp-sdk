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

#include <alibabacloud/devops/model/CreateMergeRequestRequest.h>

using AlibabaCloud::Devops::Model::CreateMergeRequestRequest;

CreateMergeRequestRequest::CreateMergeRequestRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/[repositoryId]/merge_requests"};
  setMethod(HttpRequest::Method::Post);
}

CreateMergeRequestRequest::~CreateMergeRequestRequest() {}

std::string CreateMergeRequestRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateMergeRequestRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long CreateMergeRequestRequest::getRepositoryId() const {
  return repositoryId_;
}

void CreateMergeRequestRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string CreateMergeRequestRequest::getAccessToken() const {
  return accessToken_;
}

void CreateMergeRequestRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateMergeRequestRequest::body CreateMergeRequestRequest::getBody() const {
  return body_;
}

void CreateMergeRequestRequest::setBody(const CreateMergeRequestRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".targetProjectId", std::to_string(body.targetProjectId));
  for(int dep1 = 0; dep1 != body.reviewerIds.size(); dep1++) {
    setBodyParameter(std::string("body") + ".reviewerIds." + std::to_string(dep1 + 1), body.reviewerIds[dep1]);
  }
  setBodyParameter(std::string("body") + ".createFrom", body.createFrom);
  setBodyParameter(std::string("body") + ".sourceProjectId", std::to_string(body.sourceProjectId));
  setBodyParameter(std::string("body") + ".sourceBranch", body.sourceBranch);
  setBodyParameter(std::string("body") + ".workItemIds", body.workItemIds);
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".title", body.title);
  setBodyParameter(std::string("body") + ".targetBranch", body.targetBranch);
}

