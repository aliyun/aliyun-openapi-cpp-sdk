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

#include <alibabacloud/arms/model/UpdateGrafanaWorkspaceRequest.h>

using AlibabaCloud::ARMS::Model::UpdateGrafanaWorkspaceRequest;

UpdateGrafanaWorkspaceRequest::UpdateGrafanaWorkspaceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateGrafanaWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGrafanaWorkspaceRequest::~UpdateGrafanaWorkspaceRequest() {}

std::string UpdateGrafanaWorkspaceRequest::getAliyunLang() const {
  return aliyunLang_;
}

void UpdateGrafanaWorkspaceRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string UpdateGrafanaWorkspaceRequest::getDescription() const {
  return description_;
}

void UpdateGrafanaWorkspaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateGrafanaWorkspaceRequest::getGrafanaWorkspaceName() const {
  return grafanaWorkspaceName_;
}

void UpdateGrafanaWorkspaceRequest::setGrafanaWorkspaceName(const std::string &grafanaWorkspaceName) {
  grafanaWorkspaceName_ = grafanaWorkspaceName;
  setParameter(std::string("GrafanaWorkspaceName"), grafanaWorkspaceName);
}

std::string UpdateGrafanaWorkspaceRequest::getGrafanaWorkspaceId() const {
  return grafanaWorkspaceId_;
}

void UpdateGrafanaWorkspaceRequest::setGrafanaWorkspaceId(const std::string &grafanaWorkspaceId) {
  grafanaWorkspaceId_ = grafanaWorkspaceId;
  setParameter(std::string("GrafanaWorkspaceId"), grafanaWorkspaceId);
}

std::string UpdateGrafanaWorkspaceRequest::getRegionId() const {
  return regionId_;
}

void UpdateGrafanaWorkspaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

