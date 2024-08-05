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

#include <alibabacloud/arms/model/CreateGrafanaWorkspaceRequest.h>

using AlibabaCloud::ARMS::Model::CreateGrafanaWorkspaceRequest;

CreateGrafanaWorkspaceRequest::CreateGrafanaWorkspaceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateGrafanaWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

CreateGrafanaWorkspaceRequest::~CreateGrafanaWorkspaceRequest() {}

std::string CreateGrafanaWorkspaceRequest::getAliyunLang() const {
  return aliyunLang_;
}

void CreateGrafanaWorkspaceRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string CreateGrafanaWorkspaceRequest::getDescription() const {
  return description_;
}

void CreateGrafanaWorkspaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateGrafanaWorkspaceRequest::getGrafanaWorkspaceName() const {
  return grafanaWorkspaceName_;
}

void CreateGrafanaWorkspaceRequest::setGrafanaWorkspaceName(const std::string &grafanaWorkspaceName) {
  grafanaWorkspaceName_ = grafanaWorkspaceName;
  setParameter(std::string("GrafanaWorkspaceName"), grafanaWorkspaceName);
}

std::vector<CreateGrafanaWorkspaceRequest::Tags> CreateGrafanaWorkspaceRequest::getTags() const {
  return tags_;
}

void CreateGrafanaWorkspaceRequest::setTags(const std::vector<CreateGrafanaWorkspaceRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string CreateGrafanaWorkspaceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateGrafanaWorkspaceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateGrafanaWorkspaceRequest::getGrafanaVersion() const {
  return grafanaVersion_;
}

void CreateGrafanaWorkspaceRequest::setGrafanaVersion(const std::string &grafanaVersion) {
  grafanaVersion_ = grafanaVersion;
  setParameter(std::string("GrafanaVersion"), grafanaVersion);
}

std::string CreateGrafanaWorkspaceRequest::getPassword() const {
  return password_;
}

void CreateGrafanaWorkspaceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateGrafanaWorkspaceRequest::getRegionId() const {
  return regionId_;
}

void CreateGrafanaWorkspaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateGrafanaWorkspaceRequest::getGrafanaWorkspaceEdition() const {
  return grafanaWorkspaceEdition_;
}

void CreateGrafanaWorkspaceRequest::setGrafanaWorkspaceEdition(const std::string &grafanaWorkspaceEdition) {
  grafanaWorkspaceEdition_ = grafanaWorkspaceEdition;
  setParameter(std::string("GrafanaWorkspaceEdition"), grafanaWorkspaceEdition);
}

