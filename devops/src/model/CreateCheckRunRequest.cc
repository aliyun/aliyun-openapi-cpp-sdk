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

#include <alibabacloud/devops/model/CreateCheckRunRequest.h>

using AlibabaCloud::Devops::Model::CreateCheckRunRequest;

CreateCheckRunRequest::CreateCheckRunRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/check_runs/create_check_run"};
  setMethod(HttpRequest::Method::Post);
}

CreateCheckRunRequest::~CreateCheckRunRequest() {}

std::string CreateCheckRunRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateCheckRunRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateCheckRunRequest::getRepositoryIdentity() const {
  return repositoryIdentity_;
}

void CreateCheckRunRequest::setRepositoryIdentity(const std::string &repositoryIdentity) {
  repositoryIdentity_ = repositoryIdentity;
  setParameter(std::string("repositoryIdentity"), repositoryIdentity);
}

std::string CreateCheckRunRequest::getAccessToken() const {
  return accessToken_;
}

void CreateCheckRunRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateCheckRunRequest::body CreateCheckRunRequest::getBody() const {
  return body_;
}

void CreateCheckRunRequest::setBody(const CreateCheckRunRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".conclusion", body.conclusion);
  setBodyParameter(std::string("body") + ".output.summary", body.output.summary);
  for(int dep1 = 0; dep1 != body.output.images.size(); dep1++) {
    setBodyParameter(std::string("body") + ".output.images." + std::to_string(dep1 + 1) + ".imageUrl", body.output.images[dep1].imageUrl);
    setBodyParameter(std::string("body") + ".output.images." + std::to_string(dep1 + 1) + ".alt", body.output.images[dep1].alt);
    setBodyParameter(std::string("body") + ".output.images." + std::to_string(dep1 + 1) + ".caption", body.output.images[dep1].caption);
  }
  setBodyParameter(std::string("body") + ".output.text", body.output.text);
  setBodyParameter(std::string("body") + ".output.title", body.output.title);
  setBodyParameter(std::string("body") + ".completedAt", body.completedAt);
  setBodyParameter(std::string("body") + ".detailsUrl", body.detailsUrl);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".startedAt", body.startedAt);
  setBodyParameter(std::string("body") + ".externalId", body.externalId);
  for(int dep1 = 0; dep1 != body.annotations.size(); dep1++) {
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".path", body.annotations[dep1].path);
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".endLine", std::to_string(body.annotations[dep1].endLine));
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".startColumn", std::to_string(body.annotations[dep1].startColumn));
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".annotationLevel", body.annotations[dep1].annotationLevel);
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".startLine", std::to_string(body.annotations[dep1].startLine));
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".message", body.annotations[dep1].message);
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".title", body.annotations[dep1].title);
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".rawDetails", body.annotations[dep1].rawDetails);
    setBodyParameter(std::string("body") + ".annotations." + std::to_string(dep1 + 1) + ".endColumn", std::to_string(body.annotations[dep1].endColumn));
  }
  setBodyParameter(std::string("body") + ".headSha", body.headSha);
  setBodyParameter(std::string("body") + ".status", body.status);
}

