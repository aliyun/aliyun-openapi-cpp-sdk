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

#include <alibabacloud/arms/model/ListGrafanaWorkspaceRequest.h>

using AlibabaCloud::ARMS::Model::ListGrafanaWorkspaceRequest;

ListGrafanaWorkspaceRequest::ListGrafanaWorkspaceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListGrafanaWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

ListGrafanaWorkspaceRequest::~ListGrafanaWorkspaceRequest() {}

std::string ListGrafanaWorkspaceRequest::getAliyunLang() const {
  return aliyunLang_;
}

void ListGrafanaWorkspaceRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::vector<ListGrafanaWorkspaceRequest::Tags> ListGrafanaWorkspaceRequest::getTags() const {
  return tags_;
}

void ListGrafanaWorkspaceRequest::setTags(const std::vector<ListGrafanaWorkspaceRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string ListGrafanaWorkspaceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListGrafanaWorkspaceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListGrafanaWorkspaceRequest::getRegionId() const {
  return regionId_;
}

void ListGrafanaWorkspaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

