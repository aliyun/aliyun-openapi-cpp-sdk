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

#include <alibabacloud/devops/model/CreateRepositoryRequest.h>

using AlibabaCloud::Devops::Model::CreateRepositoryRequest;

CreateRepositoryRequest::CreateRepositoryRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/create"};
  setMethod(HttpRequest::Method::Post);
}

CreateRepositoryRequest::~CreateRepositoryRequest() {}

std::string CreateRepositoryRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateRepositoryRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateRepositoryRequest::getAccessToken() const {
  return accessToken_;
}

void CreateRepositoryRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

CreateRepositoryRequest::body CreateRepositoryRequest::getBody() const {
  return body_;
}

void CreateRepositoryRequest::setBody(const CreateRepositoryRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".importToken", body.importToken);
  setBodyParameter(std::string("body") + ".importTokenEncrypted", body.importTokenEncrypted);
  setBodyParameter(std::string("body") + ".isCryptoEnabled", body.isCryptoEnabled ? "true" : "false");
  setBodyParameter(std::string("body") + ".avatarUrl", body.avatarUrl);
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".path", body.path);
  setBodyParameter(std::string("body") + ".readmeType", body.readmeType);
  setBodyParameter(std::string("body") + ".importAccount", body.importAccount);
  setBodyParameter(std::string("body") + ".initStandardService", body.initStandardService ? "true" : "false");
  setBodyParameter(std::string("body") + ".namespaceId", std::to_string(body.namespaceId));
  setBodyParameter(std::string("body") + ".localImportUrl", body.localImportUrl);
  setBodyParameter(std::string("body") + ".importRepoType", body.importRepoType);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".importUrl", body.importUrl);
  setBodyParameter(std::string("body") + ".visibilityLevel", std::to_string(body.visibilityLevel));
  setBodyParameter(std::string("body") + ".importDemoProject", body.importDemoProject ? "true" : "false");
  setBodyParameter(std::string("body") + ".gitignoreType", body.gitignoreType);
}

bool CreateRepositoryRequest::getSync() const {
  return sync_;
}

void CreateRepositoryRequest::setSync(bool sync) {
  sync_ = sync;
  setParameter(std::string("sync"), sync ? "true" : "false");
}

bool CreateRepositoryRequest::getCreateParentPath() const {
  return createParentPath_;
}

void CreateRepositoryRequest::setCreateParentPath(bool createParentPath) {
  createParentPath_ = createParentPath;
  setParameter(std::string("createParentPath"), createParentPath ? "true" : "false");
}

