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

#include <alibabacloud/devops/model/CreateCommentRequest.h>

using AlibabaCloud::Devops::Model::CreateCommentRequest;

CreateCommentRequest::CreateCommentRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/code_reviews/comments/create_comment"};
  setMethod(HttpRequest::Method::Post);
}

CreateCommentRequest::~CreateCommentRequest() {}

std::string CreateCommentRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateCommentRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateCommentRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void CreateCommentRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string CreateCommentRequest::getAccessToken() const {
  return accessToken_;
}

void CreateCommentRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateCommentRequest::body CreateCommentRequest::getBody() const {
  return body_;
}

void CreateCommentRequest::setBody(const CreateCommentRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".lineNumber", std::to_string(body.lineNumber));
  setBodyParameter(std::string("body") + ".filePath", body.filePath);
  setBodyParameter(std::string("body") + ".draft", body.draft ? "true" : "false");
  setBodyParameter(std::string("body") + ".patchSetBizId", body.patchSetBizId);
  setBodyParameter(std::string("body") + ".commentType", body.commentType);
  setBodyParameter(std::string("body") + ".parentCommentBizId", body.parentCommentBizId);
  setBodyParameter(std::string("body") + ".content", body.content);
  setBodyParameter(std::string("body") + ".resolved", body.resolved ? "true" : "false");
}

long CreateCommentRequest::getLocalId() const {
  return localId_;
}

void CreateCommentRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

