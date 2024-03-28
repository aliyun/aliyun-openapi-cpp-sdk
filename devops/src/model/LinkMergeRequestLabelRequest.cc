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

#include <alibabacloud/devops/model/LinkMergeRequestLabelRequest.h>

using AlibabaCloud::Devops::Model::LinkMergeRequestLabelRequest;

LinkMergeRequestLabelRequest::LinkMergeRequestLabelRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/merge_requests/link_labels"};
  setMethod(HttpRequest::Method::Post);
}

LinkMergeRequestLabelRequest::~LinkMergeRequestLabelRequest() {}

std::string LinkMergeRequestLabelRequest::getOrganizationId() const {
  return organizationId_;
}

void LinkMergeRequestLabelRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string LinkMergeRequestLabelRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void LinkMergeRequestLabelRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string LinkMergeRequestLabelRequest::getAccessToken() const {
  return accessToken_;
}

void LinkMergeRequestLabelRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

LinkMergeRequestLabelRequest::body LinkMergeRequestLabelRequest::getBody() const {
  return body_;
}

void LinkMergeRequestLabelRequest::setBody(const LinkMergeRequestLabelRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.labelIds.size(); dep1++) {
    setBodyParameter(std::string("body") + ".labelIds." + std::to_string(dep1 + 1), body.labelIds[dep1]);
  }
}

long LinkMergeRequestLabelRequest::getLocalId() const {
  return localId_;
}

void LinkMergeRequestLabelRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

