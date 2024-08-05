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

#include <alibabacloud/arms/model/UpdateGrafanaWorkspaceVersionRequest.h>

using AlibabaCloud::ARMS::Model::UpdateGrafanaWorkspaceVersionRequest;

UpdateGrafanaWorkspaceVersionRequest::UpdateGrafanaWorkspaceVersionRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateGrafanaWorkspaceVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGrafanaWorkspaceVersionRequest::~UpdateGrafanaWorkspaceVersionRequest() {}

std::string UpdateGrafanaWorkspaceVersionRequest::getAliyunLang() const {
  return aliyunLang_;
}

void UpdateGrafanaWorkspaceVersionRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string UpdateGrafanaWorkspaceVersionRequest::getGrafanaWorkspaceId() const {
  return grafanaWorkspaceId_;
}

void UpdateGrafanaWorkspaceVersionRequest::setGrafanaWorkspaceId(const std::string &grafanaWorkspaceId) {
  grafanaWorkspaceId_ = grafanaWorkspaceId;
  setParameter(std::string("GrafanaWorkspaceId"), grafanaWorkspaceId);
}

std::string UpdateGrafanaWorkspaceVersionRequest::getGrafanaVersion() const {
  return grafanaVersion_;
}

void UpdateGrafanaWorkspaceVersionRequest::setGrafanaVersion(const std::string &grafanaVersion) {
  grafanaVersion_ = grafanaVersion;
  setParameter(std::string("GrafanaVersion"), grafanaVersion);
}

std::string UpdateGrafanaWorkspaceVersionRequest::getRegionId() const {
  return regionId_;
}

void UpdateGrafanaWorkspaceVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

