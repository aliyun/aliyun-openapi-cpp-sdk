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

#include <alibabacloud/devops/model/UpdateRepositoryRequest.h>

using AlibabaCloud::Devops::Model::UpdateRepositoryRequest;

UpdateRepositoryRequest::UpdateRepositoryRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateRepositoryRequest::~UpdateRepositoryRequest() {}

std::string UpdateRepositoryRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateRepositoryRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long UpdateRepositoryRequest::getRepositoryId() const {
  return repositoryId_;
}

void UpdateRepositoryRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string UpdateRepositoryRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateRepositoryRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdateRepositoryRequest::body UpdateRepositoryRequest::getBody() const {
  return body_;
}

void UpdateRepositoryRequest::setBody(const UpdateRepositoryRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".wikiEnabled", body.wikiEnabled ? "true" : "false");
  for(int dep1 = 0; dep1 != body.projectCloneDownloadRoleList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".projectCloneDownloadRoleList." + std::to_string(dep1 + 1) + ".roleCode", std::to_string(body.projectCloneDownloadRoleList[dep1].roleCode));
    setBodyParameter(std::string("body") + ".projectCloneDownloadRoleList." + std::to_string(dep1 + 1) + ".allowed", body.projectCloneDownloadRoleList[dep1].allowed ? "true" : "false");
  }
  setBodyParameter(std::string("body") + ".adminSettingLanguage", body.adminSettingLanguage);
  setBodyParameter(std::string("body") + ".buildsEnabled", body.buildsEnabled ? "true" : "false");
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".issuesEnabled", body.issuesEnabled ? "true" : "false");
  setBodyParameter(std::string("body") + ".avatar", body.avatar);
  setBodyParameter(std::string("body") + ".openCloneDownloadControl", body.openCloneDownloadControl ? "true" : "false");
  setBodyParameter(std::string("body") + ".mergeRequestsEnabled", body.mergeRequestsEnabled ? "true" : "false");
  setBodyParameter(std::string("body") + ".path", body.path);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".checkEmail", body.checkEmail ? "true" : "false");
  for(int dep1 = 0; dep1 != body.projectCloneDownloadMethodList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".projectCloneDownloadMethodList." + std::to_string(dep1 + 1) + ".permissionCode", body.projectCloneDownloadMethodList[dep1].permissionCode);
    setBodyParameter(std::string("body") + ".projectCloneDownloadMethodList." + std::to_string(dep1 + 1) + ".allowed", body.projectCloneDownloadMethodList[dep1].allowed ? "true" : "false");
  }
  setBodyParameter(std::string("body") + ".visibilityLevel", std::to_string(body.visibilityLevel));
  setBodyParameter(std::string("body") + ".id", std::to_string(body.id));
  setBodyParameter(std::string("body") + ".defaultBranch", body.defaultBranch);
  setBodyParameter(std::string("body") + ".snippetsEnabled", body.snippetsEnabled ? "true" : "false");
}

